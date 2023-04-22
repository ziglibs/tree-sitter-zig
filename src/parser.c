#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym_container_doc_comment = 1,
  sym_doc_comment = 2,
  sym_line_comment = 3,
  aux_sym_identifier_token1 = 4,
  anon_sym_AT = 5,
  sym_string_fragment = 6,
  anon_sym_DQUOTE = 7,
  sym_comptime = 8,
  anon_sym_COMMA = 9,
  sym_one_pointer = 10,
  sym_many_pointer = 11,
  sym_slice_pointer = 12,
  sym_c_pointer = 13,
  sym_allowzero = 14,
  sym_constant = 15,
  sym_volatile = 16,
  anon_sym_COLON = 17,
  sym_container_body = 18,
  sym_identifier = 19,
  sym_string_literal = 20,
  aux_sym__container_members = 21,
  sym__type_expr = 22,
  sym__pointer_size = 23,
  sym__pointer_modifier = 24,
  sym_pointer_type = 25,
  sym_container_field = 26,
  aux_sym_string_literal_repeat1 = 27,
  aux_sym_pointer_type_repeat1 = 28,
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
  [anon_sym_COMMA] = ",",
  [sym_one_pointer] = "one_pointer",
  [sym_many_pointer] = "many_pointer",
  [sym_slice_pointer] = "slice_pointer",
  [sym_c_pointer] = "c_pointer",
  [sym_allowzero] = "allowzero",
  [sym_constant] = "constant",
  [sym_volatile] = "volatile",
  [anon_sym_COLON] = ":",
  [sym_container_body] = "container_body",
  [sym_identifier] = "identifier",
  [sym_string_literal] = "string_literal",
  [aux_sym__container_members] = "_container_members",
  [sym__type_expr] = "_type_expr",
  [sym__pointer_size] = "_pointer_size",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_one_pointer] = sym_one_pointer,
  [sym_many_pointer] = sym_many_pointer,
  [sym_slice_pointer] = sym_slice_pointer,
  [sym_c_pointer] = sym_c_pointer,
  [sym_allowzero] = sym_allowzero,
  [sym_constant] = sym_constant,
  [sym_volatile] = sym_volatile,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_container_body] = sym_container_body,
  [sym_identifier] = sym_identifier,
  [sym_string_literal] = sym_string_literal,
  [aux_sym__container_members] = aux_sym__container_members,
  [sym__type_expr] = sym__type_expr,
  [sym__pointer_size] = sym__pointer_size,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_one_pointer] = {
    .visible = true,
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
  [sym_c_pointer] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [aux_sym__container_members] = {
    .visible = false,
    .named = false,
  },
  [sym__type_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__pointer_size] = {
    .visible = false,
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
  field_child = 1,
  field_comptime = 2,
  field_name = 3,
  field_size = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_child] = "child",
  [field_comptime] = "comptime",
  [field_name] = "name",
  [field_size] = "size",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 2},
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
    {field_child, 1},
    {field_size, 0},
  [9] =
    {field_comptime, 1},
    {field_name, 2},
    {field_type, 4},
  [12] =
    {field_child, 2},
    {field_size, 0},
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
  [31] = 27,
  [32] = 30,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 15,
  [37] = 19,
  [38] = 38,
  [39] = 16,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ']') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(67);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_container_doc_comment);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_doc_comment);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'w') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'z') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_one_pointer);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_many_pointer);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_slice_pointer);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_c_pointer);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_allowzero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_one_pointer] = ACTIONS(1),
    [sym_many_pointer] = ACTIONS(1),
    [sym_slice_pointer] = ACTIONS(1),
    [sym_c_pointer] = ACTIONS(1),
    [sym_allowzero] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_volatile] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_container_body] = STATE(35),
    [sym_identifier] = STATE(38),
    [aux_sym__container_members] = STATE(11),
    [sym_container_field] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_container_doc_comment] = ACTIONS(7),
    [sym_doc_comment] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_comptime] = ACTIONS(15),
  },
  [2] = {
    [sym_identifier] = STATE(20),
    [sym__type_expr] = STATE(20),
    [sym__pointer_size] = STATE(3),
    [sym__pointer_modifier] = STATE(4),
    [sym_pointer_type] = STATE(20),
    [aux_sym_pointer_type_repeat1] = STATE(4),
    [sym_line_comment] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [sym_one_pointer] = ACTIONS(23),
    [sym_many_pointer] = ACTIONS(23),
    [sym_slice_pointer] = ACTIONS(23),
    [sym_c_pointer] = ACTIONS(23),
    [sym_allowzero] = ACTIONS(25),
    [sym_constant] = ACTIONS(25),
    [sym_volatile] = ACTIONS(25),
  },
  [3] = {
    [sym_identifier] = STATE(21),
    [sym__type_expr] = STATE(21),
    [sym__pointer_size] = STATE(3),
    [sym__pointer_modifier] = STATE(2),
    [sym_pointer_type] = STATE(21),
    [aux_sym_pointer_type_repeat1] = STATE(2),
    [sym_line_comment] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [sym_one_pointer] = ACTIONS(23),
    [sym_many_pointer] = ACTIONS(23),
    [sym_slice_pointer] = ACTIONS(23),
    [sym_c_pointer] = ACTIONS(23),
    [sym_allowzero] = ACTIONS(27),
    [sym_constant] = ACTIONS(27),
    [sym_volatile] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    STATE(4), 2,
      sym__pointer_modifier,
      aux_sym_pointer_type_repeat1,
    ACTIONS(33), 3,
      sym_allowzero,
      sym_constant,
      sym_volatile,
    ACTIONS(31), 5,
      anon_sym_AT,
      sym_one_pointer,
      sym_many_pointer,
      sym_slice_pointer,
      sym_c_pointer,
  [23] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym__pointer_size,
    STATE(13), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
    ACTIONS(23), 4,
      sym_one_pointer,
      sym_many_pointer,
      sym_slice_pointer,
      sym_c_pointer,
  [47] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym__pointer_size,
    STATE(14), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
    ACTIONS(23), 4,
      sym_one_pointer,
      sym_many_pointer,
      sym_slice_pointer,
      sym_c_pointer,
  [71] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym__pointer_size,
    STATE(22), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
    ACTIONS(23), 4,
      sym_one_pointer,
      sym_many_pointer,
      sym_slice_pointer,
      sym_c_pointer,
  [95] = 6,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(36), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym__pointer_size,
    STATE(23), 3,
      sym_identifier,
      sym__type_expr,
      sym_pointer_type,
    ACTIONS(23), 4,
      sym_one_pointer,
      sym_many_pointer,
      sym_slice_pointer,
      sym_c_pointer,
  [119] = 9,
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
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__container_members,
    STATE(18), 1,
      sym_container_field,
    STATE(38), 1,
      sym_identifier,
  [147] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_doc_comment,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      sym_comptime,
    STATE(10), 1,
      aux_sym__container_members,
    STATE(18), 1,
      sym_container_field,
    STATE(38), 1,
      sym_identifier,
  [175] = 9,
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
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym__container_members,
    STATE(18), 1,
      sym_container_field,
    STATE(38), 1,
      sym_identifier,
  [203] = 9,
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
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym__container_members,
    STATE(18), 1,
      sym_container_field,
    STATE(38), 1,
      sym_identifier,
  [231] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(58), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [245] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [259] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(66), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [273] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(70), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [287] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(74), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [301] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(78), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
  [317] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [331] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(88), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [345] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(92), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [359] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(96), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [373] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
      anon_sym_COMMA,
  [387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(102), 2,
      aux_sym_identifier_token1,
      sym_comptime,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_doc_comment,
      anon_sym_AT,
  [400] = 5,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(104), 1,
      sym_comptime,
    STATE(40), 1,
      sym_identifier,
  [416] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      aux_sym_identifier_token1,
    STATE(41), 1,
      sym_identifier,
  [429] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      sym_string_fragment,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_literal_repeat1,
  [442] = 4,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(106), 1,
      aux_sym_identifier_token1,
    STATE(42), 1,
      sym_identifier,
  [455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      sym_string_fragment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_literal_repeat1,
  [468] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      sym_string_fragment,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_string_literal_repeat1,
  [481] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(108), 1,
      sym_string_fragment,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_literal_repeat1,
  [494] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 1,
      sym_string_fragment,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_literal_repeat1,
  [507] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string_literal,
  [517] = 3,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string_literal,
  [527] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [534] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(64), 1,
      anon_sym_COLON,
  [541] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(82), 1,
      anon_sym_COLON,
  [548] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      anon_sym_COLON,
  [555] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(68), 1,
      anon_sym_COLON,
  [562] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      anon_sym_COLON,
  [569] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      anon_sym_COLON,
  [576] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      anon_sym_COLON,
  [583] = 2,
    ACTIONS(17), 1,
      sym_line_comment,
    ACTIONS(72), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 231,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 317,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 416,
  [SMALL_STATE(27)] = 429,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 455,
  [SMALL_STATE(30)] = 468,
  [SMALL_STATE(31)] = 481,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 507,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 541,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 562,
  [SMALL_STATE(41)] = 569,
  [SMALL_STATE(42)] = 576,
  [SMALL_STATE(43)] = 583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_type_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pointer_type_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(25),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(37),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(34),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__container_members, 2), SHIFT_REPEAT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_body, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 5, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 5, .production_id = 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__container_members, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, .production_id = 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 3, .production_id = 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 2, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 4, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 4, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_field, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_container_field, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__container_members, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(29),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
