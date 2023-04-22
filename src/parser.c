#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 13

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
  sym_one_pointer = 17,
  anon_sym_LBRACK_STAR = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACK = 20,
  sym_c_pointer = 21,
  anon_sym_align_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_allowzero = 24,
  sym_constant = 25,
  sym_volatile = 26,
  sym_container_body = 27,
  sym_identifier = 28,
  sym_string_literal = 29,
  sym_integer = 30,
  aux_sym__container_members = 31,
  sym__expr = 32,
  sym_block_expr = 33,
  sym_block = 34,
  sym__type_expr = 35,
  sym_many_pointer = 36,
  sym_slice_pointer = 37,
  sym__pointer_size = 38,
  sym_alignment = 39,
  sym__pointer_modifier = 40,
  sym_pointer_type = 41,
  sym_container_field = 42,
  aux_sym_string_literal_repeat1 = 43,
  aux_sym_pointer_type_repeat1 = 44,
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
  [sym_container_body] = "container_body",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [sym_integer] = "integer",
  [aux_sym__container_members] = "_container_members",
  [sym__expr] = "_expr",
  [sym_block_expr] = "block_expr",
  [sym_block] = "block",
  [sym__type_expr] = "_type_expr",
  [sym_many_pointer] = "many_pointer",
  [sym_slice_pointer] = "slice_pointer",
  [sym__pointer_size] = "_pointer_size",
  [sym_alignment] = "alignment",
  [sym__pointer_modifier] = "_pointer_modifier",
  [sym_pointer_type] = "pointer_type",
  [sym_container_field] = "container_field",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [sym_container_body] = sym_container_body,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_integer] = sym_integer,
  [aux_sym__container_members] = aux_sym__container_members,
  [sym__expr] = sym__expr,
  [sym_block_expr] = sym_block_expr,
  [sym_block] = sym_block,
  [sym__type_expr] = sym__type_expr,
  [sym_many_pointer] = sym_many_pointer,
  [sym_slice_pointer] = sym_slice_pointer,
  [sym__pointer_size] = sym__pointer_size,
  [sym_alignment] = sym_alignment,
  [sym__pointer_modifier] = sym__pointer_modifier,
  [sym_pointer_type] = sym_pointer_type,
  [sym_container_field] = sym_container_field,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [sym_container_body] = {
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
  [aux_sym_string_literal_repeat1] = {
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
  field_child = 2,
  field_comptime = 3,
  field_label = 4,
  field_name = 5,
  field_sentinel = 6,
  field_size = 7,
  field_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alignment] = "alignment",
  [field_child] = "child",
  [field_comptime] = "comptime",
  [field_label] = "label",
  [field_name] = "name",
  [field_sentinel] = "sentinel",
  [field_size] = "size",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 2},
  [6] = {.index = 12, .length = 3},
  [7] = {.index = 15, .length = 3},
  [8] = {.index = 18, .length = 4},
  [9] = {.index = 22, .length = 2},
  [10] = {.index = 24, .length = 4},
  [11] = {.index = 28, .length = 1},
  [12] = {.index = 29, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_type, 2},
  [2] =
    {field_name, 1},
    {field_type, 3},
  [4] =
    {field_comptime, 0},
    {field_name, 1},
    {field_type, 3},
  [7] =
    {field_alignment, 3},
    {field_name, 0},
    {field_type, 2},
  [10] =
    {field_child, 1},
    {field_size, 0},
  [12] =
    {field_comptime, 1},
    {field_name, 2},
    {field_type, 4},
  [15] =
    {field_alignment, 4},
    {field_name, 1},
    {field_type, 3},
  [18] =
    {field_alignment, 4},
    {field_comptime, 0},
    {field_name, 1},
    {field_type, 3},
  [22] =
    {field_child, 2},
    {field_size, 0},
  [24] =
    {field_alignment, 5},
    {field_comptime, 1},
    {field_name, 2},
    {field_type, 4},
  [28] =
    {field_sentinel, 2},
  [29] =
    {field_label, 0},
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
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
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
  [32] = 13,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 48,
  [49] = 28,
  [50] = 29,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 26,
  [58] = 30,
  [59] = 52,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 31,
  [67] = 67,
  [68] = 27,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 74,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'v') ADVANCE(51);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'v') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(71);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'g') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_one_pointer);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR);
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '*') ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_c_pointer);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_align_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_allowzero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
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
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_container_doc_comment] = ACTIONS(1),
    [sym_doc_comment] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(1),
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
  },
  [1] = {
    [sym_container_body] = STATE(67),
    [sym_identifier] = STATE(70),
    [aux_sym__container_members] = STATE(20),
    [sym_container_field] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_container_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_comptime] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      aux_sym_integer_token4,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(21), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(5), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(64), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [49] = 13,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      aux_sym_integer_token4,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_identifier,
    STATE(62), 1,
      sym_block,
    ACTIONS(27), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(21), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
    STATE(5), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(65), 5,
      sym_integer,
      sym__expr,
      sym_block_expr,
      sym__type_expr,
      sym_pointer_type,
  [98] = 11,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_align_LPAREN,
    ACTIONS(27), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(35), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(5), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(8), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(68), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [141] = 11,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_align_LPAREN,
    ACTIONS(27), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(37), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(4), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(5), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(66), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [184] = 11,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_align_LPAREN,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(35), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(8), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(27), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [227] = 11,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_align_LPAREN,
    ACTIONS(39), 1,
      aux_sym_identifier_token1,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(45), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(6), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(31), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [270] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_align_LPAREN,
    ACTIONS(47), 3,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
    ACTIONS(49), 3,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
    ACTIONS(54), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    STATE(8), 3,
      sym_alignment,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
  [297] = 8,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(24), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [327] = 8,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(25), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [357] = 8,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(22), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [387] = 8,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK_STAR,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 2,
      sym_one_pointer,
      sym_c_pointer,
    STATE(7), 3,
      sym_many_pointer,
      sym_slice_pointer,
      sym__pointer_size,
    STATE(19), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
  [417] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(61), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(59), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [435] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(65), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(63), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [453] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(69), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(67), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [471] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(73), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(71), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [489] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(77), 4,
      anon_sym_AT,
      sym_one_pointer,
      sym_c_pointer,
      anon_sym_align_LPAREN,
    ACTIONS(75), 6,
      aux_sym_identifier_token1,
      anon_sym_LBRACK_STAR,
      anon_sym_LBRACK,
      sym_allowzero,
      sym_constant,
      sym_volatile,
  [507] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_doc_comment,
    ACTIONS(84), 1,
      aux_sym_identifier_token1,
    ACTIONS(87), 1,
      anon_sym_AT,
    ACTIONS(90), 1,
      sym_comptime,
    STATE(18), 1,
      aux_sym__container_members,
    STATE(36), 1,
      sym_container_field,
    STATE(70), 1,
      sym_identifier,
  [535] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_align_LPAREN,
    STATE(37), 1,
      sym_alignment,
    ACTIONS(95), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [555] = 9,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym__container_members,
    STATE(36), 1,
      sym_container_field,
    STATE(70), 1,
      sym_identifier,
  [583] = 9,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym__container_members,
    STATE(36), 1,
      sym_container_field,
    STATE(70), 1,
      sym_identifier,
  [611] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_align_LPAREN,
    STATE(35), 1,
      sym_alignment,
    ACTIONS(103), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [631] = 9,
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
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym__container_members,
    STATE(36), 1,
      sym_container_field,
    STATE(70), 1,
      sym_identifier,
  [659] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_align_LPAREN,
    STATE(33), 1,
      sym_alignment,
    ACTIONS(109), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [679] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_align_LPAREN,
    STATE(34), 1,
      sym_alignment,
    ACTIONS(113), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [729] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(125), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [759] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [774] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_align_LPAREN,
  [789] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [817] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [831] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [845] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
  [861] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [875] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      aux_sym_integer_token4,
    STATE(73), 1,
      sym_integer,
    ACTIONS(21), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
  [903] = 4,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      aux_sym_integer_token4,
    STATE(72), 1,
      sym_integer,
    ACTIONS(21), 3,
      aux_sym_integer_token1,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
  [918] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      sym_comptime,
    STATE(74), 1,
      sym_identifier,
  [934] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      sym_string_fragment,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [947] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      aux_sym_identifier_token1,
    STATE(60), 1,
      sym_identifier,
  [960] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      sym_string_fragment,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [973] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      sym_string_fragment,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_literal_repeat1,
  [986] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 1,
      sym_string_fragment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_literal_repeat1,
  [999] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      sym_string_fragment,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      aux_sym_string_literal_repeat1,
  [1012] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      aux_sym_identifier_token1,
    STATE(63), 1,
      sym_identifier,
  [1025] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(123), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1033] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(127), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1041] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1049] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string_literal,
  [1059] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
  [1069] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
  [1079] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
  [1089] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
  [1099] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(115), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1107] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(131), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [1115] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_string_literal,
  [1125] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [1132] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
  [1139] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [1146] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [1153] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
  [1160] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
  [1167] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
  [1174] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [1181] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
  [1188] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
  [1195] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(218), 1,
      anon_sym_COLON,
  [1202] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
  [1209] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
  [1216] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
  [1223] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(226), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 327,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 435,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 507,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 555,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 611,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 659,
  [SMALL_STATE(25)] = 679,
  [SMALL_STATE(26)] = 699,
  [SMALL_STATE(27)] = 714,
  [SMALL_STATE(28)] = 729,
  [SMALL_STATE(29)] = 744,
  [SMALL_STATE(30)] = 759,
  [SMALL_STATE(31)] = 774,
  [SMALL_STATE(32)] = 789,
  [SMALL_STATE(33)] = 803,
  [SMALL_STATE(34)] = 817,
  [SMALL_STATE(35)] = 831,
  [SMALL_STATE(36)] = 845,
  [SMALL_STATE(37)] = 861,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 890,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 918,
  [SMALL_STATE(42)] = 934,
  [SMALL_STATE(43)] = 947,
  [SMALL_STATE(44)] = 960,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 986,
  [SMALL_STATE(47)] = 999,
  [SMALL_STATE(48)] = 1012,
  [SMALL_STATE(49)] = 1025,
  [SMALL_STATE(50)] = 1033,
  [SMALL_STATE(51)] = 1041,
  [SMALL_STATE(52)] = 1049,
  [SMALL_STATE(53)] = 1059,
  [SMALL_STATE(54)] = 1069,
  [SMALL_STATE(55)] = 1079,
  [SMALL_STATE(56)] = 1089,
  [SMALL_STATE(57)] = 1099,
  [SMALL_STATE(58)] = 1107,
  [SMALL_STATE(59)] = 1115,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1132,
  [SMALL_STATE(62)] = 1139,
  [SMALL_STATE(63)] = 1146,
  [SMALL_STATE(64)] = 1153,
  [SMALL_STATE(65)] = 1160,
  [SMALL_STATE(66)] = 1167,
  [SMALL_STATE(67)] = 1174,
  [SMALL_STATE(68)] = 1181,
  [SMALL_STATE(69)] = 1188,
  [SMALL_STATE(70)] = 1195,
  [SMALL_STATE(71)] = 1202,
  [SMALL_STATE(72)] = 1209,
  [SMALL_STATE(73)] = 1216,
  [SMALL_STATE(74)] = 1223,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alignment, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alignment, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_pointer, 4, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_pointer, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_pointer, 4, .production_id = 11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_pointer, 4, .production_id = 11),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slice_pointer, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_pointer, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_pointer, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_pointer, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(41),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(59),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, .production_id = 9),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 3, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 6, .production_id = 10),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 6, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(42),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_expr, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expr, 3, .production_id = 12),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expr, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
