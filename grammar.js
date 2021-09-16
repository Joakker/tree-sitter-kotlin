"use strict";
const optChoice = (...args) => optional(choice(...args));
const repSeq = (...args) => repeat(seq(...args));
const optSeq = (...args) => optional(seq(...args));
const commaSep = (arg) => optSeq(arg, optional(repSeq(",", arg)), optional(","));
const dotSep = (arg) => seq(arg, optional(repSeq(".", arg)));
const repChoice = (...args) => repeat(choice(...args));
var PREC;
(function (PREC) {
    PREC[PREC["ASSIGN"] = 0] = "ASSIGN";
    PREC[PREC["OR"] = 1] = "OR";
    PREC[PREC["AND"] = 2] = "AND";
    PREC[PREC["EQUAL"] = 3] = "EQUAL";
    PREC[PREC["COMPARE"] = 4] = "COMPARE";
    PREC[PREC["INFIX"] = 5] = "INFIX";
    PREC[PREC["ELVIS"] = 6] = "ELVIS";
    PREC[PREC["RANGE"] = 7] = "RANGE";
    PREC[PREC["ADD"] = 8] = "ADD";
    PREC[PREC["MUL"] = 9] = "MUL";
    PREC[PREC["AS"] = 10] = "AS";
    PREC[PREC["ACCESS"] = 11] = "ACCESS";
    PREC[PREC["STMT"] = 12] = "STMT";
    PREC[PREC["TYPE"] = 13] = "TYPE";
    PREC[PREC["PRIMARY"] = 14] = "PRIMARY";
    PREC[PREC["THROW"] = 15] = "THROW";
    PREC[PREC["LABEL"] = 16] = "LABEL";
})(PREC || (PREC = {}));
const dec_digits = /[0-9][0-9_]*[0-9]?/;
const float_exp = /[eE][+-]?[0-9][0-9_]*[0-9]?/;
const endl = /[\r\n;]+/;
module.exports = grammar({
    name: "kotlin",
    inline: ($) => [$.statement, $.expression],
    extras: ($) => [$.comment, /\s+/],
    word: ($) => $._identifier,
    conflicts: ($) => [
        [$.call, $.binary_expr],
        [$.modifiers, $.identifier],
    ],
    rules: {
        source_file: ($) => seq(optional($.shebang), repeat($.statement)),
        shebang: (_) => token(/#![^\r\n]*/),
        comment: (_) => token(choice(/\/\*.*?\*\//, seq("//", /[^\r\n]*/, endl))),
        statement: ($) => seq(repChoice($.annotation, $.label), $._statement, endl),
        _statement: ($) => prec.right(PREC.STMT, choice($._declaration, $._expression, $.import_stmt, $.block, $.for_stmt, $.while_stmt, $.do_while)),
        _declaration: ($) => seq(optional($.modifiers), choice($.func_decl, $.class_decl, $.object_decl, $.property)),
        // Modifiers
        modifiers: (_) => choice("private", "public"),
        // Label
        label: ($) => prec.left(PREC.LABEL, seq(field("name", $.identifier), "@")),
        // Import
        import_stmt: ($) => prec.left(PREC.PRIMARY, seq("import", $.type_user)),
        // Types
        _type: ($) => choice($.func_type, $.type_user, $.type_paren, $.type_null),
        func_type: ($) => seq("(", commaSep($._type), ")", "->", $._type),
        type_user: ($) => prec.left(PREC.TYPE, seq(optSeq(dotSep($.identifier), "."), choice("*", $.identifier))),
        type_paren: ($) => prec(PREC.PRIMARY, seq("(", $.func_type, ")")),
        type_null: ($) => seq(choice($.type_user, $.type_paren), "?"),
        type_params: ($) => seq("<", commaSep($.type_param), ">"),
        type_param: ($) => seq(field("name", $.identifier), optSeq(":", $._type)),
        type_constraints: ($) => prec.right(seq("where", commaSep($.type_constraint))),
        type_constraint: ($) => seq(repeat($.annotation), field("type", $.identifier), ":", field("super", $._type)),
        type_args: ($) => seq("<", commaSep($._type), ">"),
        // Annotation
        annotation: ($) => seq("@", $.identifier),
        // Declaration
        func_decl: ($) => prec.right(seq("fun", optional($.type_params), field("name", $.identifier), $.param_list, optSeq(":", field("return", $._type)), optional($.type_constraints), optional($.func_body))),
        class_decl: ($) => prec.left(seq("class", optional($.type_params), field("name", $.identifier), optional($.primary_constructor), optSeq(":", field("super", $.identifier)), optional($.type_constraints), choice(endl, $.class_body))),
        object_decl: ($) => prec.right(seq(optional("companion"), "object", optional($.type_params), optional(field("name", $.identifier)))),
        primary_constructor: ($) => seq(optSeq(optional($.modifiers), "constructor"), $.class_params),
        class_params: ($) => seq("(", commaSep($.class_param), ")"),
        class_param: ($) => seq(optional($.modifiers), optChoice("var", "val"), field("name", $.identifier), ":", field("type", $._type), optSeq("=", field("init", $.expression))),
        // Function
        param_list: ($) => seq("(", commaSep($.param_decl), ")"),
        param_decl: ($) => seq(field("name", $.identifier), ":", field("type", $._type), optSeq("=", field("init", $._expression))),
        func_body: ($) => choice(seq("=", $.expression), seq("{", repeat($.statement), "}")),
        // Class body
        class_body: ($) => prec.right(PREC.PRIMARY, seq("{", optional($.enum_entries), repeat(prec(PREC.PRIMARY, $._declaration)), "}")),
        property: ($) => prec.right(seq(choice("var", "val"), field("name", $.identifier), optSeq(":", field("type", $._type)), optional($.type_constraints), optChoice($.delegate, seq("=", $.expression)), optSeq(endl, choice(seq($.getter, optSeq(endl, $.setter)), seq($.setter, optSeq(endl, $.getter)))))),
        setter: ($) => seq("set", "(", alias(seq(field("name", $.identifier), optSeq(":", field("type", $._type))), $.param_decl), ")", $.func_body),
        getter: ($) => seq("get", optSeq("(", ")"), $.func_body),
        delegate: ($) => seq("by", $.expression),
        enum_entries: ($) => seq(commaSep($.enum_entry), ";"),
        enum_entry: ($) => prec.left(PREC.STMT, seq(field("name", $.identifier), optional($.args), optional($.class_body))),
        // For loop
        for_stmt: ($) => prec.left(seq("for", "(", choice($.var_decl, $.multivar_decl), "in", $.expression, ")", $.statement)),
        var_decl: ($) => seq(field("name", $.identifier), optSeq(":", field("type", $._type))),
        multivar_decl: ($) => seq("(", commaSep($.var_decl), ")"),
        // While loop
        while_stmt: ($) => prec.left(seq("while", "(", field("condition", $.expression), ")", $.statement)),
        // Do while loop
        do_while: ($) => prec.left(seq("do", $.statement, "while", "(", field("condition", $.expression), ")")),
        // Block
        block: ($) => seq("{", repeat($.statement), "}"),
        // Expression
        expression: ($) => choice($._expression, $.lambda),
        _expression: ($) => prec(PREC.PRIMARY, choice($.paren_expr, $.binary_expr, $.try_expr, $.throw_expr, $.return_expr, $.continue_expr, $.break_expr, $.identifier, $.integer, $.float, $.call, $.selector, $.string, "false", "true", "null")),
        paren_expr: ($) => seq("(", $._expression, ")"),
        binary_expr: ($) => {
            let binary_expr = [
                ["=", PREC.ASSIGN],
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
                ["%", PREC.MUL],
                ["/", PREC.MUL],
                [choice("as", "as?"), PREC.AS],
                [$.identifier, PREC.INFIX],
            ];
            return choice(...binary_expr.map(([op, precedence]) => prec.left(precedence, seq(field("left", $._expression), field("operator", op), field("right", $._expression)))));
        },
        try_expr: ($) => prec.left(seq("try", $.block, choice(seq(repeat1($.catch_block), optional($.finally_block)), $.finally_block))),
        catch_block: ($) => seq("catch", "(", repeat($.annotation), field("exception", $.identifier), ":", field("name", $._type), optional(","), ")", $.block),
        finally_block: ($) => seq("finally", $.block),
        throw_expr: ($) => prec.right(PREC.THROW, seq("throw", $.expression)),
        return_expr: ($) => prec.left(seq(choice("return", seq("return@", field("label", $.identifier))), optional($.expression))),
        continue_expr: ($) => choice("continue", seq("continue@", field("label", $.identifier))),
        break_expr: ($) => choice("break", seq("break@", field("label", $.identifier))),
        call: ($) => prec(PREC.PRIMARY, seq(field("function", $._expression), optional($.type_args), $.args)),
        args: ($) => prec.right(choice($._comma_args, seq(optional($._comma_args), $.lambda))),
        _comma_args: ($) => seq("(", commaSep($.arg), ")"),
        arg: ($) => seq(optSeq(field("name", $.identifier), "="), $.expression),
        lambda: ($) => prec.left(seq("{", optSeq(field("args", choice($.var_decl, $.multivar_decl)), "->"), repeat($.statement), "}")),
        selector: ($) => prec.left(PREC.ACCESS, seq(field("operand", $._expression), ".", field("field", $.identifier))),
        identifier: ($) => choice("abstract", "annotation", "by", "catch", "companion", "constructor", "crossinline", "data", "dynamic", "enum", "external", "final", "finally", "get", "import", "infix", "init", "inline", "inner", "internal", "lateinit", "noinline", "open", "operator", "out", "override", "private", "protected", "public", "reified", "sealed", "tailrec", "set", "vararg", "where", "field", "property", "receiver", "param", "setparam", "delegate", "file", "expect", "actual", "const", "suspend", "value", $._identifier),
        _identifier: (_) => /[\p{L}_][\p{L}\p{N}_]*/,
        // Literals
        integer: (_) => token(dec_digits),
        float: (_) => token(choice(seq(optional(dec_digits), ".", dec_digits, float_exp), seq(dec_digits, float_exp))),
        string: (_) => token(seq('"', repeat(/[^"]/), '"')),
    },
});
