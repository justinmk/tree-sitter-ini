#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_document_token1 = 1,
  anon_sym_LBRACK = 2,
  aux_sym_section_name_token1 = 3,
  anon_sym_RBRACK = 4,
  anon_sym_EQ = 5,
  sym_setting_name = 6,
  sym_setting_value = 7,
  sym_comment = 8,
  sym_document = 9,
  sym_section_name = 10,
  sym_setting = 11,
  aux_sym_document_repeat1 = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym_section_name_token1] = "section_name_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_setting_name] = "setting_name",
  [sym_setting_value] = "setting_value",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_section_name] = "section_name",
  [sym_setting] = "setting",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_setting_name] = sym_setting_name,
  [sym_setting_value] = sym_setting_value,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_section_name] = sym_section_name,
  [sym_setting] = sym_setting,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_setting_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_setting_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(10),
    [sym_section_name] = STATE(4),
    [sym_setting] = STATE(4),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_setting_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_section_name] = STATE(4),
    [sym_setting] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_setting_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_section_name] = STATE(4),
    [sym_setting] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_setting_name] = ACTIONS(20),
    [sym_comment] = ACTIONS(23),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(28), 1,
      aux_sym_document_token1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_setting_name,
      sym_comment,
  [10] = 1,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK,
      sym_setting_name,
      sym_comment,
  [18] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK,
      sym_setting_name,
      sym_comment,
  [26] = 1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_setting_name,
      sym_comment,
  [33] = 2,
    ACTIONS(34), 1,
      aux_sym_section_name_token1,
    ACTIONS(36), 1,
      sym_comment,
  [40] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_EQ,
  [47] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [54] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
  [61] = 2,
    ACTIONS(36), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_setting_value,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 40,
  [SMALL_STATE(10)] = 47,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 61,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
