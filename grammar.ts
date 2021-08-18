const repChoice = (...args: RuleOrLiteral[]) => repeat(choice(...args));
const repChoice1 = (...args: RuleOrLiteral[]) => repeat1(choice(...args));
const optChoice = (...args: RuleOrLiteral[]) => optional(choice(...args));
const repSeq = (...args: RuleOrLiteral[]) => repeat(seq(...args));
const optSeq = (...args: RuleOrLiteral[]) => optional(seq(...args));
const commaSep = (arg: RuleOrLiteral) =>
  optSeq(arg, optional(repSeq(",", arg)));
const dotSep = (arg: RuleOrLiteral) => seq(arg, optional(repSeq(".", arg)));

enum PREC {
  ASSIGN,
  OR,
  AND,
  EQUAL,
  COMPARE,
  INFIX,
  ELVIS,
  RANGE,
  ADD,
  MUL,
  AS,
  PRIMARY,
}

const binary_op: Array<[RuleOrLiteral, PREC]> = [
  ["||", PREC.OR],
  ["&&", PREC.AND],
  ["!=", PREC.EQUAL],
  ["!==", PREC.EQUAL],
  ["==", PREC.EQUAL],
  ["===", PREC.EQUAL],
  ["<", PREC.COMPARE],
  [">", PREC.COMPARE],
  ["<=", PREC.COMPARE],
  [">=", PREC.COMPARE],
  ["in", PREC.INFIX],
  [seq("?", ":"), PREC.ELVIS],
  ["..", PREC.RANGE],
  ["+", PREC.ADD],
  ["-", PREC.ADD],
  ["*", PREC.MUL],
  ["/", PREC.MUL],
  ["as", PREC.AS],
];

const dec_digits = /[0-9][0-9_]*[0-9]?/;
const float_exp = /[eE][+-]?[0-9][0-9_]*[0-9]?/;

export = grammar({
  name: "kotlin",
  inline: ($) => [$.statement],
  extras: ($) => [$.comment, /\s/],
  word: ($) => $._identifier,
  rules: {
    source_file: ($) => seq(optional($.shebang), $.statement),
    shebang: (_) => token(/#![^\n]*\n/),
    comment: (_) => token(choice(/\/\*.*?\*\//, /\/\/[^\n]*\n/)),
    statement: ($) => seq(optional($.annotation), $._statement),
    _statement: ($) => choice($._declaration, $._expression),
    _declaration: ($) => choice($.func_decl, $.class_decl, $.object_decl),

    // Types
    _type: ($) => choice($.func_type, $.type_user, $.type_paren, $.type_null),
    func_type: ($) => seq("(", commaSep($._type), ")", "->", $._type),
    type_user: ($) =>
      seq(optional(dotSep($.identifier)), choice("*", $.identifier)),
    type_paren: ($) => seq("(", $.func_type, ")"),
    type_null: ($) => seq(choice($.type_user, $.type_paren), "?"),

    // Annotation
    annotation: ($) => seq("@", $.identifier),

    // Declaration
    func_decl: ($) => seq("func", field("name", $.identifier), "(", ")"),
    class_decl: ($) =>
      seq(
        "class",
        field("name", $.identifier),
        optSeq(":", field("super", $.identifier))
      ),
    object_decl: ($) => seq("object", field("name", $.identifier)),

    // Expression
    _expression: ($) =>
      choice(
        $.binary_expr,
        $.identifier,
        $.integer,
        $.float,
        $.call,
        $.selector,
        $.string,
        "false",
        "true",
        "null"
      ),

    binary_expr: ($) =>
      choice(
        ...binary_op.map(([op, precedence]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", op),
              field("right", $._expression)
            )
          )
        )
      ),

    call: ($) =>
      prec(
        PREC.PRIMARY,
        seq(field("function", $._expression), "(", commaSep($._expression), ")")
      ),

    selector: ($) =>
      prec(
        PREC.PRIMARY,
        seq(field("operand", $._expression), ".", field("field", $.identifier))
      ),

    identifier: ($) =>
      choice(
        "abstract",
        "annotation",
        "by",
        "catch",
        "companion",
        "constructor",
        "crossinline",
        "data",
        "dynamic",
        "enum",
        "external",
        "final",
        "finally",
        "get",
        "import",
        "infix",
        "init",
        "inline",
        "inner",
        "internal",
        "lateinit",
        "noinline",
        "open",
        "operator",
        "out",
        "override",
        "private",
        "protected",
        "public",
        "reified",
        "sealed",
        "tailrec",
        "set",
        "vararg",
        "where",
        "field",
        "property",
        "receiver",
        "param",
        "setparam",
        "delegate",
        "file",
        "expect",
        "actual",
        "const",
        "suspend",
        "value",
        $._identifier
      ),
    _identifier: (_) => /[\p{L}_][\p{L}\p{N}_]*/,

    // Literals
    integer: (_) => token(dec_digits),
    float: (_) =>
      token(
        choice(
          seq(optional(dec_digits), ".", dec_digits, float_exp),
          seq(dec_digits, float_exp)
        )
      ),
    string: (_) => token(seq('"', repeat(/[^"]/), '"')),
  },
});
