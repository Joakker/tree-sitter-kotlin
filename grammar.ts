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
  STMT,
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
const endl = /[\r\n;]+/;

export = grammar({
  name: "kotlin",

  inline: ($) => [$.statement, $.expression],
  extras: ($) => [$.comment, /\s+/],
  word: ($) => $._identifier,

  rules: {
    source_file: ($) => seq(optional($.shebang), repeat($.statement)),
    shebang: (_) => token(/#![^\r\n]*/),
    comment: (_) => token(choice(/\/\*.*?\*\//, seq("//", /[^\r\n]*/, endl))),
    statement: ($) => seq(optional($.annotation), $._statement, optional(endl)),
    _statement: ($) =>
      prec.right(
        PREC.STMT,
        choice(
          $._declaration,
          $._expression,
          $.block,
          $.for_stmt,
          $.while_stmt,
          $.do_while
        )
      ),
    _declaration: ($) =>
      choice($.func_decl, $.class_decl, $.object_decl, $.property),

    // Types
    _type: ($) => choice($.func_type, $.type_user, $.type_paren, $.type_null),
    func_type: ($) => seq("(", commaSep($._type), ")", "->", $._type),
    type_user: ($) =>
      prec.left(
        PREC.PRIMARY,
        seq(optional(dotSep($.identifier)), choice("*", $.identifier))
      ),
    type_paren: ($) => prec(PREC.PRIMARY, seq("(", $.func_type, ")")),
    type_null: ($) => seq(choice($.type_user, $.type_paren), "?"),

    type_params: ($) => seq("<", commaSep($.type_param), ">"),
    type_param: ($) => seq(field("name", $.identifier), optSeq(":", $._type)),

    // Annotation
    annotation: ($) => seq("@", $.identifier),

    // Declaration
    func_decl: ($) =>
      prec.right(
        seq(
          "fun",
          optional($.type_params),
          field("name", $.identifier),
          $.param_list,
          optional($.func_body),
          optional(field("return", $._type))
        )
      ),
    class_decl: ($) =>
      prec.left(
        seq(
          "class",
          optional($.type_params),
          field("name", $.identifier),
          optSeq(":", field("super", $.identifier)),
          choice(endl, $.class_body)
        )
      ),
    object_decl: ($) =>
      seq("object", optional($.type_params), field("name", $.identifier)),

    // Function
    param_list: ($) => seq("(", commaSep($.param_decl), ")"),
    param_decl: ($) =>
      seq(field("name", $.identifier), ":", field("type", $._type)),
    func_body: ($) =>
      choice(seq("=", $.expression), seq("{", repeat($.statement), "}")),

    // Class body
    class_body: ($) =>
      prec.right(
        PREC.PRIMARY,
        seq(
          "{",
          optional($.enum_entries),
          repeat(prec(PREC.PRIMARY, $._declaration)),
          "}"
        )
      ),
    property: ($) =>
      prec.right(
        seq(
          choice("var", "val"),
          field("name", $.identifier),
          optSeq(":", field("type", $._type)),
          optChoice($.delegate, seq("=", $.expression)),
          optSeq(
            endl,
            choice(
              seq($.getter, optSeq(endl, $.setter)),
              seq($.setter, optSeq(endl, $.getter))
            )
          )
        )
      ),
    setter: ($) =>
      seq(
        "set",
        "(",
        alias(
          seq(field("name", $.identifier), optSeq(":", field("type", $._type))),
          $.param_decl
        ),
        ")",
        $.func_body
      ),
    getter: ($) => seq("get", optSeq("(", ")"), $.func_body),
    delegate: ($) => seq("by", $.expression),
    enum_entries: ($) => seq(commaSep($.enum_entry), ";"),
    enum_entry: ($) =>
      prec.left(
        PREC.STMT,
        seq(
          field("name", $.identifier),
          optional($.args),
          optional($.class_body)
        )
      ),

    // For loop
    for_stmt: ($) =>
      prec.left(
        seq(
          "for",
          "(",
          choice($.var_decl, $.multivar_decl),
          "in",
          $.expression,
          ")",
          $.statement
        )
      ),
    var_decl: ($) =>
      seq(field("name", $.identifier), optSeq(":", field("type", $._type))),
    multivar_decl: ($) => seq("(", commaSep($.var_decl), ")"),

    // While loop
    while_stmt: ($) =>
      prec.left(seq("while", "(", $.expression, ")", $.statement)),

    // Do while loop
    do_while: ($) =>
      prec.left(seq("do", $.statement, "while", "(", $.expression, ")")),

    // Block
    block: ($) => seq("{", repeat($.statement), "}"),

    // Expression
    expression: ($) => choice($._expression, $.lambda),
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
      prec(PREC.PRIMARY, seq(field("function", $._expression), $.args)),
    args: ($) =>
      prec.right(choice($._comma_args, seq(optional($._comma_args), $.lambda))),
    _comma_args: ($) => seq("(", commaSep($.expression), ")"),

    lambda: ($) =>
      prec.left(
        seq(
          "{",
          optSeq(field("args", choice($.var_decl, $.multivar_decl)), "->"),
          repeat($.statement),
          "}"
        )
      ),
    selector: ($) =>
      prec(
        PREC.PRIMARY,
        seq(field("operand", $.expression), ".", field("field", $.identifier))
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
