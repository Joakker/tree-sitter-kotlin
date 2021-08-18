#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym__identifier = 1,
  sym_shebang = 2,
  sym_comment = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_DOT = 8,
  anon_sym_STAR = 9,
  anon_sym_QMARK = 10,
  anon_sym_AT = 11,
  anon_sym_func = 12,
  anon_sym_class = 13,
  anon_sym_COLON = 14,
  anon_sym_object = 15,
  anon_sym_false = 16,
  anon_sym_true = 17,
  anon_sym_null = 18,
  anon_sym_PIPE_PIPE = 19,
  anon_sym_AMP_AMP = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_BANG_EQ_EQ = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_EQ_EQ_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_in = 29,
  anon_sym_DOT_DOT = 30,
  anon_sym_PLUS = 31,
  anon_sym_DASH = 32,
  anon_sym_SLASH = 33,
  anon_sym_as = 34,
  anon_sym_abstract = 35,
  anon_sym_annotation = 36,
  anon_sym_by = 37,
  anon_sym_catch = 38,
  anon_sym_companion = 39,
  anon_sym_constructor = 40,
  anon_sym_crossinline = 41,
  anon_sym_data = 42,
  anon_sym_dynamic = 43,
  anon_sym_enum = 44,
  anon_sym_external = 45,
  anon_sym_final = 46,
  anon_sym_finally = 47,
  anon_sym_get = 48,
  anon_sym_import = 49,
  anon_sym_infix = 50,
  anon_sym_init = 51,
  anon_sym_inline = 52,
  anon_sym_inner = 53,
  anon_sym_internal = 54,
  anon_sym_lateinit = 55,
  anon_sym_noinline = 56,
  anon_sym_open = 57,
  anon_sym_operator = 58,
  anon_sym_out = 59,
  anon_sym_override = 60,
  anon_sym_private = 61,
  anon_sym_protected = 62,
  anon_sym_public = 63,
  anon_sym_reified = 64,
  anon_sym_sealed = 65,
  anon_sym_tailrec = 66,
  anon_sym_set = 67,
  anon_sym_vararg = 68,
  anon_sym_where = 69,
  anon_sym_field = 70,
  anon_sym_property = 71,
  anon_sym_receiver = 72,
  anon_sym_param = 73,
  anon_sym_setparam = 74,
  anon_sym_delegate = 75,
  anon_sym_file = 76,
  anon_sym_expect = 77,
  anon_sym_actual = 78,
  anon_sym_const = 79,
  anon_sym_suspend = 80,
  anon_sym_value = 81,
  sym_integer = 82,
  sym_float = 83,
  sym_string = 84,
  sym_source_file = 85,
  sym__statement = 86,
  sym__declaration = 87,
  sym_annotation = 88,
  sym_func_decl = 89,
  sym_class_decl = 90,
  sym_object_decl = 91,
  sym__expression = 92,
  sym_binary_expr = 93,
  sym_call = 94,
  sym_selector = 95,
  sym_identifier = 96,
  aux_sym_call_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_shebang] = "shebang",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_func] = "func",
  [anon_sym_class] = "class",
  [anon_sym_COLON] = ":",
  [anon_sym_object] = "object",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [anon_sym_null] = "null",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_as] = "as",
  [anon_sym_abstract] = "abstract",
  [anon_sym_annotation] = "annotation",
  [anon_sym_by] = "by",
  [anon_sym_catch] = "catch",
  [anon_sym_companion] = "companion",
  [anon_sym_constructor] = "constructor",
  [anon_sym_crossinline] = "crossinline",
  [anon_sym_data] = "data",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_enum] = "enum",
  [anon_sym_external] = "external",
  [anon_sym_final] = "final",
  [anon_sym_finally] = "finally",
  [anon_sym_get] = "get",
  [anon_sym_import] = "import",
  [anon_sym_infix] = "infix",
  [anon_sym_init] = "init",
  [anon_sym_inline] = "inline",
  [anon_sym_inner] = "inner",
  [anon_sym_internal] = "internal",
  [anon_sym_lateinit] = "lateinit",
  [anon_sym_noinline] = "noinline",
  [anon_sym_open] = "open",
  [anon_sym_operator] = "operator",
  [anon_sym_out] = "out",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_public] = "public",
  [anon_sym_reified] = "reified",
  [anon_sym_sealed] = "sealed",
  [anon_sym_tailrec] = "tailrec",
  [anon_sym_set] = "set",
  [anon_sym_vararg] = "vararg",
  [anon_sym_where] = "where",
  [anon_sym_field] = "field",
  [anon_sym_property] = "property",
  [anon_sym_receiver] = "receiver",
  [anon_sym_param] = "param",
  [anon_sym_setparam] = "setparam",
  [anon_sym_delegate] = "delegate",
  [anon_sym_file] = "file",
  [anon_sym_expect] = "expect",
  [anon_sym_actual] = "actual",
  [anon_sym_const] = "const",
  [anon_sym_suspend] = "suspend",
  [anon_sym_value] = "value",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration] = "_declaration",
  [sym_annotation] = "annotation",
  [sym_func_decl] = "func_decl",
  [sym_class_decl] = "class_decl",
  [sym_object_decl] = "object_decl",
  [sym__expression] = "_expression",
  [sym_binary_expr] = "binary_expr",
  [sym_call] = "call",
  [sym_selector] = "selector",
  [sym_identifier] = "identifier",
  [aux_sym_call_repeat1] = "call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_shebang] = sym_shebang,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_BANG_EQ_EQ] = anon_sym_BANG_EQ_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_annotation] = anon_sym_annotation,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_companion] = anon_sym_companion,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_crossinline] = anon_sym_crossinline,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_infix] = anon_sym_infix,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_lateinit] = anon_sym_lateinit,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_operator] = anon_sym_operator,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_reified] = anon_sym_reified,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_tailrec] = anon_sym_tailrec,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_vararg] = anon_sym_vararg,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_property] = anon_sym_property,
  [anon_sym_receiver] = anon_sym_receiver,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_setparam] = anon_sym_setparam,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_expect] = anon_sym_expect,
  [anon_sym_actual] = anon_sym_actual,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_suspend] = anon_sym_suspend,
  [anon_sym_value] = anon_sym_value,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration] = sym__declaration,
  [sym_annotation] = sym_annotation,
  [sym_func_decl] = sym_func_decl,
  [sym_class_decl] = sym_class_decl,
  [sym_object_decl] = sym_object_decl,
  [sym__expression] = sym__expression,
  [sym_binary_expr] = sym_binary_expr,
  [sym_call] = sym_call,
  [sym_selector] = sym_selector,
  [sym_identifier] = sym_identifier,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_annotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_companion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crossinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lateinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tailrec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vararg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_property] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_receiver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suspend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_func_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_object_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_function = 2,
  field_left = 3,
  field_name = 4,
  field_operand = 5,
  field_operator = 6,
  field_right = 7,
  field_super = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_super] = "super",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_function, 0},
  [2] =
    {field_field, 2},
    {field_operand, 0},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_name, 1},
    {field_super, 3},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym__identifier_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2365
                ? (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4193
        ? (c < 3482
          ? (c < 3261
            ? (c < 3192
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3313
                ? (c < 3296
                  ? c == 3294
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3430
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3416 && c <= 3425)))
                : (c <= 3448 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3762
            ? (c < 3664
              ? (c < 3558
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3904
              ? (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))
              : (c <= 3911 || (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5121
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4824
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6128
            ? (c < 5952
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6987)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11310 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42240
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40956
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 40956 || (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : c <= 42237)))))
            : (c <= 42508 || (c < 42946
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42735 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42943)))))
              : (c <= 42954 || (c < 43020
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67639
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))))
              : (c <= 67640 || (c < 67705
                ? (c < 67647
                  ? c == 67644
                  : (c <= 67669 || (c >= 67672 && c <= 67702)))
                : (c <= 67742 || (c < 67808
                  ? (c >= 67751 && c <= 67759)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68028
                ? (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68047 || (c < 68112
                  ? (c >= 68050 && c <= 68096)
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68160
                  ? (c >= 68121 && c <= 68149)
                  : (c <= 68168 || (c >= 68192 && c <= 68222)))
                : (c <= 68255 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_shebang);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'j') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(140);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_infix);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_param);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(211);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_actual);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_expect);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 198:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_vararg);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 225:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_reified);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_suspend);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_tailrec);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_lateinit);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_noinline);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_property);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_receiver);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_setparam);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_companion);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_annotation);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_crossinline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_annotation] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_companion] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_crossinline] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_inner] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_lateinit] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_reified] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_tailrec] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_vararg] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_property] = ACTIONS(1),
    [anon_sym_receiver] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_setparam] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_expect] = ACTIONS(1),
    [anon_sym_actual] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_suspend] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym__statement] = STATE(48),
    [sym__declaration] = STATE(48),
    [sym_annotation] = STATE(3),
    [sym_func_decl] = STATE(48),
    [sym_class_decl] = STATE(48),
    [sym_object_decl] = STATE(48),
    [sym__expression] = STATE(42),
    [sym_binary_expr] = STATE(42),
    [sym_call] = STATE(42),
    [sym_selector] = STATE(42),
    [sym_identifier] = STATE(42),
    [sym__identifier] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(55),
    [sym__declaration] = STATE(55),
    [sym_annotation] = STATE(4),
    [sym_func_decl] = STATE(55),
    [sym_class_decl] = STATE(55),
    [sym_object_decl] = STATE(55),
    [sym__expression] = STATE(42),
    [sym_binary_expr] = STATE(42),
    [sym_call] = STATE(42),
    [sym_selector] = STATE(42),
    [sym_identifier] = STATE(42),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [3] = {
    [sym__statement] = STATE(55),
    [sym__declaration] = STATE(55),
    [sym_func_decl] = STATE(55),
    [sym_class_decl] = STATE(55),
    [sym_object_decl] = STATE(55),
    [sym__expression] = STATE(42),
    [sym_binary_expr] = STATE(42),
    [sym_call] = STATE(42),
    [sym_selector] = STATE(42),
    [sym_identifier] = STATE(42),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [4] = {
    [sym__statement] = STATE(47),
    [sym__declaration] = STATE(47),
    [sym_func_decl] = STATE(47),
    [sym_class_decl] = STATE(47),
    [sym_object_decl] = STATE(47),
    [sym__expression] = STATE(42),
    [sym_binary_expr] = STATE(42),
    [sym_call] = STATE(42),
    [sym_selector] = STATE(42),
    [sym_identifier] = STATE(42),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_object] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [sym_string] = ACTIONS(19),
  },
  [5] = {
    [sym__expression] = STATE(34),
    [sym_binary_expr] = STATE(34),
    [sym_call] = STATE(34),
    [sym_selector] = STATE(34),
    [sym_identifier] = STATE(34),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [6] = {
    [sym__expression] = STATE(39),
    [sym_binary_expr] = STATE(39),
    [sym_call] = STATE(39),
    [sym_selector] = STATE(39),
    [sym_identifier] = STATE(39),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_null] = ACTIONS(27),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
  },
  [7] = {
    [sym__expression] = STATE(41),
    [sym_binary_expr] = STATE(41),
    [sym_call] = STATE(41),
    [sym_selector] = STATE(41),
    [sym_identifier] = STATE(41),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
  },
  [8] = {
    [sym__expression] = STATE(29),
    [sym_binary_expr] = STATE(29),
    [sym_call] = STATE(29),
    [sym_selector] = STATE(29),
    [sym_identifier] = STATE(29),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
  },
  [9] = {
    [sym__expression] = STATE(26),
    [sym_binary_expr] = STATE(26),
    [sym_call] = STATE(26),
    [sym_selector] = STATE(26),
    [sym_identifier] = STATE(26),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_null] = ACTIONS(39),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [10] = {
    [sym__expression] = STATE(31),
    [sym_binary_expr] = STATE(31),
    [sym_call] = STATE(31),
    [sym_selector] = STATE(31),
    [sym_identifier] = STATE(31),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(43),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
  },
  [11] = {
    [sym__expression] = STATE(32),
    [sym_binary_expr] = STATE(32),
    [sym_call] = STATE(32),
    [sym_selector] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_null] = ACTIONS(47),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
  },
  [12] = {
    [sym__expression] = STATE(37),
    [sym_binary_expr] = STATE(37),
    [sym_call] = STATE(37),
    [sym_selector] = STATE(37),
    [sym_identifier] = STATE(37),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_null] = ACTIONS(51),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
  },
  [13] = {
    [sym__expression] = STATE(40),
    [sym_binary_expr] = STATE(40),
    [sym_call] = STATE(40),
    [sym_selector] = STATE(40),
    [sym_identifier] = STATE(40),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
  },
  [14] = {
    [sym__expression] = STATE(36),
    [sym_binary_expr] = STATE(36),
    [sym_call] = STATE(36),
    [sym_selector] = STATE(36),
    [sym_identifier] = STATE(36),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_null] = ACTIONS(59),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(61),
    [sym_string] = ACTIONS(61),
  },
  [15] = {
    [sym__expression] = STATE(27),
    [sym_binary_expr] = STATE(27),
    [sym_call] = STATE(27),
    [sym_selector] = STATE(27),
    [sym_identifier] = STATE(27),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [sym_string] = ACTIONS(65),
  },
  [16] = {
    [sym__expression] = STATE(38),
    [sym_binary_expr] = STATE(38),
    [sym_call] = STATE(38),
    [sym_selector] = STATE(38),
    [sym_identifier] = STATE(38),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_null] = ACTIONS(67),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
  },
  [17] = {
    [sym__identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(71),
    [anon_sym_class] = ACTIONS(71),
    [anon_sym_object] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_null] = ACTIONS(71),
    [anon_sym_abstract] = ACTIONS(71),
    [anon_sym_annotation] = ACTIONS(71),
    [anon_sym_by] = ACTIONS(71),
    [anon_sym_catch] = ACTIONS(71),
    [anon_sym_companion] = ACTIONS(71),
    [anon_sym_constructor] = ACTIONS(71),
    [anon_sym_crossinline] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_enum] = ACTIONS(71),
    [anon_sym_external] = ACTIONS(71),
    [anon_sym_final] = ACTIONS(71),
    [anon_sym_finally] = ACTIONS(71),
    [anon_sym_get] = ACTIONS(71),
    [anon_sym_import] = ACTIONS(71),
    [anon_sym_infix] = ACTIONS(71),
    [anon_sym_init] = ACTIONS(71),
    [anon_sym_inline] = ACTIONS(71),
    [anon_sym_inner] = ACTIONS(71),
    [anon_sym_internal] = ACTIONS(71),
    [anon_sym_lateinit] = ACTIONS(71),
    [anon_sym_noinline] = ACTIONS(71),
    [anon_sym_open] = ACTIONS(71),
    [anon_sym_operator] = ACTIONS(71),
    [anon_sym_out] = ACTIONS(71),
    [anon_sym_override] = ACTIONS(71),
    [anon_sym_private] = ACTIONS(71),
    [anon_sym_protected] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_reified] = ACTIONS(71),
    [anon_sym_sealed] = ACTIONS(71),
    [anon_sym_tailrec] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_vararg] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [anon_sym_property] = ACTIONS(71),
    [anon_sym_receiver] = ACTIONS(71),
    [anon_sym_param] = ACTIONS(71),
    [anon_sym_setparam] = ACTIONS(71),
    [anon_sym_delegate] = ACTIONS(71),
    [anon_sym_file] = ACTIONS(71),
    [anon_sym_expect] = ACTIONS(71),
    [anon_sym_actual] = ACTIONS(71),
    [anon_sym_const] = ACTIONS(71),
    [anon_sym_suspend] = ACTIONS(71),
    [anon_sym_value] = ACTIONS(71),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
  },
  [18] = {
    [sym__identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(75),
    [anon_sym_class] = ACTIONS(75),
    [anon_sym_object] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_null] = ACTIONS(75),
    [anon_sym_abstract] = ACTIONS(75),
    [anon_sym_annotation] = ACTIONS(75),
    [anon_sym_by] = ACTIONS(75),
    [anon_sym_catch] = ACTIONS(75),
    [anon_sym_companion] = ACTIONS(75),
    [anon_sym_constructor] = ACTIONS(75),
    [anon_sym_crossinline] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_dynamic] = ACTIONS(75),
    [anon_sym_enum] = ACTIONS(75),
    [anon_sym_external] = ACTIONS(75),
    [anon_sym_final] = ACTIONS(75),
    [anon_sym_finally] = ACTIONS(75),
    [anon_sym_get] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(75),
    [anon_sym_infix] = ACTIONS(75),
    [anon_sym_init] = ACTIONS(75),
    [anon_sym_inline] = ACTIONS(75),
    [anon_sym_inner] = ACTIONS(75),
    [anon_sym_internal] = ACTIONS(75),
    [anon_sym_lateinit] = ACTIONS(75),
    [anon_sym_noinline] = ACTIONS(75),
    [anon_sym_open] = ACTIONS(75),
    [anon_sym_operator] = ACTIONS(75),
    [anon_sym_out] = ACTIONS(75),
    [anon_sym_override] = ACTIONS(75),
    [anon_sym_private] = ACTIONS(75),
    [anon_sym_protected] = ACTIONS(75),
    [anon_sym_public] = ACTIONS(75),
    [anon_sym_reified] = ACTIONS(75),
    [anon_sym_sealed] = ACTIONS(75),
    [anon_sym_tailrec] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_vararg] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [anon_sym_property] = ACTIONS(75),
    [anon_sym_receiver] = ACTIONS(75),
    [anon_sym_param] = ACTIONS(75),
    [anon_sym_setparam] = ACTIONS(75),
    [anon_sym_delegate] = ACTIONS(75),
    [anon_sym_file] = ACTIONS(75),
    [anon_sym_expect] = ACTIONS(75),
    [anon_sym_actual] = ACTIONS(75),
    [anon_sym_const] = ACTIONS(75),
    [anon_sym_suspend] = ACTIONS(75),
    [anon_sym_value] = ACTIONS(75),
    [sym_integer] = ACTIONS(75),
    [sym_float] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
  },
  [19] = {
    [sym_identifier] = STATE(17),
    [sym__identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(79),
    [anon_sym_annotation] = ACTIONS(79),
    [anon_sym_by] = ACTIONS(79),
    [anon_sym_catch] = ACTIONS(79),
    [anon_sym_companion] = ACTIONS(79),
    [anon_sym_constructor] = ACTIONS(79),
    [anon_sym_crossinline] = ACTIONS(79),
    [anon_sym_data] = ACTIONS(79),
    [anon_sym_dynamic] = ACTIONS(79),
    [anon_sym_enum] = ACTIONS(79),
    [anon_sym_external] = ACTIONS(79),
    [anon_sym_final] = ACTIONS(79),
    [anon_sym_finally] = ACTIONS(79),
    [anon_sym_get] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(79),
    [anon_sym_infix] = ACTIONS(79),
    [anon_sym_init] = ACTIONS(79),
    [anon_sym_inline] = ACTIONS(79),
    [anon_sym_inner] = ACTIONS(79),
    [anon_sym_internal] = ACTIONS(79),
    [anon_sym_lateinit] = ACTIONS(79),
    [anon_sym_noinline] = ACTIONS(79),
    [anon_sym_open] = ACTIONS(79),
    [anon_sym_operator] = ACTIONS(79),
    [anon_sym_out] = ACTIONS(79),
    [anon_sym_override] = ACTIONS(79),
    [anon_sym_private] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(79),
    [anon_sym_public] = ACTIONS(79),
    [anon_sym_reified] = ACTIONS(79),
    [anon_sym_sealed] = ACTIONS(79),
    [anon_sym_tailrec] = ACTIONS(79),
    [anon_sym_set] = ACTIONS(79),
    [anon_sym_vararg] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_field] = ACTIONS(79),
    [anon_sym_property] = ACTIONS(79),
    [anon_sym_receiver] = ACTIONS(79),
    [anon_sym_param] = ACTIONS(79),
    [anon_sym_setparam] = ACTIONS(79),
    [anon_sym_delegate] = ACTIONS(79),
    [anon_sym_file] = ACTIONS(79),
    [anon_sym_expect] = ACTIONS(79),
    [anon_sym_actual] = ACTIONS(79),
    [anon_sym_const] = ACTIONS(79),
    [anon_sym_suspend] = ACTIONS(79),
    [anon_sym_value] = ACTIONS(79),
  },
  [20] = {
    [sym_identifier] = STATE(51),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
  },
  [21] = {
    [sym_identifier] = STATE(45),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
  },
  [22] = {
    [sym_identifier] = STATE(50),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
  },
  [23] = {
    [sym_identifier] = STATE(35),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
  },
  [24] = {
    [sym_identifier] = STATE(54),
    [sym__identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_abstract] = ACTIONS(5),
    [anon_sym_annotation] = ACTIONS(5),
    [anon_sym_by] = ACTIONS(5),
    [anon_sym_catch] = ACTIONS(5),
    [anon_sym_companion] = ACTIONS(5),
    [anon_sym_constructor] = ACTIONS(5),
    [anon_sym_crossinline] = ACTIONS(5),
    [anon_sym_data] = ACTIONS(5),
    [anon_sym_dynamic] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_external] = ACTIONS(5),
    [anon_sym_final] = ACTIONS(5),
    [anon_sym_finally] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_infix] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(5),
    [anon_sym_inline] = ACTIONS(5),
    [anon_sym_inner] = ACTIONS(5),
    [anon_sym_internal] = ACTIONS(5),
    [anon_sym_lateinit] = ACTIONS(5),
    [anon_sym_noinline] = ACTIONS(5),
    [anon_sym_open] = ACTIONS(5),
    [anon_sym_operator] = ACTIONS(5),
    [anon_sym_out] = ACTIONS(5),
    [anon_sym_override] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(5),
    [anon_sym_reified] = ACTIONS(5),
    [anon_sym_sealed] = ACTIONS(5),
    [anon_sym_tailrec] = ACTIONS(5),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_vararg] = ACTIONS(5),
    [anon_sym_where] = ACTIONS(5),
    [anon_sym_field] = ACTIONS(5),
    [anon_sym_property] = ACTIONS(5),
    [anon_sym_receiver] = ACTIONS(5),
    [anon_sym_param] = ACTIONS(5),
    [anon_sym_setparam] = ACTIONS(5),
    [anon_sym_delegate] = ACTIONS(5),
    [anon_sym_file] = ACTIONS(5),
    [anon_sym_expect] = ACTIONS(5),
    [anon_sym_actual] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(5),
    [anon_sym_suspend] = ACTIONS(5),
    [anon_sym_value] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(77), 18,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [32] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 5,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(81), 16,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [67] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(103), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [147] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(109), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 6,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(87), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 14,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [264] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
  [307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(115), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [338] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    STATE(43), 1,
      aux_sym_call_repeat1,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(129), 2,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 6,
      anon_sym_DOT,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(135), 17,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_as,
  [432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(87), 5,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(81), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [469] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [516] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(129), 2,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
  [573] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(129), 2,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [628] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(87), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
  [681] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(129), 2,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [739] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_QMARK,
    ACTIONS(93), 1,
      anon_sym_in,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_as,
    ACTIONS(123), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(125), 1,
      anon_sym_AMP_AMP,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      anon_sym_BANG_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(129), 2,
      anon_sym_BANG_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_call_repeat1,
  [809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_call_repeat1,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 32,
  [SMALL_STATE(27)] = 67,
  [SMALL_STATE(28)] = 116,
  [SMALL_STATE(29)] = 147,
  [SMALL_STATE(30)] = 192,
  [SMALL_STATE(31)] = 223,
  [SMALL_STATE(32)] = 264,
  [SMALL_STATE(33)] = 307,
  [SMALL_STATE(34)] = 338,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 573,
  [SMALL_STATE(40)] = 628,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 796,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 822,
  [SMALL_STATE(46)] = 832,
  [SMALL_STATE(47)] = 839,
  [SMALL_STATE(48)] = 846,
  [SMALL_STATE(49)] = 853,
  [SMALL_STATE(50)] = 860,
  [SMALL_STATE(51)] = 867,
  [SMALL_STATE(52)] = 874,
  [SMALL_STATE(53)] = 881,
  [SMALL_STATE(54)] = 888,
  [SMALL_STATE(55)] = 895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 4, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 4, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 3, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 3, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 2, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_decl, 4, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_decl, 4, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_decl, 2, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kotlin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
