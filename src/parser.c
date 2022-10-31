#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_document_token1 = 1,
  aux_sym_section_token1 = 2,
  anon_sym_LBRACK = 3,
  aux_sym_section_name_token1 = 4,
  anon_sym_RBRACK = 5,
  anon_sym_EQ = 6,
  sym_setting_name = 7,
  sym_setting_value = 8,
  sym_comment = 9,
  sym_document = 10,
  sym_section = 11,
  sym_section_name = 12,
  sym_setting = 13,
  aux_sym_document_repeat1 = 14,
  aux_sym_section_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_section_token1] = "section_token1",
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

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_section_token1] = aux_sym_section_token1,
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
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_token1] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(19);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_section_token1);
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_setting_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_setting_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(9),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_section_name,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
  [17] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_section_name,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [34] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_setting_name,
    STATE(6), 1,
      aux_sym_section_repeat1,
    STATE(15), 1,
      sym_setting,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [51] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_section_name,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [68] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_setting_name,
    STATE(7), 1,
      aux_sym_section_repeat1,
    STATE(15), 1,
      sym_setting,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [85] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_setting_name,
    STATE(7), 1,
      aux_sym_section_repeat1,
    STATE(15), 1,
      sym_setting,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_setting_name,
  [111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [118] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_section_name_token1,
  [125] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_section_token1,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
  [139] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(39), 1,
      aux_sym_section_token1,
  [146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_EQ,
  [153] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_section_token1,
  [160] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_setting_value,
  [167] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_section_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 167,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ini(void) {
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
