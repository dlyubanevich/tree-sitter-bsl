#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ = 6,
  anon_sym_SLASH_SLASH = 7,
  aux_sym_line_comment_token1 = 8,
  aux_sym__procedure_keyword_token1 = 9,
  aux_sym__procedure_keyword_token2 = 10,
  aux_sym__function_keyword_token1 = 11,
  aux_sym__function_keyword_token2 = 12,
  aux_sym__endprocedure_keyword_token1 = 13,
  aux_sym__endprocedure_keyword_token2 = 14,
  aux_sym__endfunction_keyword_token1 = 15,
  aux_sym__endfunction_keyword_token2 = 16,
  aux_sym__var_keyword_token1 = 17,
  aux_sym__var_keyword_token2 = 18,
  aux_sym__return_keyword_token1 = 19,
  aux_sym__return_keyword_token2 = 20,
  aux_sym_val_keyword_token1 = 21,
  aux_sym_val_keyword_token2 = 22,
  aux_sym_true_token1 = 23,
  aux_sym_true_token2 = 24,
  aux_sym_false_token1 = 25,
  aux_sym_false_token2 = 26,
  aux_sym_undefined_token1 = 27,
  aux_sym_undefined_token2 = 28,
  aux_sym_export_modifier_token1 = 29,
  aux_sym_export_modifier_token2 = 30,
  sym_number = 31,
  anon_sym_DQUOTE = 32,
  anon_sym_DOT_STAR = 33,
  sym_source_file = 34,
  sym__definition = 35,
  sym__method_definition = 36,
  sym_var_definition = 37,
  sym_procedure_definition = 38,
  sym_function_definition = 39,
  sym_parameters = 40,
  sym_parameter = 41,
  sym_def_value = 42,
  sym_body = 43,
  sym__statement = 44,
  sym_return_statement = 45,
  sym__expression = 46,
  sym_line_comment = 47,
  sym__procedure_keyword = 48,
  sym__function_keyword = 49,
  sym__endprocedure_keyword = 50,
  sym__endfunction_keyword = 51,
  sym__var_keyword = 52,
  sym__return_keyword = 53,
  sym_val_keyword = 54,
  sym_true = 55,
  sym_false = 56,
  sym_undefined = 57,
  sym_export_modifier = 58,
  sym_string = 59,
  sym_boolean = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_var_definition_repeat1 = 62,
  aux_sym_parameters_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym__procedure_keyword_token1] = "_procedure_keyword_token1",
  [aux_sym__procedure_keyword_token2] = "_procedure_keyword_token2",
  [aux_sym__function_keyword_token1] = "_function_keyword_token1",
  [aux_sym__function_keyword_token2] = "_function_keyword_token2",
  [aux_sym__endprocedure_keyword_token1] = "_endprocedure_keyword_token1",
  [aux_sym__endprocedure_keyword_token2] = "_endprocedure_keyword_token2",
  [aux_sym__endfunction_keyword_token1] = "_endfunction_keyword_token1",
  [aux_sym__endfunction_keyword_token2] = "_endfunction_keyword_token2",
  [aux_sym__var_keyword_token1] = "_var_keyword_token1",
  [aux_sym__var_keyword_token2] = "_var_keyword_token2",
  [aux_sym__return_keyword_token1] = "_return_keyword_token1",
  [aux_sym__return_keyword_token2] = "_return_keyword_token2",
  [aux_sym_val_keyword_token1] = "val_keyword_token1",
  [aux_sym_val_keyword_token2] = "val_keyword_token2",
  [aux_sym_true_token1] = "true_token1",
  [aux_sym_true_token2] = "true_token2",
  [aux_sym_false_token1] = "false_token1",
  [aux_sym_false_token2] = "false_token2",
  [aux_sym_undefined_token1] = "undefined_token1",
  [aux_sym_undefined_token2] = "undefined_token2",
  [aux_sym_export_modifier_token1] = "export_modifier_token1",
  [aux_sym_export_modifier_token2] = "export_modifier_token2",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOT_STAR] = ".*",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__method_definition] = "_method_definition",
  [sym_var_definition] = "var_definition",
  [sym_procedure_definition] = "procedure_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_def_value] = "def_value",
  [sym_body] = "body",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_line_comment] = "line_comment",
  [sym__procedure_keyword] = "_procedure_keyword",
  [sym__function_keyword] = "_function_keyword",
  [sym__endprocedure_keyword] = "_endprocedure_keyword",
  [sym__endfunction_keyword] = "_endfunction_keyword",
  [sym__var_keyword] = "_var_keyword",
  [sym__return_keyword] = "_return_keyword",
  [sym_val_keyword] = "val_keyword",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_undefined] = "undefined",
  [sym_export_modifier] = "export_modifier",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_var_definition_repeat1] = "var_definition_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym__procedure_keyword_token1] = aux_sym__procedure_keyword_token1,
  [aux_sym__procedure_keyword_token2] = aux_sym__procedure_keyword_token2,
  [aux_sym__function_keyword_token1] = aux_sym__function_keyword_token1,
  [aux_sym__function_keyword_token2] = aux_sym__function_keyword_token2,
  [aux_sym__endprocedure_keyword_token1] = aux_sym__endprocedure_keyword_token1,
  [aux_sym__endprocedure_keyword_token2] = aux_sym__endprocedure_keyword_token2,
  [aux_sym__endfunction_keyword_token1] = aux_sym__endfunction_keyword_token1,
  [aux_sym__endfunction_keyword_token2] = aux_sym__endfunction_keyword_token2,
  [aux_sym__var_keyword_token1] = aux_sym__var_keyword_token1,
  [aux_sym__var_keyword_token2] = aux_sym__var_keyword_token2,
  [aux_sym__return_keyword_token1] = aux_sym__return_keyword_token1,
  [aux_sym__return_keyword_token2] = aux_sym__return_keyword_token2,
  [aux_sym_val_keyword_token1] = aux_sym_val_keyword_token1,
  [aux_sym_val_keyword_token2] = aux_sym_val_keyword_token2,
  [aux_sym_true_token1] = aux_sym_true_token1,
  [aux_sym_true_token2] = aux_sym_true_token2,
  [aux_sym_false_token1] = aux_sym_false_token1,
  [aux_sym_false_token2] = aux_sym_false_token2,
  [aux_sym_undefined_token1] = aux_sym_undefined_token1,
  [aux_sym_undefined_token2] = aux_sym_undefined_token2,
  [aux_sym_export_modifier_token1] = aux_sym_export_modifier_token1,
  [aux_sym_export_modifier_token2] = aux_sym_export_modifier_token2,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__method_definition] = sym__method_definition,
  [sym_var_definition] = sym_var_definition,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_def_value] = sym_def_value,
  [sym_body] = sym_body,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_line_comment] = sym_line_comment,
  [sym__procedure_keyword] = sym__procedure_keyword,
  [sym__function_keyword] = sym__function_keyword,
  [sym__endprocedure_keyword] = sym__endprocedure_keyword,
  [sym__endfunction_keyword] = sym__endfunction_keyword,
  [sym__var_keyword] = sym__var_keyword,
  [sym__return_keyword] = sym__return_keyword,
  [sym_val_keyword] = sym_val_keyword,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_undefined] = sym_undefined,
  [sym_export_modifier] = sym_export_modifier,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_var_definition_repeat1] = aux_sym_var_definition_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__procedure_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__procedure_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__function_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__endprocedure_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__endprocedure_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__endfunction_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__endfunction_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__return_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__return_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_val_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_val_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_true_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_true_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_false_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_false_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_undefined_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_undefined_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_modifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_modifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__method_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_var_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_def_value] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__function_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__endprocedure_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__endfunction_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__var_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym__return_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_val_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [sym_export_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_val, 0},
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
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
  [76] = 76,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '"', 22,
        '(', 11,
        ')', 12,
        ',', 9,
        '.', 1,
        '/', 3,
        ';', 10,
        '=', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(19);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
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
      ADVANCE_MAP(
        0x412, 1,
        0x417, 2,
        0x418, 3,
        0x41a, 4,
        0x41b, 5,
        0x41d, 6,
        0x41f, 7,
        0x424, 8,
        0x42d, 9,
        'E', 10,
        'e', 10,
        'F', 11,
        'f', 11,
        'P', 12,
        'p', 12,
        'R', 13,
        'r', 13,
        'T', 14,
        't', 14,
        'U', 15,
        'u', 15,
        'V', 16,
        'v', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 0x43e) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 0x43d) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 0x441) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 0x43e) ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 0x43e) ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 0x435) ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 0x435) ADVANCE(23);
      if (lookahead == 0x440) ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 0x443) ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 0x43a) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 0x437) ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 0x430) ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 0x442) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 0x43d) ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 0x436) ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 0x43e) ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 0x440) ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 0x43e) ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 0x43d) ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 0x441) ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 0x432) ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 0x447) ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 0x438) ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 0x435) ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 0x44c) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 0x43f) ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 0x435) ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 0x446) ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 0x43a) ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 0x43f) ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_val_keyword_token2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__var_keyword_token2);
      END_STATE();
    case 56:
      if (lookahead == 0x440) ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_val_keyword_token1);
      END_STATE();
    case 58:
      if (lookahead == 0x43d) ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 0x446) ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_false_token1);
      END_STATE();
    case 61:
      if (lookahead == 0x440) ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 0x43c) ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 0x435) ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 0x446) ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 0x43e) ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_true_token2);
      END_STATE();
    case 74:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 0x430) ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 0x430) ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 0x41f) ADVANCE(93);
      if (lookahead == 0x424) ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 0x435) ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__var_keyword_token1);
      END_STATE();
    case 80:
      if (lookahead == 0x434) ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 0x438) ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == 0x440) ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_false_token2);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 0x442) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_true_token1);
      END_STATE();
    case 93:
      if (lookahead == 0x440) ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 0x443) ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 0x434) ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 0x443) ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 0x44f) ADVANCE(111);
      END_STATE();
    case 98:
      if (lookahead == 0x442) ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_export_modifier_token2);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__return_keyword_token2);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__return_keyword_token1);
      END_STATE();
    case 107:
      if (lookahead == 0x43e) ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 0x43d) ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 0x435) ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 0x440) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__function_keyword_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_export_modifier_token1);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 0x446) ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 0x43a) ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 0x43b) ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 0x430) ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__function_keyword_token2);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_undefined_token2);
      END_STATE();
    case 127:
      if (lookahead == 0x435) ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 0x446) ADVANCE(135);
      END_STATE();
    case 129:
      if (lookahead == 0x435) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__procedure_keyword_token1);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__procedure_keyword_token2);
      END_STATE();
    case 134:
      if (lookahead == 0x434) ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == 0x438) ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == 0x43d) ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 139:
      if (lookahead == 0x443) ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 0x438) ADVANCE(145);
      END_STATE();
    case 141:
      if (lookahead == 0x43e) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__endfunction_keyword_token2);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 144:
      if (lookahead == 0x440) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__endfunction_keyword_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_undefined_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__endprocedure_keyword_token2);
      END_STATE();
    case 148:
      if (lookahead == 0x44b) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__endprocedure_keyword_token1);
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym__procedure_keyword_token1] = ACTIONS(1),
    [aux_sym__procedure_keyword_token2] = ACTIONS(1),
    [aux_sym__function_keyword_token1] = ACTIONS(1),
    [aux_sym__function_keyword_token2] = ACTIONS(1),
    [aux_sym__endprocedure_keyword_token1] = ACTIONS(1),
    [aux_sym__endprocedure_keyword_token2] = ACTIONS(1),
    [aux_sym__endfunction_keyword_token1] = ACTIONS(1),
    [aux_sym__endfunction_keyword_token2] = ACTIONS(1),
    [aux_sym__var_keyword_token1] = ACTIONS(1),
    [aux_sym__var_keyword_token2] = ACTIONS(1),
    [aux_sym__return_keyword_token1] = ACTIONS(1),
    [aux_sym__return_keyword_token2] = ACTIONS(1),
    [aux_sym_val_keyword_token1] = ACTIONS(1),
    [aux_sym_val_keyword_token2] = ACTIONS(1),
    [aux_sym_true_token1] = ACTIONS(1),
    [aux_sym_true_token2] = ACTIONS(1),
    [aux_sym_false_token1] = ACTIONS(1),
    [aux_sym_false_token2] = ACTIONS(1),
    [aux_sym_undefined_token1] = ACTIONS(1),
    [aux_sym_undefined_token2] = ACTIONS(1),
    [aux_sym_export_modifier_token1] = ACTIONS(1),
    [aux_sym_export_modifier_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__definition] = STATE(21),
    [sym__method_definition] = STATE(20),
    [sym_var_definition] = STATE(20),
    [sym_procedure_definition] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_line_comment] = STATE(1),
    [sym__procedure_keyword] = STATE(63),
    [sym__function_keyword] = STATE(66),
    [sym__var_keyword] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym__procedure_keyword_token1] = ACTIONS(7),
    [aux_sym__procedure_keyword_token2] = ACTIONS(7),
    [aux_sym__function_keyword_token1] = ACTIONS(9),
    [aux_sym__function_keyword_token2] = ACTIONS(9),
    [aux_sym__var_keyword_token1] = ACTIONS(11),
    [aux_sym__var_keyword_token2] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      sym__definition,
    STATE(63), 1,
      sym__procedure_keyword,
    STATE(64), 1,
      sym__var_keyword,
    STATE(66), 1,
      sym__function_keyword,
    ACTIONS(7), 2,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
    ACTIONS(9), 2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
    ACTIONS(11), 2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
    STATE(13), 2,
      sym_procedure_definition,
      sym_function_definition,
    STATE(20), 2,
      sym__method_definition,
      sym_var_definition,
  [45] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym__definition,
    STATE(63), 1,
      sym__procedure_keyword,
    STATE(64), 1,
      sym__var_keyword,
    STATE(66), 1,
      sym__function_keyword,
    ACTIONS(17), 2,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
    ACTIONS(20), 2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
    ACTIONS(23), 2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
    STATE(3), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_procedure_definition,
      sym_function_definition,
    STATE(20), 2,
      sym__method_definition,
      sym_var_definition,
  [88] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      sym_number,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_line_comment,
    ACTIONS(26), 2,
      aux_sym_true_token1,
      aux_sym_true_token2,
    ACTIONS(28), 2,
      aux_sym_false_token1,
      aux_sym_false_token2,
    ACTIONS(30), 2,
      aux_sym_undefined_token1,
      aux_sym_undefined_token2,
    STATE(54), 2,
      sym_true,
      sym_false,
    STATE(55), 3,
      sym_undefined,
      sym_string,
      sym_boolean,
  [122] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(5), 1,
      sym_line_comment,
    STATE(8), 1,
      sym_export_modifier,
    STATE(14), 1,
      sym__endfunction_keyword,
    STATE(19), 1,
      sym__return_keyword,
    STATE(36), 1,
      sym__statement,
    STATE(38), 1,
      sym_return_statement,
    STATE(44), 1,
      sym_body,
    ACTIONS(36), 2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
    ACTIONS(38), 2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
    ACTIONS(40), 2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [159] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(6), 1,
      sym_line_comment,
    STATE(7), 1,
      sym_export_modifier,
    STATE(17), 1,
      sym__endprocedure_keyword,
    STATE(19), 1,
      sym__return_keyword,
    STATE(36), 1,
      sym__statement,
    STATE(38), 1,
      sym_return_statement,
    STATE(45), 1,
      sym_body,
    ACTIONS(38), 2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
    ACTIONS(40), 2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
    ACTIONS(42), 2,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
  [196] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_line_comment,
    STATE(15), 1,
      sym__endprocedure_keyword,
    STATE(19), 1,
      sym__return_keyword,
    STATE(36), 1,
      sym__statement,
    STATE(38), 1,
      sym_return_statement,
    STATE(50), 1,
      sym_body,
    ACTIONS(38), 2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
    ACTIONS(42), 2,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
  [226] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_line_comment,
    STATE(19), 1,
      sym__return_keyword,
    STATE(25), 1,
      sym__endfunction_keyword,
    STATE(36), 1,
      sym__statement,
    STATE(38), 1,
      sym_return_statement,
    STATE(51), 1,
      sym_body,
    ACTIONS(36), 2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
    ACTIONS(38), 2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
  [256] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(44), 8,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [273] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(46), 8,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [290] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_line_comment,
    STATE(48), 1,
      sym_parameter,
    STATE(49), 1,
      aux_sym_parameters_repeat1,
    STATE(76), 1,
      sym_val_keyword,
    ACTIONS(54), 2,
      aux_sym_val_keyword_token1,
      aux_sym_val_keyword_token2,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(56), 8,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [336] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [352] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [368] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [384] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [400] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [416] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [432] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      sym_number,
    STATE(19), 1,
      sym_line_comment,
    STATE(33), 1,
      sym_undefined,
    STATE(39), 1,
      sym__expression,
    ACTIONS(74), 2,
      aux_sym_undefined_token1,
      aux_sym_undefined_token2,
  [458] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [474] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [490] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [506] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [522] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(86), 7,
      anon_sym_SEMI,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
      aux_sym__return_keyword_token1,
      aux_sym__return_keyword_token2,
  [538] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [554] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [570] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(27), 1,
      sym_line_comment,
    STATE(56), 1,
      sym_parameter,
    STATE(76), 1,
      sym_val_keyword,
    ACTIONS(54), 2,
      aux_sym_val_keyword_token1,
      aux_sym_val_keyword_token2,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [594] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [610] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_line_comment,
    ACTIONS(96), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      aux_sym__procedure_keyword_token1,
      aux_sym__procedure_keyword_token2,
      aux_sym__function_keyword_token1,
      aux_sym__function_keyword_token2,
      aux_sym__var_keyword_token1,
      aux_sym__var_keyword_token2,
  [642] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_line_comment,
    STATE(34), 1,
      aux_sym_var_definition_repeat1,
    STATE(71), 1,
      sym_export_modifier,
    ACTIONS(40), 2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [665] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      aux_sym_var_definition_repeat1,
    STATE(32), 1,
      sym_line_comment,
    STATE(62), 1,
      sym_export_modifier,
    ACTIONS(40), 2,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(108), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [704] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(34), 2,
      sym_line_comment,
      aux_sym_var_definition_repeat1,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_SEMI,
      sym_number,
    ACTIONS(115), 3,
      aux_sym_undefined_token1,
      aux_sym_undefined_token2,
      sym_identifier,
  [736] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(119), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [749] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_line_comment,
    STATE(58), 1,
      sym_def_value,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [766] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(125), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [779] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(127), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [792] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(127), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [805] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(129), 4,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_EQ,
    STATE(42), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_def_value,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [835] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(113), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_export_modifier_token1,
      aux_sym_export_modifier_token2,
  [848] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym__endfunction_keyword,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(36), 2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym__endprocedure_keyword,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(42), 2,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
  [876] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_line_comment,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(47), 2,
      sym_line_comment,
      aux_sym_parameters_repeat1,
  [906] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_parameters_repeat1,
    STATE(48), 1,
      sym_line_comment,
  [922] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
    STATE(49), 1,
      sym_line_comment,
  [938] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym__endprocedure_keyword,
    STATE(50), 1,
      sym_line_comment,
    ACTIONS(42), 2,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endprocedure_keyword_token2,
  [952] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym__endfunction_keyword,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(36), 2,
      aux_sym__endfunction_keyword_token1,
      aux_sym__endfunction_keyword_token2,
  [966] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [977] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [988] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [999] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1010] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_parameters,
    STATE(57), 1,
      sym_line_comment,
  [1034] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_line_comment,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_parameters,
    STATE(59), 1,
      sym_line_comment,
  [1058] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_line_comment,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1069] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1080] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_line_comment,
  [1090] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(63), 1,
      sym_line_comment,
  [1100] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(64), 1,
      sym_line_comment,
  [1110] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_line_comment,
  [1120] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(66), 1,
      sym_line_comment,
  [1130] = 3,
    ACTIONS(166), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      aux_sym_line_comment_token1,
    STATE(67), 1,
      sym_line_comment,
  [1140] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(170), 1,
      anon_sym_DOT_STAR,
    STATE(68), 1,
      sym_line_comment,
  [1150] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(69), 1,
      sym_line_comment,
  [1160] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(70), 1,
      sym_line_comment,
  [1170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_line_comment,
  [1180] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(72), 1,
      sym_line_comment,
  [1190] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(73), 1,
      sym_line_comment,
  [1200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(74), 1,
      sym_line_comment,
  [1210] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_line_comment,
  [1220] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(76), 1,
      sym_line_comment,
  [1230] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 319,
  [SMALL_STATE(13)] = 336,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 400,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 490,
  [SMALL_STATE(23)] = 506,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 538,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 594,
  [SMALL_STATE(29)] = 610,
  [SMALL_STATE(30)] = 626,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 665,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 704,
  [SMALL_STATE(35)] = 720,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 779,
  [SMALL_STATE(40)] = 792,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 818,
  [SMALL_STATE(43)] = 835,
  [SMALL_STATE(44)] = 848,
  [SMALL_STATE(45)] = 862,
  [SMALL_STATE(46)] = 876,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 906,
  [SMALL_STATE(49)] = 922,
  [SMALL_STATE(50)] = 938,
  [SMALL_STATE(51)] = 952,
  [SMALL_STATE(52)] = 966,
  [SMALL_STATE(53)] = 977,
  [SMALL_STATE(54)] = 988,
  [SMALL_STATE(55)] = 999,
  [SMALL_STATE(56)] = 1010,
  [SMALL_STATE(57)] = 1021,
  [SMALL_STATE(58)] = 1034,
  [SMALL_STATE(59)] = 1045,
  [SMALL_STATE(60)] = 1058,
  [SMALL_STATE(61)] = 1069,
  [SMALL_STATE(62)] = 1080,
  [SMALL_STATE(63)] = 1090,
  [SMALL_STATE(64)] = 1100,
  [SMALL_STATE(65)] = 1110,
  [SMALL_STATE(66)] = 1120,
  [SMALL_STATE(67)] = 1130,
  [SMALL_STATE(68)] = 1140,
  [SMALL_STATE(69)] = 1150,
  [SMALL_STATE(70)] = 1160,
  [SMALL_STATE(71)] = 1170,
  [SMALL_STATE(72)] = 1180,
  [SMALL_STATE(73)] = 1190,
  [SMALL_STATE(74)] = 1200,
  [SMALL_STATE(75)] = 1210,
  [SMALL_STATE(76)] = 1220,
  [SMALL_STATE(77)] = 1230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_definition, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 5, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endprocedure_keyword, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_modifier, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 6, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefined, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endfunction_keyword, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_definition_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__return_keyword, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_keyword, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_value, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_keyword, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_keyword, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_keyword, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_keyword, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_bsl(void) {
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
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
