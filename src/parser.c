#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 41

enum {
  sym_container_doc_comment = 1,
  sym_doc_comment = 2,
  sym_line_comment = 3,
  aux_sym_identifier_token1 = 4,
  anon_sym_AT = 5,
  sym_string_fragment = 6,
  anon_sym_DQUOTE = 7,
  sym_comptime = 8,
  aux_sym_integer_token1 = 9,
  aux_sym_integer_token2 = 10,
  aux_sym_integer_token3 = 11,
  aux_sym_integer_token4 = 12,
  anon_sym_COMMA = 13,
  anon_sym_COLON = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_SEMI = 17,
  anon_sym_break = 18,
  sym_one_pointer = 19,
  anon_sym_LBRACK_STAR = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LBRACK = 22,
  sym_c_pointer = 23,
  anon_sym_align_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_allowzero = 26,
  sym_constant = 27,
  sym_volatile = 28,
  anon_sym_EQ = 29,
  anon_sym_fn = 30,
  anon_sym_LPAREN_RPAREN = 31,
  sym_pub = 32,
  sym_extern = 33,
  sym_root = 34,
  sym_identifier = 35,
  sym_string_literal = 36,
  sym_integer = 37,
  aux_sym__container_members = 38,
  sym__expr = 39,
  sym_block_expr = 40,
  sym_block = 41,
  sym__statement = 42,
  sym_break_statement = 43,
  sym__type_expr = 44,
  sym_many_pointer = 45,
  sym_slice_pointer = 46,
  sym__pointer_size = 47,
  sym_alignment = 48,
  sym__pointer_modifier = 49,
  sym_pointer_type = 50,
  sym_container_field = 51,
  sym_function_prototype = 52,
  sym_container_function = 53,
  aux_sym_string_literal_repeat1 = 54,
  aux_sym_block_repeat1 = 55,
  aux_sym_pointer_type_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_container_doc_comment] = "container_doc_comment",
  [sym_doc_comment] = "doc_comment",
  [sym_line_comment] = "line_comment",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_AT] = "@",
  [sym_string_fragment] = "string_fragment",
  [anon_sym_DQUOTE] = "\"",
  [sym_comptime] = "comptime",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_break] = "break",
  [sym_one_pointer] = "one_pointer",
  [anon_sym_LBRACK_STAR] = "[*",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK] = "[",
  [sym_c_pointer] = "c_pointer",
  [anon_sym_align_LPAREN] = "align(",
  [anon_sym_RPAREN] = ")",
  [sym_allowzero] = "allowzero",
  [sym_constant] = "constant",
  [sym_volatile] = "volatile",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_pub] = "pub",
  [sym_extern] = "extern",
  [sym_root] = "root",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_integer] = "integer",
  [aux_sym__container_members] = "_container_members",
  [sym__expr] = "_expr",
  [sym_block_expr] = "block_expr",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_break_statement] = "break_statement",
  [sym__type_expr] = "_type_expr",
  [sym_many_pointer] = "many_pointer",
  [sym_slice_pointer] = "slice_pointer",
  [sym__pointer_size] = "_pointer_size",
  [sym_alignment] = "alignment",
  [sym__pointer_modifier] = "_pointer_modifier",
  [sym_pointer_type] = "pointer_type",
  [sym_container_field] = "container_field",
  [sym_function_prototype] = "function_prototype",
  [sym_container_function] = "container_function",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pointer_type_repeat1] = "pointer_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_container_doc_comment] = sym_container_doc_comment,
  [sym_doc_comment] = sym_doc_comment,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_AT] = anon_sym_AT,
  [sym_string_fragment] = sym_string_fragment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_comptime] = sym_comptime,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_break] = anon_sym_break,
  [sym_one_pointer] = sym_one_pointer,
  [anon_sym_LBRACK_STAR] = anon_sym_LBRACK_STAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [sym_c_pointer] = sym_c_pointer,
  [anon_sym_align_LPAREN] = anon_sym_align_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_allowzero] = sym_allowzero,
  [sym_constant] = sym_constant,
  [sym_volatile] = sym_volatile,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [sym_pub] = sym_pub,
  [sym_extern] = sym_extern,
  [sym_root] = sym_root,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_integer] = sym_integer,
  [aux_sym__container_members] = aux_sym__container_members,
  [sym__expr] = sym__expr,
  [sym_block_expr] = sym_block_expr,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_break_statement] = sym_break_statement,
  [sym__type_expr] = sym__type_expr,
  [sym_many_pointer] = sym_many_pointer,
  [sym_slice_pointer] = sym_slice_pointer,
  [sym__pointer_size] = sym__pointer_size,
  [sym_alignment] = sym_alignment,
  [sym__pointer_modifier] = sym__pointer_modifier,
  [sym_pointer_type] = sym_pointer_type,
  [sym_container_field] = sym_container_field,
  [sym_function_prototype] = sym_function_prototype,
  [sym_container_function] = sym_container_function,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pointer_type_repeat1] = aux_sym_pointer_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_container_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_comptime] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [sym_one_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_c_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_align_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_allowzero] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_volatile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__container_members] = {
    .visible = false,
    .named = false,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_block_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__type_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_many_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym__pointer_size] = {
    .visible = false,
    .named = true,
  },
  [sym_alignment] = {
    .visible = true,
    .named = true,
  },
  [sym__pointer_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_container_field] = {
    .visible = true,
    .named = true,
  },
  [sym_function_prototype] = {
    .visible = true,
    .named = true,
  },
  [sym_container_function] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pointer_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alignment = 1,
  field_body = 2,
  field_child = 3,
  field_comptime = 4,
  field_default = 5,
  field_documentation = 6,
  field_extern = 7,
  field_label = 8,
  field_name = 9,
  field_pub = 10,
  field_return_type = 11,
  field_sentinel = 12,
  field_size = 13,
  field_type = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alignment] = "alignment",
  [field_body] = "body",
  [field_child] = "child",
  [field_comptime] = "comptime",
  [field_default] = "default",
  [field_documentation] = "documentation",
  [field_extern] = "extern",
  [field_label] = "label",
  [field_name] = "name",
  [field_pub] = "pub",
  [field_return_type] = "return_type",
  [field_sentinel] = "sentinel",
  [field_size] = "size",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [13] = {.index = 22, .length = 3},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 2},
  [20] = {.index = 40, .length = 1},
  [21] = {.index = 41, .length = 4},
  [22] = {.index = 45, .length = 3},
  [23] = {.index = 48, .length = 4},
  [24] = {.index = 52, .length = 4},
  [25] = {.index = 56, .length = 4},
  [26] = {.index = 60, .length = 3},
  [27] = {.index = 63, .length = 4},
  [28] = {.index = 67, .length = 2},
  [29] = {.index = 69, .length = 1},
  [30] = {.index = 70, .length = 5},
  [31] = {.index = 75, .length = 5},
  [32] = {.index = 80, .length = 5},
  [33] = {.index = 85, .length = 1},
  [34] = {.index = 86, .length = 1},
  [35] = {.index = 87, .length = 5},
  [36] = {.index = 92, .length = 2},
  [37] = {.index = 94, .length = 6},
  [38] = {.index = 100, .length = 6},
  [39] = {.index = 106, .length = 6},
  [40] = {.index = 112, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_documentation, 0},
  [2] =
    {field_body, 2},
    {field_documentation, 0},
  [4] =
    {field_pub, 0},
  [5] =
    {field_body, 2},
    {field_pub, 0},
  [7] =
    {field_extern, 0},
  [8] =
    {field_body, 2},
    {field_extern, 0},
  [10] =
    {field_name, 0},
    {field_type, 2},
  [12] =
    {field_documentation, 0},
    {field_pub, 1},
  [14] =
    {field_body, 3},
    {field_documentation, 0},
    {field_pub, 1},
  [17] =
    {field_documentation, 0},
    {field_extern, 1},
  [19] =
    {field_body, 3},
    {field_documentation, 0},
    {field_extern, 1},
  [22] =
    {field_documentation, 0},
    {field_name, 1},
    {field_type, 3},
  [25] =
    {field_comptime, 0},
    {field_name, 1},
    {field_type, 3},
  [28] =
    {field_name, 1},
    {field_return_type, 3},
  [30] =
    {field_extern, 1},
    {field_pub, 0},
  [32] =
    {field_body, 3},
    {field_extern, 1},
    {field_pub, 0},
  [35] =
    {field_alignment, 3},
    {field_name, 0},
    {field_type, 2},
  [38] =
    {field_child, 1},
    {field_size, 0},
  [40] =
    {field_value, 1},
  [41] =
    {field_comptime, 1},
    {field_documentation, 0},
    {field_name, 2},
    {field_type, 4},
  [45] =
    {field_documentation, 0},
    {field_extern, 2},
    {field_pub, 1},
  [48] =
    {field_body, 4},
    {field_documentation, 0},
    {field_extern, 2},
    {field_pub, 1},
  [52] =
    {field_alignment, 4},
    {field_documentation, 0},
    {field_name, 1},
    {field_type, 3},
  [56] =
    {field_alignment, 4},
    {field_comptime, 0},
    {field_name, 1},
    {field_type, 3},
  [60] =
    {field_alignment, 3},
    {field_name, 1},
    {field_return_type, 4},
  [63] =
    {field_default, 3},
    {field_default, 4},
    {field_name, 0},
    {field_type, 2},
  [67] =
    {field_child, 2},
    {field_size, 0},
  [69] =
    {field_label, 2},
  [70] =
    {field_alignment, 5},
    {field_comptime, 1},
    {field_documentation, 0},
    {field_name, 2},
    {field_type, 4},
  [75] =
    {field_default, 4},
    {field_default, 5},
    {field_documentation, 0},
    {field_name, 1},
    {field_type, 3},
  [80] =
    {field_comptime, 0},
    {field_default, 4},
    {field_default, 5},
    {field_name, 1},
    {field_type, 3},
  [85] =
    {field_label, 0},
  [86] =
    {field_sentinel, 2},
  [87] =
    {field_alignment, 3},
    {field_default, 4},
    {field_default, 5},
    {field_name, 0},
    {field_type, 2},
  [92] =
    {field_label, 2},
    {field_value, 3},
  [94] =
    {field_comptime, 1},
    {field_default, 5},
    {field_default, 6},
    {field_documentation, 0},
    {field_name, 2},
    {field_type, 4},
  [100] =
    {field_alignment, 4},
    {field_default, 5},
    {field_default, 6},
    {field_documentation, 0},
    {field_name, 1},
    {field_type, 3},
  [106] =
    {field_alignment, 4},
    {field_comptime, 0},
    {field_default, 5},
    {field_default, 6},
    {field_name, 1},
    {field_type, 3},
  [112] =
    {field_alignment, 5},
    {field_comptime, 1},
    {field_default, 6},
    {field_default, 7},
    {field_documentation, 0},
    {field_name, 2},
    {field_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 18,
  [20] = 16,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 25,
  [41] = 23,
  [42] = 42,
  [43] = 22,
  [44] = 24,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 42,
  [50] = 50,
  [51] = 24,
  [52] = 52,
  [53] = 25,
  [54] = 54,
  [55] = 23,
  [56] = 56,
  [57] = 22,
  [58] = 58,
  [59] = 59,
  [60] = 42,
  [61] = 61,
  [62] = 45,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 39,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 95,
  [101] = 97,
  [102] = 96,
  [103] = 70,
  [104] = 59,
  [105] = 71,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 106,
  [112] = 112,
  [113] = 74,
  [114] = 114,
  [115] = 72,
  [116] = 116,
  [117] = 117,
  [118] = 110,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 39,
  [123] = 106,
  [124] = 124,
  [125] = 125,
  [126] = 45,
  [127] = 75,
  [128] = 128,
  [129] = 110,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 135,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 152,
  [157] = 152,
  [158] = 158,
  [159] = 159,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(136);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 58:
      if (eof) ADVANCE(62);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == '[') ADVANCE(134);
      if (lookahead == ']') ADVANCE(133);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == ',') ADVANCE(125);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '!') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!') ADVANCE(65);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comptime);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_one_pointer);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR);
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_c_pointer);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_align_LPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_allowzero);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_allowzero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_volatile);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_pub);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_pub);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_extern);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_extern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 59},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 60},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 60},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 60},
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 59},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 59},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 59},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 59},
  [66] = {.lex_state = 59},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 59},
  [74] = {.lex_state = 59},
  [75] = {.lex_state = 59},
  [76] = {.lex_state = 59},
  [77] = {.lex_state = 59},
  [78] = {.lex_state = 59},
  [79] = {.lex_state = 59},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 59},
  [82] = {.lex_state = 59},
  [83] = {.lex_state = 59},
  [84] = {.lex_state = 59},
  [85] = {.lex_state = 59},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 59},
  [89] = {.lex_state = 59},
  [90] = {.lex_state = 59},
  [91] = {.lex_state = 59},
  [92] = {.lex_state = 59},
  [93] = {.lex_state = 59},
  [94] = {.lex_state = 59},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 58},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 58},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 58},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 58},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 58},
  [114] = {.lex_state = 58},
  [115] = {.lex_state = 58},
  [116] = {.lex_state = 58},
  [117] = {.lex_state = 58},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 58},
  [120] = {.lex_state = 58},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 58},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 58},
  [126] = {.lex_state = 58},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 58},
  [131] = {.lex_state = 58},
  [132] = {.lex_state = 58},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 58},
  [138] = {.lex_state = 58},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 58},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 58},
  [146] = {.lex_state = 58},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 58},
  [149] = {.lex_state = 58},
  [150] = {.lex_state = 58},
  [151] = {.lex_state = 58},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 58},
  [154] = {.lex_state = 58},
  [155] = {.lex_state = 58},
  [156] = {.lex_state = 58},
  [157] = {.lex_state = 58},
  [158] = {.lex_state = 58},
  [159] = {.lex_state = 58},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_container_doc_comment] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comptime] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [sym_one_pointer] = ACTIONS(1),
    [anon_sym_LBRACK_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_c_pointer] = ACTIONS(1),
    [anon_sym_align_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_allowzero] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_volatile] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_pub] = ACTIONS(1),
    [sym_extern] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(146),
    [sym_identifier] = STATE(153),
    [aux_sym__container_members] = STATE(29),
    [sym_container_field] = STATE(73),
    [sym_function_prototype] = STATE(125),
    [sym_container_function] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_container_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_comptime] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(17),
    [sym_pub] = ACTIONS(19),
    [sym_extern] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(154), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [55] = 15,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_align_LPAREN,
    STATE(6), 1,
      sym_alignment,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(133), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [110] = 14,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(149), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [162] = 13,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(147), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [211] = 13,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(144), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [260] = 13,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(159), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [309] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(65), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [358] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(64), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [407] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(63), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [456] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(66), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [505] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(67), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [554] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(69), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [603] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(68), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [652] = 13,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      aux_sym_integer_token4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_identifier,
    STATE(72), 1,
      sym_block,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(51), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(61), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [701] = 11,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      aux_sym_identifier_token1,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(63), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(21), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(62), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [744] = 11,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(65), 1,
      aux_sym_identifier_token1,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(71), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(18), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(45), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [787] = 11,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(65), 1,
      aux_sym_identifier_token1,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(73), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(28), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(39), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [830] = 11,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(73), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(28), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(122), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [873] = 11,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(37), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(75), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(19), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(20), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(126), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [916] = 11,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      aux_sym_identifier_token1,
    ACTIONS(61), 1,
      anon_sym_align_LPAREN,
    ACTIONS(57), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(73), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(16), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(28), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(76), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [959] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(79), 3,
      aux_sym_integer_token4,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(77), 12,
      aux_sym_identifier_token1,
      anon_sym_AT,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_one_pointer,
      anon_sym_RBRACK,
      sym_c_pointer,
      anon_sym_LPAREN_RPAREN,
  [982] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(83), 3,
      aux_sym_integer_token4,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(81), 12,
      aux_sym_identifier_token1,
      anon_sym_AT,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_one_pointer,
      anon_sym_RBRACK,
      sym_c_pointer,
      anon_sym_LPAREN_RPAREN,
  [1005] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(87), 3,
      aux_sym_integer_token4,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(85), 12,
      aux_sym_identifier_token1,
      anon_sym_AT,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_one_pointer,
      anon_sym_RBRACK,
      sym_c_pointer,
      anon_sym_LPAREN_RPAREN,
  [1028] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(91), 3,
      aux_sym_integer_token4,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(89), 12,
      aux_sym_identifier_token1,
      anon_sym_AT,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_one_pointer,
      anon_sym_RBRACK,
      sym_c_pointer,
      anon_sym_LPAREN_RPAREN,
  [1051] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_doc_comment,
    ACTIONS(98), 1,
      aux_sym_identifier_token1,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      sym_comptime,
    ACTIONS(107), 1,
      anon_sym_fn,
    ACTIONS(110), 1,
      sym_pub,
    ACTIONS(113), 1,
      sym_extern,
    STATE(73), 1,
      sym_container_field,
    STATE(125), 1,
      sym_function_prototype,
    STATE(153), 1,
      sym_identifier,
    STATE(26), 2,
      aux_sym__container_members,
      sym_container_function,
  [1092] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_doc_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_comptime,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      sym_pub,
    ACTIONS(21), 1,
      sym_extern,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_container_field,
    STATE(125), 1,
      sym_function_prototype,
    STATE(153), 1,
      sym_identifier,
    STATE(30), 2,
      aux_sym__container_members,
      sym_container_function,
  [1133] = 6,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(122), 1,
      anon_sym_align_LPAREN,
    ACTIONS(118), 3,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(120), 3,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(125), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(28), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
  [1160] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_doc_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_comptime,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      sym_pub,
    ACTIONS(21), 1,
      sym_extern,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_container_field,
    STATE(125), 1,
      sym_function_prototype,
    STATE(153), 1,
      sym_identifier,
    STATE(26), 2,
      aux_sym__container_members,
      sym_container_function,
  [1201] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_doc_comment,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_comptime,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(19), 1,
      sym_pub,
    ACTIONS(21), 1,
      sym_extern,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_container_field,
    STATE(125), 1,
      sym_function_prototype,
    STATE(153), 1,
      sym_identifier,
    STATE(26), 2,
      aux_sym__container_members,
      sym_container_function,
  [1242] = 8,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      aux_sym_identifier_token1,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(35), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [1272] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_align_LPAREN,
    ACTIONS(138), 1,
      anon_sym_EQ,
    STATE(56), 1,
      sym_alignment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(134), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1298] = 8,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      aux_sym_identifier_token1,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(37), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [1328] = 8,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      aux_sym_identifier_token1,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(36), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [1358] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_align_LPAREN,
    ACTIONS(144), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_alignment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(142), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1384] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_align_LPAREN,
    ACTIONS(150), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_alignment,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(148), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1410] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 1,
      anon_sym_align_LPAREN,
    ACTIONS(156), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_alignment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(154), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1436] = 8,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      aux_sym_identifier_token1,
    ACTIONS(69), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(17), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(32), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [1466] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1504] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1523] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(164), 3,
      aux_sym_integer_token4,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(162), 8,
      aux_sym_identifier_token1,
      anon_sym_AT,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      anon_sym_LBRACE,
      sym_one_pointer,
      sym_c_pointer,
  [1542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1580] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
      anon_sym_EQ,
  [1599] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(172), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(170), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [1617] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(176), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(174), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(180), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_EQ,
    ACTIONS(164), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1673] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(186), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1693] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(87), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1711] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(192), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(190), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [1729] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(91), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1747] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(196), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(194), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(83), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1783] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      anon_sym_EQ,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(200), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_COLON,
    ACTIONS(79), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1821] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(206), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(212), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1861] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(162), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(164), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(218), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(168), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1913] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(222), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(226), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(230), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1964] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(234), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(236), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(238), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [1998] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(242), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2015] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(246), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2032] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(250), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2049] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(254), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(258), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2083] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(262), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(268), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(272), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
    ACTIONS(160), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(276), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2169] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(280), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2185] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(284), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2201] = 9,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      sym_comptime,
    ACTIONS(288), 1,
      sym_pub,
    ACTIONS(290), 1,
      sym_extern,
    STATE(124), 1,
      sym_function_prototype,
    STATE(148), 1,
      sym_identifier,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(294), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(296), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(298), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(300), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(304), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(306), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(308), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2309] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(312), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(316), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(320), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(324), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(328), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(332), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(336), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(340), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
    ACTIONS(344), 5,
      aux_sym_identifier_token1,
      sym_comptime,
      anon_sym_fn,
      sym_pub,
      sym_extern,
  [2453] = 5,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_break,
    STATE(158), 1,
      sym_break_statement,
    STATE(99), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [2470] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    STATE(152), 1,
      sym_integer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [2485] = 5,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_break,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_break_statement,
    STATE(100), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [2502] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    STATE(156), 1,
      sym_integer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [2517] = 5,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 1,
      anon_sym_break,
    STATE(158), 1,
      sym_break_statement,
    STATE(99), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [2534] = 5,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_break,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_break_statement,
    STATE(99), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [2551] = 5,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(348), 1,
      anon_sym_break,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_break_statement,
    STATE(95), 2,
      sym__statement,
      aux_sym_block_repeat1,
  [2568] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_integer_token4,
    STATE(157), 1,
      sym_integer,
    ACTIONS(27), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [2583] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(248), 4,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2593] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(210), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2605] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(252), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      sym_string_fragment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(118), 1,
      aux_sym_string_literal_repeat1,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      sym_string_fragment,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2640] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_block,
  [2653] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_block,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_string_fragment,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2679] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 1,
      sym_string_fragment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_literal_repeat1,
  [2692] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_block,
  [2705] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(266), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2714] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_block,
  [2727] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(256), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2736] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_block,
  [2749] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(151), 1,
      sym_identifier,
  [2762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_string_fragment,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2775] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(150), 1,
      sym_identifier,
  [2788] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(4), 1,
      sym_identifier,
  [2801] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    ACTIONS(394), 1,
      sym_extern,
    STATE(114), 1,
      sym_function_prototype,
  [2814] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(158), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2823] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 1,
      sym_string_fragment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      aux_sym_string_literal_repeat1,
  [2836] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_block,
  [2849] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_block,
  [2862] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(166), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2871] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(270), 3,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [2880] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    ACTIONS(404), 1,
      sym_extern,
    STATE(109), 1,
      sym_function_prototype,
  [2893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 1,
      sym_string_fragment,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_literal_repeat1,
  [2906] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      aux_sym_identifier_token1,
    STATE(155), 1,
      sym_identifier,
  [2919] = 4,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_block,
  [2932] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(412), 1,
      anon_sym_RBRACK,
  [2942] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(414), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [2950] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    STATE(116), 1,
      sym_function_prototype,
  [2960] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_string_literal,
  [2970] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      anon_sym_break,
  [2978] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [2988] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_string_literal,
  [2998] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    STATE(108), 1,
      sym_function_prototype,
  [3008] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    STATE(112), 1,
      sym_function_prototype,
  [3018] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
  [3028] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(392), 1,
      anon_sym_fn,
    STATE(131), 1,
      sym_function_prototype,
  [3038] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
  [3048] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(426), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [3056] = 3,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_string_literal,
  [3066] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [3073] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [3080] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(434), 1,
      anon_sym_COLON,
  [3087] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(436), 1,
      anon_sym_SEMI,
  [3094] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_LPAREN_RPAREN,
  [3101] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_COLON,
  [3108] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
  [3115] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
  [3122] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [3129] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(448), 1,
      anon_sym_COLON,
  [3136] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [3143] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
  [3150] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [3157] = 2,
    ACTIONS(23), 1,
      sym_line_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 211,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 309,
  [SMALL_STATE(9)] = 358,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 456,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 603,
  [SMALL_STATE(15)] = 652,
  [SMALL_STATE(16)] = 701,
  [SMALL_STATE(17)] = 744,
  [SMALL_STATE(18)] = 787,
  [SMALL_STATE(19)] = 830,
  [SMALL_STATE(20)] = 873,
  [SMALL_STATE(21)] = 916,
  [SMALL_STATE(22)] = 959,
  [SMALL_STATE(23)] = 982,
  [SMALL_STATE(24)] = 1005,
  [SMALL_STATE(25)] = 1028,
  [SMALL_STATE(26)] = 1051,
  [SMALL_STATE(27)] = 1092,
  [SMALL_STATE(28)] = 1133,
  [SMALL_STATE(29)] = 1160,
  [SMALL_STATE(30)] = 1201,
  [SMALL_STATE(31)] = 1242,
  [SMALL_STATE(32)] = 1272,
  [SMALL_STATE(33)] = 1298,
  [SMALL_STATE(34)] = 1328,
  [SMALL_STATE(35)] = 1358,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1410,
  [SMALL_STATE(38)] = 1436,
  [SMALL_STATE(39)] = 1466,
  [SMALL_STATE(40)] = 1485,
  [SMALL_STATE(41)] = 1504,
  [SMALL_STATE(42)] = 1523,
  [SMALL_STATE(43)] = 1542,
  [SMALL_STATE(44)] = 1561,
  [SMALL_STATE(45)] = 1580,
  [SMALL_STATE(46)] = 1599,
  [SMALL_STATE(47)] = 1617,
  [SMALL_STATE(48)] = 1635,
  [SMALL_STATE(49)] = 1655,
  [SMALL_STATE(50)] = 1673,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1711,
  [SMALL_STATE(53)] = 1729,
  [SMALL_STATE(54)] = 1747,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1783,
  [SMALL_STATE(57)] = 1803,
  [SMALL_STATE(58)] = 1821,
  [SMALL_STATE(59)] = 1841,
  [SMALL_STATE(60)] = 1861,
  [SMALL_STATE(61)] = 1879,
  [SMALL_STATE(62)] = 1896,
  [SMALL_STATE(63)] = 1913,
  [SMALL_STATE(64)] = 1930,
  [SMALL_STATE(65)] = 1947,
  [SMALL_STATE(66)] = 1964,
  [SMALL_STATE(67)] = 1981,
  [SMALL_STATE(68)] = 1998,
  [SMALL_STATE(69)] = 2015,
  [SMALL_STATE(70)] = 2032,
  [SMALL_STATE(71)] = 2049,
  [SMALL_STATE(72)] = 2066,
  [SMALL_STATE(73)] = 2083,
  [SMALL_STATE(74)] = 2102,
  [SMALL_STATE(75)] = 2119,
  [SMALL_STATE(76)] = 2136,
  [SMALL_STATE(77)] = 2153,
  [SMALL_STATE(78)] = 2169,
  [SMALL_STATE(79)] = 2185,
  [SMALL_STATE(80)] = 2201,
  [SMALL_STATE(81)] = 2229,
  [SMALL_STATE(82)] = 2245,
  [SMALL_STATE(83)] = 2261,
  [SMALL_STATE(84)] = 2277,
  [SMALL_STATE(85)] = 2293,
  [SMALL_STATE(86)] = 2309,
  [SMALL_STATE(87)] = 2325,
  [SMALL_STATE(88)] = 2341,
  [SMALL_STATE(89)] = 2357,
  [SMALL_STATE(90)] = 2373,
  [SMALL_STATE(91)] = 2389,
  [SMALL_STATE(92)] = 2405,
  [SMALL_STATE(93)] = 2421,
  [SMALL_STATE(94)] = 2437,
  [SMALL_STATE(95)] = 2453,
  [SMALL_STATE(96)] = 2470,
  [SMALL_STATE(97)] = 2485,
  [SMALL_STATE(98)] = 2502,
  [SMALL_STATE(99)] = 2517,
  [SMALL_STATE(100)] = 2534,
  [SMALL_STATE(101)] = 2551,
  [SMALL_STATE(102)] = 2568,
  [SMALL_STATE(103)] = 2583,
  [SMALL_STATE(104)] = 2593,
  [SMALL_STATE(105)] = 2605,
  [SMALL_STATE(106)] = 2614,
  [SMALL_STATE(107)] = 2627,
  [SMALL_STATE(108)] = 2640,
  [SMALL_STATE(109)] = 2653,
  [SMALL_STATE(110)] = 2666,
  [SMALL_STATE(111)] = 2679,
  [SMALL_STATE(112)] = 2692,
  [SMALL_STATE(113)] = 2705,
  [SMALL_STATE(114)] = 2714,
  [SMALL_STATE(115)] = 2727,
  [SMALL_STATE(116)] = 2736,
  [SMALL_STATE(117)] = 2749,
  [SMALL_STATE(118)] = 2762,
  [SMALL_STATE(119)] = 2775,
  [SMALL_STATE(120)] = 2788,
  [SMALL_STATE(121)] = 2801,
  [SMALL_STATE(122)] = 2814,
  [SMALL_STATE(123)] = 2823,
  [SMALL_STATE(124)] = 2836,
  [SMALL_STATE(125)] = 2849,
  [SMALL_STATE(126)] = 2862,
  [SMALL_STATE(127)] = 2871,
  [SMALL_STATE(128)] = 2880,
  [SMALL_STATE(129)] = 2893,
  [SMALL_STATE(130)] = 2906,
  [SMALL_STATE(131)] = 2919,
  [SMALL_STATE(132)] = 2932,
  [SMALL_STATE(133)] = 2942,
  [SMALL_STATE(134)] = 2950,
  [SMALL_STATE(135)] = 2960,
  [SMALL_STATE(136)] = 2970,
  [SMALL_STATE(137)] = 2978,
  [SMALL_STATE(138)] = 2988,
  [SMALL_STATE(139)] = 2998,
  [SMALL_STATE(140)] = 3008,
  [SMALL_STATE(141)] = 3018,
  [SMALL_STATE(142)] = 3028,
  [SMALL_STATE(143)] = 3038,
  [SMALL_STATE(144)] = 3048,
  [SMALL_STATE(145)] = 3056,
  [SMALL_STATE(146)] = 3066,
  [SMALL_STATE(147)] = 3073,
  [SMALL_STATE(148)] = 3080,
  [SMALL_STATE(149)] = 3087,
  [SMALL_STATE(150)] = 3094,
  [SMALL_STATE(151)] = 3101,
  [SMALL_STATE(152)] = 3108,
  [SMALL_STATE(153)] = 3115,
  [SMALL_STATE(154)] = 3122,
  [SMALL_STATE(155)] = 3129,
  [SMALL_STATE(156)] = 3136,
  [SMALL_STATE(157)] = 3143,
  [SMALL_STATE(158)] = 3150,
  [SMALL_STATE(159)] = 3157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 3, .production_id = 29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(80),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(24),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(138),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(117),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(119),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(121),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(140),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2), SHIFT_REPEAT(102),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2), SHIFT_REPEAT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 13),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 14),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 14),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 3, .production_id = 8),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 3, .production_id = 8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 21),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 21),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, .production_id = 28),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 3, .production_id = 28),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alignment, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alignment, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, .production_id = 19),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2, .production_id = 19),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_pointer, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_pointer, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_pointer, 4, .production_id = 34),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_pointer, 4, .production_id = 34),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 18),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 18),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 25),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_pointer, 4, .production_id = 34),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_pointer, 4, .production_id = 34),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_pointer, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_pointer, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 24),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6, .production_id = 30),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 6, .production_id = 30),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expr, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_expr, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 7, .production_id = 38),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 7, .production_id = 38),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6, .production_id = 32),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 6, .production_id = 32),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6, .production_id = 31),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 6, .production_id = 31),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 27),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 27),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6, .production_id = 35),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 6, .production_id = 35),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 7, .production_id = 37),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 7, .production_id = 37),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 7, .production_id = 39),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 7, .production_id = 39),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 8, .production_id = 40),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 8, .production_id = 40),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expr, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expr, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expr, 3, .production_id = 33),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expr, 3, .production_id = 33),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 6),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 17),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 17),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 16),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 9),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 10),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 10),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 2, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 2, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 5, .production_id = 22),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 5, .production_id = 22),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 5, .production_id = 23),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 5, .production_id = 23),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 11),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 4, .production_id = 12),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 4, .production_id = 12),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_function, 3, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_function, 3, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(107),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 4, .production_id = 15),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_prototype, 5, .production_id = 26),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 4, .production_id = 36),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2, .production_id = 20),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zig(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
