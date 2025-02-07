#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 42
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym_identifier = 5,
  anon_sym_PIPE_GT = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_COLON_GT = 8,
  anon_sym_BANG_GT = 9,
  anon_sym_LT_BANG = 10,
  anon_sym_LT_COLON = 11,
  anon_sym_LT_DASH = 12,
  anon_sym_LT_PIPE = 13,
  anon_sym_GT = 14,
  anon_sym_LT = 15,
  anon_sym_EQ = 16,
  anon_sym_COMMA = 17,
  anon_sym_DOT = 18,
  anon_sym_SEMI = 19,
  sym_op = 20,
  sym_number = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_string_token2 = 25,
  sym_program = 26,
  sym_expression = 27,
  sym_operator_expression = 28,
  sym_parenthesized_expression = 29,
  sym_curly_expression = 30,
  sym_opcurry = 31,
  sym_apply_expression = 32,
  sym_operator = 33,
  sym_st_op = 34,
  sym_main_op = 35,
  sym_string = 36,
  aux_sym_opcurry_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_BANG_GT] = "!>",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [sym_op] = "op",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_program] = "program",
  [sym_expression] = "expression",
  [sym_operator_expression] = "operator_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_curly_expression] = "curly_expression",
  [sym_opcurry] = "opcurry",
  [sym_apply_expression] = "apply_expression",
  [sym_operator] = "operator",
  [sym_st_op] = "st_op",
  [sym_main_op] = "main_op",
  [sym_string] = "string",
  [aux_sym_opcurry_repeat1] = "opcurry_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_BANG_GT] = anon_sym_BANG_GT,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_op] = sym_op,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_program] = sym_program,
  [sym_expression] = sym_expression,
  [sym_operator_expression] = sym_operator_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_curly_expression] = sym_curly_expression,
  [sym_opcurry] = sym_opcurry,
  [sym_apply_expression] = sym_apply_expression,
  [sym_operator] = sym_operator,
  [sym_st_op] = sym_st_op,
  [sym_main_op] = sym_main_op,
  [sym_string] = sym_string,
  [aux_sym_opcurry_repeat1] = aux_sym_opcurry_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_opcurry] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_st_op] = {
    .visible = true,
    .named = true,
  },
  [sym_main_op] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_opcurry_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_operator = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 1},
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
  [7] = 3,
  [8] = 6,
  [9] = 5,
  [10] = 3,
  [11] = 4,
  [12] = 6,
  [13] = 4,
  [14] = 5,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 19,
  [22] = 19,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 25,
  [32] = 26,
  [33] = 24,
  [34] = 28,
  [35] = 29,
  [36] = 30,
  [37] = 25,
  [38] = 28,
  [39] = 26,
  [40] = 29,
  [41] = 30,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 19,
  [46] = 42,
  [47] = 44,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 50,
  [53] = 50,
  [54] = 49,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 55,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 63,
  [68] = 65,
  [69] = 62,
  [70] = 61,
  [71] = 71,
  [72] = 62,
  [73] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 9,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 9,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 24,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        ')', 24,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 9,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 9,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ')', 24,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        '!', 18,
        '"', 41,
        '\'', 46,
        '(', 8,
        ',', 36,
        '-', 19,
        '.', 37,
        ':', 20,
        ';', 38,
        '<', 34,
        '=', 35,
        '>', 33,
        '{', 10,
        '|', 21,
        ')', 24,
        '}', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '{') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BANG_GT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '|') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || ':' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(22);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead)) ADVANCE(22);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 48},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_BANG_GT] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_op] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(71),
    [sym_expression] = STATE(2),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_string] = STATE(24),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [2] = {
    [sym_expression] = STATE(3),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_operator] = STATE(50),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(24),
    [aux_sym_opcurry_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [3] = {
    [sym_expression] = STATE(3),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_operator] = STATE(50),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(24),
    [aux_sym_opcurry_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
  },
  [4] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(53),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [5] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_operator] = STATE(52),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
  },
  [6] = {
    [sym_expression] = STATE(3),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_operator] = STATE(50),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(24),
    [aux_sym_opcurry_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_PIPE_GT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_COLON_GT] = ACTIONS(49),
    [anon_sym_BANG_GT] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(49),
    [anon_sym_LT_COLON] = ACTIONS(49),
    [anon_sym_LT_DASH] = ACTIONS(49),
    [anon_sym_LT_PIPE] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_op] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
  },
  [7] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(53),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [8] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(53),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_PIPE_GT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_COLON_GT] = ACTIONS(49),
    [anon_sym_BANG_GT] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(49),
    [anon_sym_LT_COLON] = ACTIONS(49),
    [anon_sym_LT_DASH] = ACTIONS(49),
    [anon_sym_LT_PIPE] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_op] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
  },
  [9] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_operator] = STATE(52),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
  },
  [10] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_operator] = STATE(52),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
  },
  [11] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(53),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [12] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_operator] = STATE(52),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_PIPE_GT] = ACTIONS(49),
    [anon_sym_DASH_GT] = ACTIONS(49),
    [anon_sym_COLON_GT] = ACTIONS(49),
    [anon_sym_BANG_GT] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(49),
    [anon_sym_LT_COLON] = ACTIONS(49),
    [anon_sym_LT_DASH] = ACTIONS(49),
    [anon_sym_LT_PIPE] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_op] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
  },
  [13] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(53),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [14] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_operator] = STATE(52),
    [sym_st_op] = STATE(60),
    [sym_main_op] = STATE(60),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_PIPE_GT] = ACTIONS(15),
    [anon_sym_DASH_GT] = ACTIONS(15),
    [anon_sym_COLON_GT] = ACTIONS(15),
    [anon_sym_BANG_GT] = ACTIONS(15),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(15),
    [anon_sym_LT_DASH] = ACTIONS(15),
    [anon_sym_LT_PIPE] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_op] = ACTIONS(19),
    [sym_number] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
  },
  [15] = {
    [sym_expression] = STATE(4),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(42),
    [sym_st_op] = STATE(57),
    [sym_main_op] = STATE(57),
    [sym_string] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_COLON_GT] = ACTIONS(61),
    [anon_sym_BANG_GT] = ACTIONS(61),
    [anon_sym_LT_BANG] = ACTIONS(61),
    [anon_sym_LT_COLON] = ACTIONS(61),
    [anon_sym_LT_DASH] = ACTIONS(61),
    [anon_sym_LT_PIPE] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_op] = ACTIONS(65),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [16] = {
    [sym_expression] = STATE(13),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(43),
    [sym_st_op] = STATE(57),
    [sym_main_op] = STATE(57),
    [sym_string] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_COLON_GT] = ACTIONS(61),
    [anon_sym_BANG_GT] = ACTIONS(61),
    [anon_sym_LT_BANG] = ACTIONS(61),
    [anon_sym_LT_COLON] = ACTIONS(61),
    [anon_sym_LT_DASH] = ACTIONS(61),
    [anon_sym_LT_PIPE] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_op] = ACTIONS(65),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [17] = {
    [sym_expression] = STATE(11),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_operator] = STATE(46),
    [sym_st_op] = STATE(57),
    [sym_main_op] = STATE(57),
    [sym_string] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PIPE_GT] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_COLON_GT] = ACTIONS(61),
    [anon_sym_BANG_GT] = ACTIONS(61),
    [anon_sym_LT_BANG] = ACTIONS(61),
    [anon_sym_LT_COLON] = ACTIONS(61),
    [anon_sym_LT_DASH] = ACTIONS(61),
    [anon_sym_LT_PIPE] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_op] = ACTIONS(65),
    [sym_number] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [18] = {
    [sym_expression] = STATE(3),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_opcurry_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_PIPE_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_GT] = ACTIONS(69),
    [anon_sym_BANG_GT] = ACTIONS(69),
    [anon_sym_LT_BANG] = ACTIONS(69),
    [anon_sym_LT_COLON] = ACTIONS(69),
    [anon_sym_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_PIPE] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_op] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
  },
  [19] = {
    [sym_expression] = STATE(3),
    [sym_operator_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_curly_expression] = STATE(24),
    [sym_opcurry] = STATE(24),
    [sym_apply_expression] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_opcurry_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(76),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_PIPE_GT] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_COLON_GT] = ACTIONS(82),
    [anon_sym_BANG_GT] = ACTIONS(82),
    [anon_sym_LT_BANG] = ACTIONS(82),
    [anon_sym_LT_COLON] = ACTIONS(82),
    [anon_sym_LT_DASH] = ACTIONS(82),
    [anon_sym_LT_PIPE] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [sym_op] = ACTIONS(82),
    [sym_number] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [20] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_PIPE_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_GT] = ACTIONS(69),
    [anon_sym_BANG_GT] = ACTIONS(69),
    [anon_sym_LT_BANG] = ACTIONS(69),
    [anon_sym_LT_COLON] = ACTIONS(69),
    [anon_sym_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_PIPE] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_op] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
  },
  [21] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(82),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_PIPE_GT] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_COLON_GT] = ACTIONS(82),
    [anon_sym_BANG_GT] = ACTIONS(82),
    [anon_sym_LT_BANG] = ACTIONS(82),
    [anon_sym_LT_COLON] = ACTIONS(82),
    [anon_sym_LT_DASH] = ACTIONS(82),
    [anon_sym_LT_PIPE] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [sym_op] = ACTIONS(82),
    [sym_number] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(102),
  },
  [22] = {
    [sym_expression] = STATE(7),
    [sym_operator_expression] = STATE(27),
    [sym_parenthesized_expression] = STATE(27),
    [sym_curly_expression] = STATE(27),
    [sym_opcurry] = STATE(27),
    [sym_apply_expression] = STATE(27),
    [sym_string] = STATE(27),
    [aux_sym_opcurry_repeat1] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(108),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_PIPE_GT] = ACTIONS(82),
    [anon_sym_DASH_GT] = ACTIONS(82),
    [anon_sym_COLON_GT] = ACTIONS(82),
    [anon_sym_BANG_GT] = ACTIONS(82),
    [anon_sym_LT_BANG] = ACTIONS(82),
    [anon_sym_LT_COLON] = ACTIONS(82),
    [anon_sym_LT_DASH] = ACTIONS(82),
    [anon_sym_LT_PIPE] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [sym_op] = ACTIONS(82),
    [sym_number] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(117),
  },
  [23] = {
    [sym_expression] = STATE(10),
    [sym_operator_expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(33),
    [sym_curly_expression] = STATE(33),
    [sym_opcurry] = STATE(33),
    [sym_apply_expression] = STATE(33),
    [sym_string] = STATE(33),
    [aux_sym_opcurry_repeat1] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_PIPE_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_GT] = ACTIONS(69),
    [anon_sym_BANG_GT] = ACTIONS(69),
    [anon_sym_LT_BANG] = ACTIONS(69),
    [anon_sym_LT_COLON] = ACTIONS(69),
    [anon_sym_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_PIPE] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_op] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_PIPE_GT] = ACTIONS(122),
    [anon_sym_DASH_GT] = ACTIONS(122),
    [anon_sym_COLON_GT] = ACTIONS(122),
    [anon_sym_BANG_GT] = ACTIONS(122),
    [anon_sym_LT_BANG] = ACTIONS(122),
    [anon_sym_LT_COLON] = ACTIONS(122),
    [anon_sym_LT_DASH] = ACTIONS(122),
    [anon_sym_LT_PIPE] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [sym_op] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_PIPE_GT] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [anon_sym_COLON_GT] = ACTIONS(126),
    [anon_sym_BANG_GT] = ACTIONS(126),
    [anon_sym_LT_BANG] = ACTIONS(126),
    [anon_sym_LT_COLON] = ACTIONS(126),
    [anon_sym_LT_DASH] = ACTIONS(126),
    [anon_sym_LT_PIPE] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_op] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_PIPE_GT] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(130),
    [anon_sym_COLON_GT] = ACTIONS(130),
    [anon_sym_BANG_GT] = ACTIONS(130),
    [anon_sym_LT_BANG] = ACTIONS(130),
    [anon_sym_LT_COLON] = ACTIONS(130),
    [anon_sym_LT_DASH] = ACTIONS(130),
    [anon_sym_LT_PIPE] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [sym_op] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_PIPE_GT] = ACTIONS(122),
    [anon_sym_DASH_GT] = ACTIONS(122),
    [anon_sym_COLON_GT] = ACTIONS(122),
    [anon_sym_BANG_GT] = ACTIONS(122),
    [anon_sym_LT_BANG] = ACTIONS(122),
    [anon_sym_LT_COLON] = ACTIONS(122),
    [anon_sym_LT_DASH] = ACTIONS(122),
    [anon_sym_LT_PIPE] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [sym_op] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_PIPE_GT] = ACTIONS(132),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_COLON_GT] = ACTIONS(132),
    [anon_sym_BANG_GT] = ACTIONS(132),
    [anon_sym_LT_BANG] = ACTIONS(132),
    [anon_sym_LT_COLON] = ACTIONS(132),
    [anon_sym_LT_DASH] = ACTIONS(132),
    [anon_sym_LT_PIPE] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_op] = ACTIONS(132),
    [sym_number] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_PIPE_GT] = ACTIONS(134),
    [anon_sym_DASH_GT] = ACTIONS(134),
    [anon_sym_COLON_GT] = ACTIONS(134),
    [anon_sym_BANG_GT] = ACTIONS(134),
    [anon_sym_LT_BANG] = ACTIONS(134),
    [anon_sym_LT_COLON] = ACTIONS(134),
    [anon_sym_LT_DASH] = ACTIONS(134),
    [anon_sym_LT_PIPE] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_op] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_PIPE_GT] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_COLON_GT] = ACTIONS(136),
    [anon_sym_BANG_GT] = ACTIONS(136),
    [anon_sym_LT_BANG] = ACTIONS(136),
    [anon_sym_LT_COLON] = ACTIONS(136),
    [anon_sym_LT_DASH] = ACTIONS(136),
    [anon_sym_LT_PIPE] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_op] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_PIPE_GT] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [anon_sym_COLON_GT] = ACTIONS(126),
    [anon_sym_BANG_GT] = ACTIONS(126),
    [anon_sym_LT_BANG] = ACTIONS(126),
    [anon_sym_LT_COLON] = ACTIONS(126),
    [anon_sym_LT_DASH] = ACTIONS(126),
    [anon_sym_LT_PIPE] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_op] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_PIPE_GT] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(130),
    [anon_sym_COLON_GT] = ACTIONS(130),
    [anon_sym_BANG_GT] = ACTIONS(130),
    [anon_sym_LT_BANG] = ACTIONS(130),
    [anon_sym_LT_COLON] = ACTIONS(130),
    [anon_sym_LT_DASH] = ACTIONS(130),
    [anon_sym_LT_PIPE] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [sym_op] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_PIPE_GT] = ACTIONS(122),
    [anon_sym_DASH_GT] = ACTIONS(122),
    [anon_sym_COLON_GT] = ACTIONS(122),
    [anon_sym_BANG_GT] = ACTIONS(122),
    [anon_sym_LT_BANG] = ACTIONS(122),
    [anon_sym_LT_COLON] = ACTIONS(122),
    [anon_sym_LT_DASH] = ACTIONS(122),
    [anon_sym_LT_PIPE] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [sym_op] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_PIPE_GT] = ACTIONS(132),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_COLON_GT] = ACTIONS(132),
    [anon_sym_BANG_GT] = ACTIONS(132),
    [anon_sym_LT_BANG] = ACTIONS(132),
    [anon_sym_LT_COLON] = ACTIONS(132),
    [anon_sym_LT_DASH] = ACTIONS(132),
    [anon_sym_LT_PIPE] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_op] = ACTIONS(132),
    [sym_number] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_PIPE_GT] = ACTIONS(134),
    [anon_sym_DASH_GT] = ACTIONS(134),
    [anon_sym_COLON_GT] = ACTIONS(134),
    [anon_sym_BANG_GT] = ACTIONS(134),
    [anon_sym_LT_BANG] = ACTIONS(134),
    [anon_sym_LT_COLON] = ACTIONS(134),
    [anon_sym_LT_DASH] = ACTIONS(134),
    [anon_sym_LT_PIPE] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_op] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_PIPE_GT] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_COLON_GT] = ACTIONS(136),
    [anon_sym_BANG_GT] = ACTIONS(136),
    [anon_sym_LT_BANG] = ACTIONS(136),
    [anon_sym_LT_COLON] = ACTIONS(136),
    [anon_sym_LT_DASH] = ACTIONS(136),
    [anon_sym_LT_PIPE] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_op] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_PIPE_GT] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(126),
    [anon_sym_COLON_GT] = ACTIONS(126),
    [anon_sym_BANG_GT] = ACTIONS(126),
    [anon_sym_LT_BANG] = ACTIONS(126),
    [anon_sym_LT_COLON] = ACTIONS(126),
    [anon_sym_LT_DASH] = ACTIONS(126),
    [anon_sym_LT_PIPE] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [sym_op] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(126),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [anon_sym_PIPE_GT] = ACTIONS(132),
    [anon_sym_DASH_GT] = ACTIONS(132),
    [anon_sym_COLON_GT] = ACTIONS(132),
    [anon_sym_BANG_GT] = ACTIONS(132),
    [anon_sym_LT_BANG] = ACTIONS(132),
    [anon_sym_LT_COLON] = ACTIONS(132),
    [anon_sym_LT_DASH] = ACTIONS(132),
    [anon_sym_LT_PIPE] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_op] = ACTIONS(132),
    [sym_number] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_PIPE_GT] = ACTIONS(130),
    [anon_sym_DASH_GT] = ACTIONS(130),
    [anon_sym_COLON_GT] = ACTIONS(130),
    [anon_sym_BANG_GT] = ACTIONS(130),
    [anon_sym_LT_BANG] = ACTIONS(130),
    [anon_sym_LT_COLON] = ACTIONS(130),
    [anon_sym_LT_DASH] = ACTIONS(130),
    [anon_sym_LT_PIPE] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [sym_op] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(130),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_PIPE_GT] = ACTIONS(134),
    [anon_sym_DASH_GT] = ACTIONS(134),
    [anon_sym_COLON_GT] = ACTIONS(134),
    [anon_sym_BANG_GT] = ACTIONS(134),
    [anon_sym_LT_BANG] = ACTIONS(134),
    [anon_sym_LT_COLON] = ACTIONS(134),
    [anon_sym_LT_DASH] = ACTIONS(134),
    [anon_sym_LT_PIPE] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_op] = ACTIONS(134),
    [sym_number] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(134),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_PIPE_GT] = ACTIONS(136),
    [anon_sym_DASH_GT] = ACTIONS(136),
    [anon_sym_COLON_GT] = ACTIONS(136),
    [anon_sym_BANG_GT] = ACTIONS(136),
    [anon_sym_LT_BANG] = ACTIONS(136),
    [anon_sym_LT_COLON] = ACTIONS(136),
    [anon_sym_LT_DASH] = ACTIONS(136),
    [anon_sym_LT_PIPE] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_op] = ACTIONS(136),
    [sym_number] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(47), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [34] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(44), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [68] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [102] = 9,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(111), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [136] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(48), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [170] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [204] = 9,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(45), 1,
      aux_sym_opcurry_repeat1,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [238] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_identifier,
      sym_number,
    STATE(33), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [266] = 7,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_expression,
    ACTIONS(7), 2,
      sym_identifier,
      sym_number,
    STATE(24), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [294] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(5), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_identifier,
      sym_number,
    STATE(33), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [322] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_identifier,
      sym_number,
    STATE(33), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [350] = 7,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(27), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [378] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_identifier,
      sym_number,
    STATE(33), 6,
      sym_operator_expression,
      sym_parenthesized_expression,
      sym_curly_expression,
      sym_opcurry,
      sym_apply_expression,
      sym_string,
  [406] = 1,
    ACTIONS(156), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [416] = 1,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [426] = 1,
    ACTIONS(160), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [436] = 1,
    ACTIONS(158), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [445] = 1,
    ACTIONS(156), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [454] = 1,
    ACTIONS(160), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_identifier,
      sym_number,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [463] = 1,
    ACTIONS(162), 1,
      aux_sym_string_token2,
  [467] = 1,
    ACTIONS(164), 1,
      aux_sym_string_token1,
  [471] = 1,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
  [475] = 1,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
  [479] = 1,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
  [483] = 1,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
  [487] = 1,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
  [491] = 1,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
  [495] = 1,
    ACTIONS(172), 1,
      aux_sym_string_token1,
  [499] = 1,
    ACTIONS(174), 1,
      aux_sym_string_token2,
  [503] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [507] = 1,
    ACTIONS(178), 1,
      aux_sym_string_token1,
  [511] = 1,
    ACTIONS(180), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(42)] = 0,
  [SMALL_STATE(43)] = 34,
  [SMALL_STATE(44)] = 68,
  [SMALL_STATE(45)] = 102,
  [SMALL_STATE(46)] = 136,
  [SMALL_STATE(47)] = 170,
  [SMALL_STATE(48)] = 204,
  [SMALL_STATE(49)] = 238,
  [SMALL_STATE(50)] = 266,
  [SMALL_STATE(51)] = 294,
  [SMALL_STATE(52)] = 322,
  [SMALL_STATE(53)] = 350,
  [SMALL_STATE(54)] = 378,
  [SMALL_STATE(55)] = 406,
  [SMALL_STATE(56)] = 416,
  [SMALL_STATE(57)] = 426,
  [SMALL_STATE(58)] = 436,
  [SMALL_STATE(59)] = 445,
  [SMALL_STATE(60)] = 454,
  [SMALL_STATE(61)] = 463,
  [SMALL_STATE(62)] = 467,
  [SMALL_STATE(63)] = 471,
  [SMALL_STATE(64)] = 475,
  [SMALL_STATE(65)] = 479,
  [SMALL_STATE(66)] = 483,
  [SMALL_STATE(67)] = 487,
  [SMALL_STATE(68)] = 491,
  [SMALL_STATE(69)] = 495,
  [SMALL_STATE(70)] = 499,
  [SMALL_STATE(71)] = 503,
  [SMALL_STATE(72)] = 507,
  [SMALL_STATE(73)] = 511,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_opcurry_repeat1, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_expression, 3, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_expression, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opcurry_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcurry, 4, 0, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcurry, 4, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcurry, 3, 0, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_expression, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcurry, 3, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_expression, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_op, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_st_op, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_kolibri(void) {
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
