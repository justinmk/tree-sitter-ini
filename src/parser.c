#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACK = 2,
  aux_sym_section_name_token1 = 3,
  anon_sym_RBRACK = 4,
  anon_sym_EQ = 5,
  sym_setting_name = 6,
  sym_setting_value = 7,
  sym_comment = 8,
  sym_document = 9,
  sym_section = 10,
  sym_section_name = 11,
  sym_setting = 12,
  aux_sym_document_repeat1 = 13,
  aux_sym_section_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "section_name_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_setting_name] = "setting_name",
  [sym_setting_value] = "setting_value",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_section_name] = "section_name",
  [sym_setting] = "setting",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_setting_name] = sym_setting_name,
  [sym_setting_value] = sym_setting_value,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_section_name] = sym_section_name,
  [sym_setting] = sym_setting,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_setting_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(19);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_setting_name);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_setting_name);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_setting_name);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(9),
    [sym_section] = STATE(2),
    [sym_section_name] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_section_name,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
  [17] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_setting_name,
    ACTIONS(17), 1,
      sym_comment,
    STATE(5), 2,
      sym_setting,
      aux_sym_section_repeat1,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_section_name,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
  [51] = 5,
    ACTIONS(15), 1,
      sym_setting_name,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_setting,
      aux_sym_section_repeat1,
  [68] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym_setting_name,
    STATE(6), 2,
      sym_setting,
      aux_sym_section_repeat1,
  [85] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 2,
      anon_sym_LBRACK,
      sym_setting_name,
  [96] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_section_name_token1,
  [103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [110] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LF,
  [117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
  [124] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LF,
  [131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_EQ,
  [138] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_setting_value,
  [145] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 117,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 145,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ini(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
