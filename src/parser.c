#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_stream_operator = 1,
  sym_main_operator = 2,
  sym_other_operator = 3,
  sym_number = 4,
  sym_string = 5,
  sym_identifier = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_source_file = 11,
  sym__expression = 12,
  sym_binary_expression = 13,
  sym_op_expression = 14,
  sym_partial_expression = 15,
  sym_full_expression = 16,
  sym_operator = 17,
  sym__primary_expression = 18,
  sym_parenthesized_expression = 19,
  sym_curly_expression = 20,
  sym_apply_expression = 21,
  aux_sym_apply_expression_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_stream_operator] = "stream_operator",
  [sym_main_operator] = "main_operator",
  [sym_other_operator] = "other_operator",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_op_expression] = "op_expression",
  [sym_partial_expression] = "partial_expression",
  [sym_full_expression] = "full_expression",
  [sym_operator] = "operator",
  [sym__primary_expression] = "_primary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_curly_expression] = "curly_expression",
  [sym_apply_expression] = "apply_expression",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_stream_operator] = sym_stream_operator,
  [sym_main_operator] = sym_main_operator,
  [sym_other_operator] = sym_other_operator,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_op_expression] = sym_op_expression,
  [sym_partial_expression] = sym_partial_expression,
  [sym_full_expression] = sym_full_expression,
  [sym_operator] = sym_operator,
  [sym__primary_expression] = sym__primary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_curly_expression] = sym_curly_expression,
  [sym_apply_expression] = sym_apply_expression,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_stream_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_main_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_other_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_op_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_full_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
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
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_function = 2,
  field_operator = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_function] = "function",
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
  [1] =
    {field_operator, 1},
  [2] =
    {field_argument, 0},
  [3] =
    {field_argument, 1, .inherited = true},
    {field_function, 0},
  [5] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 10,
  [16] = 13,
  [17] = 12,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 21,
  [26] = 18,
  [27] = 20,
  [28] = 19,
  [29] = 22,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 33,
  [42] = 38,
  [43] = 36,
  [44] = 37,
  [45] = 45,
};

static TSCharacterRange sym_other_operator_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '\''}, {'*', '/'}, {':', '@'}, {'[', '^'}, {'`', '`'}, {'|', '|'},
  {'~', 0x10ffff},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {' ', ' '}, {'\'', '\''}, {'0', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xaa, 0xaa}, {0xad, 0xad},
  {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x300, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c},
  {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x483, 0x487}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588},
  {0x591, 0x5bd}, {0x5bf, 0x5bf}, {0x5c1, 0x5c2}, {0x5c4, 0x5c5}, {0x5c7, 0x5c7}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x600, 0x605},
  {0x610, 0x61a}, {0x61c, 0x61c}, {0x620, 0x669}, {0x66e, 0x6d3}, {0x6d5, 0x6dd}, {0x6df, 0x6e8}, {0x6ea, 0x6fc}, {0x6ff, 0x6ff},
  {0x70f, 0x74a}, {0x74d, 0x7b1}, {0x7c0, 0x7f5}, {0x7fa, 0x7fa}, {0x7fd, 0x7fd}, {0x800, 0x82d}, {0x840, 0x85b}, {0x860, 0x86a},
  {0x870, 0x887}, {0x889, 0x88e}, {0x890, 0x891}, {0x898, 0x963}, {0x966, 0x96f}, {0x971, 0x983}, {0x985, 0x98c}, {0x98f, 0x990},
  {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bc, 0x9c4}, {0x9c7, 0x9c8}, {0x9cb, 0x9ce}, {0x9d7, 0x9d7},
  {0x9dc, 0x9dd}, {0x9df, 0x9e3}, {0x9e6, 0x9f1}, {0x9fc, 0x9fc}, {0x9fe, 0x9fe}, {0xa01, 0xa03}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa3c, 0xa3c}, {0xa3e, 0xa42}, {0xa47, 0xa48},
  {0xa4b, 0xa4d}, {0xa51, 0xa51}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa75}, {0xa81, 0xa83}, {0xa85, 0xa8d}, {0xa8f, 0xa91},
  {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabc, 0xac5}, {0xac7, 0xac9}, {0xacb, 0xacd}, {0xad0, 0xad0},
  {0xae0, 0xae3}, {0xae6, 0xaef}, {0xaf9, 0xaff}, {0xb01, 0xb03}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30},
  {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3c, 0xb44}, {0xb47, 0xb48}, {0xb4b, 0xb4d}, {0xb55, 0xb57}, {0xb5c, 0xb5d}, {0xb5f, 0xb63},
  {0xb66, 0xb6f}, {0xb71, 0xb71}, {0xb82, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c},
  {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbbe, 0xbc2}, {0xbc6, 0xbc8}, {0xbca, 0xbcd}, {0xbd0, 0xbd0},
  {0xbd7, 0xbd7}, {0xbe6, 0xbef}, {0xc00, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3c, 0xc44}, {0xc46, 0xc48},
  {0xc4a, 0xc4d}, {0xc55, 0xc56}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc63}, {0xc66, 0xc6f}, {0xc80, 0xc83}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbc, 0xcc4}, {0xcc6, 0xcc8}, {0xcca, 0xccd}, {0xcd5, 0xcd6},
  {0xcdd, 0xcde}, {0xce0, 0xce3}, {0xce6, 0xcef}, {0xcf1, 0xcf3}, {0xd00, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd44}, {0xd46, 0xd48},
  {0xd4a, 0xd4e}, {0xd54, 0xd57}, {0xd5f, 0xd63}, {0xd66, 0xd6f}, {0xd7a, 0xd7f}, {0xd81, 0xd83}, {0xd85, 0xd96}, {0xd9a, 0xdb1},
  {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xdca, 0xdca}, {0xdcf, 0xdd4}, {0xdd6, 0xdd6}, {0xdd8, 0xddf}, {0xde6, 0xdef},
  {0xdf2, 0xdf3}, {0xe01, 0xe3a}, {0xe40, 0xe4e}, {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3},
  {0xea5, 0xea5}, {0xea7, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xec8, 0xece}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00},
  {0xf18, 0xf19}, {0xf20, 0xf29}, {0xf35, 0xf35}, {0xf37, 0xf37}, {0xf39, 0xf39}, {0xf3e, 0xf47}, {0xf49, 0xf6c}, {0xf71, 0xf84},
  {0xf86, 0xf97}, {0xf99, 0xfbc}, {0xfc6, 0xfc6}, {0x1000, 0x1049}, {0x1050, 0x109d}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd},
  {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d},
  {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315},
  {0x1318, 0x135a}, {0x135d, 0x135f}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a},
  {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1715}, {0x171f, 0x1734}, {0x1740, 0x1753}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1772, 0x1773},
  {0x1780, 0x17d3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dd}, {0x17e0, 0x17e9}, {0x180b, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x18aa}, {0x18b0, 0x18f5},
  {0x1900, 0x191e}, {0x1920, 0x192b}, {0x1930, 0x193b}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19d9},
  {0x1a00, 0x1a1b}, {0x1a20, 0x1a5e}, {0x1a60, 0x1a7c}, {0x1a7f, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1ab0, 0x1abd}, {0x1abf, 0x1ace},
  {0x1b00, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b6b, 0x1b73}, {0x1b80, 0x1bf3}, {0x1c00, 0x1c37}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88},
  {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1cd0, 0x1cd2}, {0x1cd4, 0x1cfa}, {0x1d00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x200b, 0x200f},
  {0x202a, 0x202e}, {0x203f, 0x2040}, {0x2054, 0x2054}, {0x2060, 0x2064}, {0x2066, 0x206f}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x20d0, 0x20dc}, {0x20e1, 0x20e1}, {0x20e5, 0x20f0}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f},
  {0x2d7f, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6},
  {0x2dd8, 0x2dde}, {0x2de0, 0x2dff}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x302f}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096},
  {0x3099, 0x309a}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff},
  {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66f},
  {0xa674, 0xa67d}, {0xa67f, 0xa6f1}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9},
  {0xa7f2, 0xa827}, {0xa82c, 0xa82c}, {0xa840, 0xa873}, {0xa880, 0xa8c5}, {0xa8d0, 0xa8d9}, {0xa8e0, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa92d},
  {0xa930, 0xa953}, {0xa960, 0xa97c}, {0xa980, 0xa9c0}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9fe}, {0xaa00, 0xaa36}, {0xaa40, 0xaa4d}, {0xaa50, 0xaa59},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaef}, {0xaaf2, 0xaaf6}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16},
  {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabea}, {0xabec, 0xabed}, {0xabf0, 0xabf9}, {0xac00, 0xac00},
  {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb28},
  {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f},
  {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe00, 0xfe0f}, {0xfe20, 0xfe2f}, {0xfe33, 0xfe34}, {0xfe4d, 0xfe4f}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xfeff, 0xfeff}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff3f, 0xff3f}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf},
  {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0xfff9, 0xfffb}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d},
  {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10140, 0x10174}, {0x101fd, 0x101fd}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e0, 0x102e0}, {0x10300, 0x1031f},
  {0x1032d, 0x1034a}, {0x10350, 0x1037a}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange sym_identifier_character_set_3[] = {
  {' ', ' '}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2160, 0x2188}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff},
  {0x3105, 0x312f}, {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c},
  {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f},
  {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a},
  {0xa80c, 0xa822}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946},
  {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42},
  {0xaa44, 0xaa4b}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0},
  {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26},
  {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb},
  {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c},
  {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb},
  {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10140, 0x10174}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3},
  {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a},
  {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736},
  {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835},
  {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '!', 14,
        '"', 11,
        '\'', 12,
        '(', 21,
        ')', 22,
        '+', 15,
        '-', 13,
        ':', 14,
        '<', 7,
        '>', 8,
        '{', 23,
        '|', 14,
        '}', 24,
        ',', 9,
        '.', 9,
        ';', 9,
        '=', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (set_contains(sym_identifier_character_set_3, 432, lookahead)) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (set_contains(sym_identifier_character_set_3, 432, lookahead)) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '!', 14,
        ')', 22,
        '-', 14,
        ':', 14,
        '<', 7,
        '>', 8,
        '|', 14,
        '}', 24,
        ',', 9,
        '.', 9,
        ';', 9,
        '=', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '}' < lookahead)) ADVANCE(16);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_stream_operator);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '|') ADVANCE(8);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_stream_operator);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_main_operator);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_other_operator);
      if (lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (set_contains(sym_identifier_character_set_2, 493, lookahead)) ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_other_operator);
      if (lookahead == '"') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(2);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_other_operator);
      if (lookahead == '\'') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_other_operator);
      if (lookahead == '>') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_other_operator);
      if (lookahead == '>') ADVANCE(8);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_other_operator);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_other_operator);
      if ((!eof && set_contains(sym_other_operator_character_set_1, 9, lookahead))) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(1);
      if (set_contains(sym_identifier_character_set_2, 493, lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_stream_operator] = ACTIONS(1),
    [sym_main_operator] = ACTIONS(1),
    [sym_other_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__expression] = STATE(39),
    [sym_binary_expression] = STATE(39),
    [sym_op_expression] = STATE(43),
    [sym_partial_expression] = STATE(44),
    [sym_full_expression] = STATE(42),
    [sym_operator] = STATE(4),
    [sym__primary_expression] = STATE(17),
    [sym_parenthesized_expression] = STATE(17),
    [sym_curly_expression] = STATE(17),
    [sym_apply_expression] = STATE(29),
    [sym_stream_operator] = ACTIONS(3),
    [sym_main_operator] = ACTIONS(5),
    [sym_other_operator] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [2] = {
    [sym__expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(17),
    [sym_main_operator] = ACTIONS(20),
    [sym_other_operator] = ACTIONS(23),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(32),
  },
  [3] = {
    [sym__expression] = STATE(30),
    [sym_binary_expression] = STATE(30),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(36),
    [sym_main_operator] = ACTIONS(39),
    [sym_other_operator] = ACTIONS(42),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(45),
  },
  [4] = {
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_op_expression] = STATE(43),
    [sym_partial_expression] = STATE(44),
    [sym_full_expression] = STATE(42),
    [sym_operator] = STATE(4),
    [sym__primary_expression] = STATE(17),
    [sym_parenthesized_expression] = STATE(17),
    [sym_curly_expression] = STATE(17),
    [sym_apply_expression] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_stream_operator] = ACTIONS(47),
    [sym_main_operator] = ACTIONS(50),
    [sym_other_operator] = ACTIONS(53),
    [sym_number] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [5] = {
    [sym__expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [sym_op_expression] = STATE(43),
    [sym_partial_expression] = STATE(44),
    [sym_full_expression] = STATE(42),
    [sym_operator] = STATE(4),
    [sym__primary_expression] = STATE(17),
    [sym_parenthesized_expression] = STATE(17),
    [sym_curly_expression] = STATE(17),
    [sym_apply_expression] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_stream_operator] = ACTIONS(56),
    [sym_main_operator] = ACTIONS(59),
    [sym_other_operator] = ACTIONS(62),
    [sym_number] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [6] = {
    [sym__expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(65),
    [sym_main_operator] = ACTIONS(67),
    [sym_other_operator] = ACTIONS(69),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(34),
  },
  [7] = {
    [sym__expression] = STATE(35),
    [sym_binary_expression] = STATE(35),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(65),
    [sym_main_operator] = ACTIONS(67),
    [sym_other_operator] = ACTIONS(69),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(34),
  },
  [8] = {
    [sym__expression] = STATE(40),
    [sym_binary_expression] = STATE(40),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(65),
    [sym_main_operator] = ACTIONS(67),
    [sym_other_operator] = ACTIONS(69),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(34),
  },
  [9] = {
    [sym__expression] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_op_expression] = STATE(36),
    [sym_partial_expression] = STATE(37),
    [sym_full_expression] = STATE(38),
    [sym_operator] = STATE(2),
    [sym__primary_expression] = STATE(12),
    [sym_parenthesized_expression] = STATE(12),
    [sym_curly_expression] = STATE(12),
    [sym_apply_expression] = STATE(22),
    [sym_stream_operator] = ACTIONS(65),
    [sym_main_operator] = ACTIONS(67),
    [sym_other_operator] = ACTIONS(69),
    [sym_number] = ACTIONS(26),
    [sym_string] = ACTIONS(28),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(34),
  },
  [10] = {
    [sym__primary_expression] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [sym_curly_expression] = STATE(10),
    [sym_apply_expression] = STATE(10),
    [aux_sym_apply_expression_repeat1] = STATE(11),
    [sym_stream_operator] = ACTIONS(71),
    [sym_main_operator] = ACTIONS(71),
    [sym_other_operator] = ACTIONS(71),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(77),
  },
  [11] = {
    [sym__primary_expression] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [sym_curly_expression] = STATE(10),
    [sym_apply_expression] = STATE(10),
    [aux_sym_apply_expression_repeat1] = STATE(13),
    [sym_stream_operator] = ACTIONS(79),
    [sym_main_operator] = ACTIONS(79),
    [sym_other_operator] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_string] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
  },
  [12] = {
    [sym__primary_expression] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [sym_curly_expression] = STATE(10),
    [sym_apply_expression] = STATE(10),
    [aux_sym_apply_expression_repeat1] = STATE(11),
    [sym_stream_operator] = ACTIONS(83),
    [sym_main_operator] = ACTIONS(83),
    [sym_other_operator] = ACTIONS(83),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(30),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [13] = {
    [sym__primary_expression] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [sym_curly_expression] = STATE(10),
    [sym_apply_expression] = STATE(10),
    [aux_sym_apply_expression_repeat1] = STATE(13),
    [sym_stream_operator] = ACTIONS(87),
    [sym_main_operator] = ACTIONS(87),
    [sym_other_operator] = ACTIONS(87),
    [sym_number] = ACTIONS(89),
    [sym_string] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(98),
  },
  [14] = {
    [sym__primary_expression] = STATE(15),
    [sym_parenthesized_expression] = STATE(15),
    [sym_curly_expression] = STATE(15),
    [sym_apply_expression] = STATE(15),
    [aux_sym_apply_expression_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_stream_operator] = ACTIONS(79),
    [sym_main_operator] = ACTIONS(79),
    [sym_other_operator] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_string] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [15] = {
    [sym__primary_expression] = STATE(15),
    [sym_parenthesized_expression] = STATE(15),
    [sym_curly_expression] = STATE(15),
    [sym_apply_expression] = STATE(15),
    [aux_sym_apply_expression_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_stream_operator] = ACTIONS(71),
    [sym_main_operator] = ACTIONS(71),
    [sym_other_operator] = ACTIONS(71),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [16] = {
    [sym__primary_expression] = STATE(15),
    [sym_parenthesized_expression] = STATE(15),
    [sym_curly_expression] = STATE(15),
    [sym_apply_expression] = STATE(15),
    [aux_sym_apply_expression_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_stream_operator] = ACTIONS(87),
    [sym_main_operator] = ACTIONS(87),
    [sym_other_operator] = ACTIONS(87),
    [sym_number] = ACTIONS(107),
    [sym_string] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(116),
  },
  [17] = {
    [sym__primary_expression] = STATE(15),
    [sym_parenthesized_expression] = STATE(15),
    [sym_curly_expression] = STATE(15),
    [sym_apply_expression] = STATE(15),
    [aux_sym_apply_expression_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_stream_operator] = ACTIONS(83),
    [sym_main_operator] = ACTIONS(83),
    [sym_other_operator] = ACTIONS(83),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
    ACTIONS(121), 5,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [15] = 2,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
    ACTIONS(121), 5,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [30] = 2,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
    ACTIONS(121), 5,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [45] = 2,
    ACTIONS(123), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
    ACTIONS(125), 5,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [60] = 4,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(129), 2,
      sym_string,
      sym_identifier,
    ACTIONS(83), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
    ACTIONS(127), 3,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [79] = 2,
    ACTIONS(131), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
    ACTIONS(133), 5,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [94] = 2,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(131), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
  [108] = 2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(123), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
  [122] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
  [136] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
  [150] = 2,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
    ACTIONS(119), 5,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
      sym_string,
      sym_identifier,
  [164] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 2,
      sym_string,
      sym_identifier,
    ACTIONS(83), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
    ACTIONS(127), 3,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [182] = 5,
    ACTIONS(135), 1,
      sym_stream_operator,
    ACTIONS(138), 1,
      sym_main_operator,
    ACTIONS(141), 1,
      sym_other_operator,
    STATE(3), 1,
      sym_operator,
    ACTIONS(144), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [199] = 5,
    ACTIONS(146), 1,
      sym_stream_operator,
    ACTIONS(149), 1,
      sym_main_operator,
    ACTIONS(152), 1,
      sym_other_operator,
    STATE(3), 1,
      sym_operator,
    ACTIONS(155), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [216] = 5,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_stream_operator,
    ACTIONS(160), 1,
      sym_main_operator,
    ACTIONS(163), 1,
      sym_other_operator,
    STATE(5), 1,
      sym_operator,
  [232] = 5,
    ACTIONS(65), 1,
      sym_stream_operator,
    ACTIONS(67), 1,
      sym_main_operator,
    ACTIONS(69), 1,
      sym_other_operator,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_operator,
  [248] = 5,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      sym_stream_operator,
    ACTIONS(171), 1,
      sym_main_operator,
    ACTIONS(174), 1,
      sym_other_operator,
    STATE(5), 1,
      sym_operator,
  [264] = 5,
    ACTIONS(65), 1,
      sym_stream_operator,
    ACTIONS(67), 1,
      sym_main_operator,
    ACTIONS(69), 1,
      sym_other_operator,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_operator,
  [280] = 2,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [290] = 2,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [300] = 2,
    ACTIONS(181), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [310] = 5,
    ACTIONS(3), 1,
      sym_stream_operator,
    ACTIONS(5), 1,
      sym_main_operator,
    ACTIONS(7), 1,
      sym_other_operator,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_operator,
  [326] = 5,
    ACTIONS(65), 1,
      sym_stream_operator,
    ACTIONS(67), 1,
      sym_main_operator,
    ACTIONS(69), 1,
      sym_other_operator,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_operator,
  [342] = 5,
    ACTIONS(65), 1,
      sym_stream_operator,
    ACTIONS(67), 1,
      sym_main_operator,
    ACTIONS(69), 1,
      sym_other_operator,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_operator,
  [358] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [367] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [376] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      sym_stream_operator,
      sym_main_operator,
      sym_other_operator,
  [385] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 15,
  [SMALL_STATE(20)] = 30,
  [SMALL_STATE(21)] = 45,
  [SMALL_STATE(22)] = 60,
  [SMALL_STATE(23)] = 79,
  [SMALL_STATE(24)] = 94,
  [SMALL_STATE(25)] = 108,
  [SMALL_STATE(26)] = 122,
  [SMALL_STATE(27)] = 136,
  [SMALL_STATE(28)] = 150,
  [SMALL_STATE(29)] = 164,
  [SMALL_STATE(30)] = 182,
  [SMALL_STATE(31)] = 199,
  [SMALL_STATE(32)] = 216,
  [SMALL_STATE(33)] = 232,
  [SMALL_STATE(34)] = 248,
  [SMALL_STATE(35)] = 264,
  [SMALL_STATE(36)] = 280,
  [SMALL_STATE(37)] = 290,
  [SMALL_STATE(38)] = 300,
  [SMALL_STATE(39)] = 310,
  [SMALL_STATE(40)] = 326,
  [SMALL_STATE(41)] = 342,
  [SMALL_STATE(42)] = 358,
  [SMALL_STATE(43)] = 367,
  [SMALL_STATE(44)] = 376,
  [SMALL_STATE(45)] = 385,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(18),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(20),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op_expression, 1, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(20),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression, 2, 0, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(26),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(27),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_op_expression, 1, 0, 1), SHIFT(28),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(26),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(27),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 2), SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_expression_repeat1, 1, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 1, 0, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 2, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 2, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(10),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(10),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(15),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(15),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(7),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2, 0, 5), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_expression, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_expression, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_expression, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_expression, 3, 0, 0),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(18),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(20),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expression, 3, 0, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(18),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(20),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression, 2, 0, 1),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(26),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(27),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_partial_expression, 2, 0, 1), SHIFT(28),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(26),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(27),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_full_expression, 3, 0, 2), SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
