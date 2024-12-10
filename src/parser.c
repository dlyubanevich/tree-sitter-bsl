#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 14
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
  aux_sym__perem_token1 = 9,
  aux_sym__perem_token2 = 10,
  anon_sym_u041f = 11,
  anon_sym_u043f = 12,
  anon_sym_u0420 = 13,
  anon_sym_u0440 = 14,
  anon_sym_u041e = 15,
  anon_sym_u043e = 16,
  anon_sym_u0426 = 17,
  anon_sym_u0446 = 18,
  anon_sym_u0415 = 19,
  anon_sym_u0435 = 20,
  anon_sym_u0414 = 21,
  anon_sym_u0434 = 22,
  anon_sym_u0423 = 23,
  anon_sym_u0443 = 24,
  anon_sym_u0410 = 25,
  anon_sym_u0430 = 26,
  aux_sym__procedure_keyword_token1 = 27,
  anon_sym_u0424 = 28,
  anon_sym_u0444 = 29,
  anon_sym_u041d = 30,
  anon_sym_u043d = 31,
  anon_sym_u041a = 32,
  anon_sym_u043a = 33,
  anon_sym_u0418 = 34,
  anon_sym_u0438 = 35,
  anon_sym_u042f = 36,
  anon_sym_u044f = 37,
  aux_sym__function_keyword_token1 = 38,
  anon_sym_u042b = 39,
  anon_sym_u044b = 40,
  aux_sym__endprocedure_keyword_token1 = 41,
  aux_sym__endfunction_keyword_token1 = 42,
  anon_sym_u0412 = 43,
  anon_sym_u0432 = 44,
  anon_sym_u0417 = 45,
  anon_sym_u0437 = 46,
  anon_sym_u0422 = 47,
  anon_sym_u0442 = 48,
  aux_sym__return_keyword_token1 = 49,
  anon_sym_u0427 = 50,
  anon_sym_u0447 = 51,
  aux_sym_val_keyword_token1 = 52,
  anon_sym_u0421 = 53,
  anon_sym_u0441 = 54,
  aux_sym_true_token1 = 55,
  anon_sym_u041b = 56,
  anon_sym_u043b = 57,
  anon_sym_u0416 = 58,
  anon_sym_u0436 = 59,
  anon_sym_u042c = 60,
  anon_sym_u044c = 61,
  aux_sym_false_token1 = 62,
  aux_sym_undefined_token1 = 63,
  anon_sym_u042d = 64,
  anon_sym_u044d = 65,
  aux_sym_export_modifier_token1 = 66,
  sym_number = 67,
  anon_sym_DQUOTE = 68,
  anon_sym_DOT_STAR = 69,
  sym_source_file = 70,
  sym__definition = 71,
  sym__method_definition = 72,
  sym_var_definition = 73,
  sym_procedure_definition = 74,
  sym_function_definition = 75,
  sym_parameters = 76,
  sym_parameter = 77,
  sym_def_value = 78,
  sym_body = 79,
  sym__statement = 80,
  sym_return_statement = 81,
  sym__expression = 82,
  sym_line_comment = 83,
  sym__perem = 84,
  sym__procedure_keyword = 85,
  sym__function_keyword = 86,
  sym__endprocedure_keyword = 87,
  sym__endfunction_keyword = 88,
  sym__return_keyword = 89,
  sym_val_keyword = 90,
  sym_true = 91,
  sym_false = 92,
  sym_undefined = 93,
  sym_export_modifier = 94,
  sym_string = 95,
  sym_boolean = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_var_definition_repeat1 = 98,
  aux_sym_parameters_repeat1 = 99,
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
  [aux_sym__perem_token1] = "_perem_token1",
  [aux_sym__perem_token2] = "_perem_token2",
  [anon_sym_u041f] = "\u041f",
  [anon_sym_u043f] = "\u043f",
  [anon_sym_u0420] = "\u0420",
  [anon_sym_u0440] = "\u0440",
  [anon_sym_u041e] = "\u041e",
  [anon_sym_u043e] = "\u043e",
  [anon_sym_u0426] = "\u0426",
  [anon_sym_u0446] = "\u0446",
  [anon_sym_u0415] = "\u0415",
  [anon_sym_u0435] = "\u0435",
  [anon_sym_u0414] = "\u0414",
  [anon_sym_u0434] = "\u0434",
  [anon_sym_u0423] = "\u0423",
  [anon_sym_u0443] = "\u0443",
  [anon_sym_u0410] = "\u0410",
  [anon_sym_u0430] = "\u0430",
  [aux_sym__procedure_keyword_token1] = "_procedure_keyword_token1",
  [anon_sym_u0424] = "\u0424",
  [anon_sym_u0444] = "\u0444",
  [anon_sym_u041d] = "\u041d",
  [anon_sym_u043d] = "\u043d",
  [anon_sym_u041a] = "\u041a",
  [anon_sym_u043a] = "\u043a",
  [anon_sym_u0418] = "\u0418",
  [anon_sym_u0438] = "\u0438",
  [anon_sym_u042f] = "\u042f",
  [anon_sym_u044f] = "\u044f",
  [aux_sym__function_keyword_token1] = "_function_keyword_token1",
  [anon_sym_u042b] = "\u042b",
  [anon_sym_u044b] = "\u044b",
  [aux_sym__endprocedure_keyword_token1] = "_endprocedure_keyword_token1",
  [aux_sym__endfunction_keyword_token1] = "_endfunction_keyword_token1",
  [anon_sym_u0412] = "\u0412",
  [anon_sym_u0432] = "\u0432",
  [anon_sym_u0417] = "\u0417",
  [anon_sym_u0437] = "\u0437",
  [anon_sym_u0422] = "\u0422",
  [anon_sym_u0442] = "\u0442",
  [aux_sym__return_keyword_token1] = "_return_keyword_token1",
  [anon_sym_u0427] = "\u0427",
  [anon_sym_u0447] = "\u0447",
  [aux_sym_val_keyword_token1] = "val_keyword_token1",
  [anon_sym_u0421] = "\u0421",
  [anon_sym_u0441] = "\u0441",
  [aux_sym_true_token1] = "true_token1",
  [anon_sym_u041b] = "\u041b",
  [anon_sym_u043b] = "\u043b",
  [anon_sym_u0416] = "\u0416",
  [anon_sym_u0436] = "\u0436",
  [anon_sym_u042c] = "\u042c",
  [anon_sym_u044c] = "\u044c",
  [aux_sym_false_token1] = "false_token1",
  [aux_sym_undefined_token1] = "undefined_token1",
  [anon_sym_u042d] = "\u042d",
  [anon_sym_u044d] = "\u044d",
  [aux_sym_export_modifier_token1] = "export_modifier_token1",
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
  [sym__perem] = "_perem",
  [sym__procedure_keyword] = "_procedure_keyword",
  [sym__function_keyword] = "_function_keyword",
  [sym__endprocedure_keyword] = "_endprocedure_keyword",
  [sym__endfunction_keyword] = "_endfunction_keyword",
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
  [aux_sym__perem_token1] = aux_sym__perem_token1,
  [aux_sym__perem_token2] = aux_sym__perem_token2,
  [anon_sym_u041f] = anon_sym_u041f,
  [anon_sym_u043f] = anon_sym_u043f,
  [anon_sym_u0420] = anon_sym_u0420,
  [anon_sym_u0440] = anon_sym_u0440,
  [anon_sym_u041e] = anon_sym_u041e,
  [anon_sym_u043e] = anon_sym_u043e,
  [anon_sym_u0426] = anon_sym_u0426,
  [anon_sym_u0446] = anon_sym_u0446,
  [anon_sym_u0415] = anon_sym_u0415,
  [anon_sym_u0435] = anon_sym_u0435,
  [anon_sym_u0414] = anon_sym_u0414,
  [anon_sym_u0434] = anon_sym_u0434,
  [anon_sym_u0423] = anon_sym_u0423,
  [anon_sym_u0443] = anon_sym_u0443,
  [anon_sym_u0410] = anon_sym_u0410,
  [anon_sym_u0430] = anon_sym_u0430,
  [aux_sym__procedure_keyword_token1] = aux_sym__procedure_keyword_token1,
  [anon_sym_u0424] = anon_sym_u0424,
  [anon_sym_u0444] = anon_sym_u0444,
  [anon_sym_u041d] = anon_sym_u041d,
  [anon_sym_u043d] = anon_sym_u043d,
  [anon_sym_u041a] = anon_sym_u041a,
  [anon_sym_u043a] = anon_sym_u043a,
  [anon_sym_u0418] = anon_sym_u0418,
  [anon_sym_u0438] = anon_sym_u0438,
  [anon_sym_u042f] = anon_sym_u042f,
  [anon_sym_u044f] = anon_sym_u044f,
  [aux_sym__function_keyword_token1] = aux_sym__function_keyword_token1,
  [anon_sym_u042b] = anon_sym_u042b,
  [anon_sym_u044b] = anon_sym_u044b,
  [aux_sym__endprocedure_keyword_token1] = aux_sym__endprocedure_keyword_token1,
  [aux_sym__endfunction_keyword_token1] = aux_sym__endfunction_keyword_token1,
  [anon_sym_u0412] = anon_sym_u0412,
  [anon_sym_u0432] = anon_sym_u0432,
  [anon_sym_u0417] = anon_sym_u0417,
  [anon_sym_u0437] = anon_sym_u0437,
  [anon_sym_u0422] = anon_sym_u0422,
  [anon_sym_u0442] = anon_sym_u0442,
  [aux_sym__return_keyword_token1] = aux_sym__return_keyword_token1,
  [anon_sym_u0427] = anon_sym_u0427,
  [anon_sym_u0447] = anon_sym_u0447,
  [aux_sym_val_keyword_token1] = aux_sym_val_keyword_token1,
  [anon_sym_u0421] = anon_sym_u0421,
  [anon_sym_u0441] = anon_sym_u0441,
  [aux_sym_true_token1] = aux_sym_true_token1,
  [anon_sym_u041b] = anon_sym_u041b,
  [anon_sym_u043b] = anon_sym_u043b,
  [anon_sym_u0416] = anon_sym_u0416,
  [anon_sym_u0436] = anon_sym_u0436,
  [anon_sym_u042c] = anon_sym_u042c,
  [anon_sym_u044c] = anon_sym_u044c,
  [aux_sym_false_token1] = aux_sym_false_token1,
  [aux_sym_undefined_token1] = aux_sym_undefined_token1,
  [anon_sym_u042d] = anon_sym_u042d,
  [anon_sym_u044d] = anon_sym_u044d,
  [aux_sym_export_modifier_token1] = aux_sym_export_modifier_token1,
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
  [sym__perem] = sym__perem,
  [sym__procedure_keyword] = sym__procedure_keyword,
  [sym__function_keyword] = sym__function_keyword,
  [sym__endprocedure_keyword] = sym__endprocedure_keyword,
  [sym__endfunction_keyword] = sym__endfunction_keyword,
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
  [aux_sym__perem_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__perem_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u041f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u043f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0420] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0440] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u041e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u043e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0426] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0446] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0415] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0435] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0414] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0434] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0423] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0443] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0410] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0430] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__procedure_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u0424] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0444] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u041d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u043d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u041a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u043a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0418] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0438] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u042f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u044f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__function_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u042b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u044b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__endprocedure_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__endfunction_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u0412] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0432] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0417] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0437] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0422] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0442] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__return_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u0427] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0447] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_val_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u0421] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0441] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_true_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u041b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u043b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0416] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0436] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u042c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u044c] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_false_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_undefined_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u042d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u044d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_export_modifier_token1] = {
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
  [sym__perem] = {
    .visible = false,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
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
  [156] = 156,
  [157] = 157,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '"', 258,
        '(', 80,
        ')', 81,
        ',', 78,
        '.', 1,
        '/', 4,
        ';', 79,
        '=', 82,
        0x410, 121,
        0x412, 157,
        0x414, 113,
        0x415, 109,
        0x416, 185,
        0x417, 161,
        0x418, 139,
        0x41a, 135,
        0x41b, 181,
        0x41d, 131,
        0x41e, 101,
        0x41f, 92,
        0x420, 97,
        0x421, 175,
        0x422, 165,
        0x423, 117,
        0x424, 127,
        0x426, 105,
        0x427, 171,
        0x42b, 149,
        0x42c, 189,
        0x42d, 197,
        0x42f, 143,
        0x430, 123,
        0x432, 159,
        0x434, 115,
        0x435, 111,
        0x436, 187,
        0x437, 163,
        0x438, 141,
        0x43a, 137,
        0x43b, 183,
        0x43d, 133,
        0x43e, 103,
        0x43f, 95,
        0x440, 99,
        0x441, 177,
        0x442, 167,
        0x443, 119,
        0x444, 129,
        0x446, 107,
        0x447, 173,
        0x44b, 151,
        0x44c, 191,
        0x44d, 199,
        0x44f, 145,
        'E', 37,
        'e', 37,
        'F', 9,
        'f', 9,
        'P', 53,
        'p', 53,
        'R', 21,
        'r', 21,
        'T', 54,
        't', 54,
        'U', 43,
        'u', 43,
        'V', 10,
        'v', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x411 <= lookahead && lookahead <= 0x44e)) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 0x417) ADVANCE(161);
      if (lookahead == 0x437) ADVANCE(163);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == 0x435) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 0x43c) ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == 0x440) ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 42:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        '"', 258,
        ',', 78,
        '.', 73,
        '/', 4,
        ';', 79,
        0x410, 120,
        0x412, 156,
        0x414, 112,
        0x415, 108,
        0x416, 184,
        0x417, 160,
        0x418, 138,
        0x41a, 134,
        0x41b, 180,
        0x41d, 130,
        0x41e, 100,
        0x41f, 93,
        0x420, 96,
        0x421, 174,
        0x422, 164,
        0x423, 116,
        0x424, 126,
        0x426, 104,
        0x427, 170,
        0x42b, 148,
        0x42c, 188,
        0x42d, 196,
        0x42f, 142,
        0x430, 122,
        0x432, 158,
        0x434, 114,
        0x435, 110,
        0x436, 186,
        0x437, 162,
        0x438, 140,
        0x43a, 136,
        0x43b, 182,
        0x43d, 132,
        0x43e, 102,
        0x43f, 94,
        0x440, 98,
        0x441, 176,
        0x442, 166,
        0x443, 118,
        0x444, 128,
        0x446, 106,
        0x447, 172,
        0x44b, 150,
        0x44c, 190,
        0x44d, 198,
        0x44f, 144,
        'E', 38,
        'e', 38,
        'F', 11,
        'f', 11,
        'P', 55,
        'p', 55,
        'R', 22,
        'r', 22,
        'T', 56,
        't', 56,
        'U', 44,
        'u', 44,
        'V', 12,
        'v', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__perem_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__perem_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__perem_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__perem_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_u041f);
      if (lookahead == 0x435) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_u041f);
      if (lookahead == 0x435) ADVANCE(7);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_u043f);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_u043f);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_u0420);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_u0420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_u0440);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_u0440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_u041e);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_u041e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_u043e);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_u043e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_u0426);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_u0426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u0446);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u0446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u0415);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u0415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u0435);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u0435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u0414);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u0414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u0434);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u0434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u0423);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u0423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u0443);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u0443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u0410);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u0410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u0430);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u0430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__procedure_keyword_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__procedure_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_u0424);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_u0424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_u0444);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_u0444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_u041d);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_u041d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_u043d);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_u043d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_u041a);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_u041a);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_u043a);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_u043a);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_u0418);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_u0418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u0438);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u0438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_u042f);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_u042f);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u044f);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u044f);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__function_keyword_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__function_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u042b);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_u042b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_u044b);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_u044b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__endprocedure_keyword_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__endprocedure_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__endfunction_keyword_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__endfunction_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_u0412);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_u0412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_u0432);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_u0432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_u0417);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_u0417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_u0437);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_u0437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_u0422);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_u0422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u0442);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_u0442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__return_keyword_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__return_keyword_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_u0427);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_u0427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_u0447);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_u0447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_u0421);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_u0421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_u0441);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u0441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_true_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_true_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_u041b);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_u041b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_u043b);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_u043b);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_u0416);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_u0416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_u0436);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_u0436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_u042c);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_u042c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_u044c);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_u044c);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_false_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_false_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_undefined_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_undefined_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_u042d);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_u042d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_u044d);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_u044d);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_export_modifier_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_export_modifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0x435) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0x43c) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0x440) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(254);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x410 <= lookahead && lookahead <= 0x44f)) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 259:
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
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_val_keyword_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 76},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 76},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 76},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 76},
  [112] = {.lex_state = 76},
  [113] = {.lex_state = 76},
  [114] = {.lex_state = 76},
  [115] = {.lex_state = 76},
  [116] = {.lex_state = 76},
  [117] = {.lex_state = 76},
  [118] = {.lex_state = 76},
  [119] = {.lex_state = 76},
  [120] = {.lex_state = 76},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 76},
  [123] = {.lex_state = 76},
  [124] = {.lex_state = 76},
  [125] = {.lex_state = 76},
  [126] = {.lex_state = 76},
  [127] = {.lex_state = 76},
  [128] = {.lex_state = 76},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 76},
  [131] = {.lex_state = 76},
  [132] = {.lex_state = 76},
  [133] = {.lex_state = 76},
  [134] = {.lex_state = 76},
  [135] = {.lex_state = 76},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 76},
  [138] = {.lex_state = 76},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 85},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {(TSStateId)(-1)},
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
    [aux_sym__perem_token1] = ACTIONS(1),
    [aux_sym__perem_token2] = ACTIONS(1),
    [anon_sym_u041f] = ACTIONS(1),
    [anon_sym_u043f] = ACTIONS(1),
    [anon_sym_u0420] = ACTIONS(1),
    [anon_sym_u0440] = ACTIONS(1),
    [anon_sym_u041e] = ACTIONS(1),
    [anon_sym_u043e] = ACTIONS(1),
    [anon_sym_u0426] = ACTIONS(1),
    [anon_sym_u0446] = ACTIONS(1),
    [anon_sym_u0415] = ACTIONS(1),
    [anon_sym_u0435] = ACTIONS(1),
    [anon_sym_u0414] = ACTIONS(1),
    [anon_sym_u0434] = ACTIONS(1),
    [anon_sym_u0423] = ACTIONS(1),
    [anon_sym_u0443] = ACTIONS(1),
    [anon_sym_u0410] = ACTIONS(1),
    [anon_sym_u0430] = ACTIONS(1),
    [aux_sym__procedure_keyword_token1] = ACTIONS(1),
    [anon_sym_u0424] = ACTIONS(1),
    [anon_sym_u0444] = ACTIONS(1),
    [anon_sym_u041d] = ACTIONS(1),
    [anon_sym_u043d] = ACTIONS(1),
    [anon_sym_u041a] = ACTIONS(1),
    [anon_sym_u043a] = ACTIONS(1),
    [anon_sym_u0418] = ACTIONS(1),
    [anon_sym_u0438] = ACTIONS(1),
    [anon_sym_u042f] = ACTIONS(1),
    [anon_sym_u044f] = ACTIONS(1),
    [aux_sym__function_keyword_token1] = ACTIONS(1),
    [anon_sym_u042b] = ACTIONS(1),
    [anon_sym_u044b] = ACTIONS(1),
    [aux_sym__endprocedure_keyword_token1] = ACTIONS(1),
    [aux_sym__endfunction_keyword_token1] = ACTIONS(1),
    [anon_sym_u0412] = ACTIONS(1),
    [anon_sym_u0432] = ACTIONS(1),
    [anon_sym_u0417] = ACTIONS(1),
    [anon_sym_u0437] = ACTIONS(1),
    [anon_sym_u0422] = ACTIONS(1),
    [anon_sym_u0442] = ACTIONS(1),
    [aux_sym__return_keyword_token1] = ACTIONS(1),
    [anon_sym_u0427] = ACTIONS(1),
    [anon_sym_u0447] = ACTIONS(1),
    [aux_sym_val_keyword_token1] = ACTIONS(1),
    [anon_sym_u0421] = ACTIONS(1),
    [anon_sym_u0441] = ACTIONS(1),
    [aux_sym_true_token1] = ACTIONS(1),
    [anon_sym_u041b] = ACTIONS(1),
    [anon_sym_u043b] = ACTIONS(1),
    [anon_sym_u0416] = ACTIONS(1),
    [anon_sym_u0436] = ACTIONS(1),
    [anon_sym_u042c] = ACTIONS(1),
    [anon_sym_u044c] = ACTIONS(1),
    [aux_sym_false_token1] = ACTIONS(1),
    [aux_sym_undefined_token1] = ACTIONS(1),
    [anon_sym_u042d] = ACTIONS(1),
    [anon_sym_u044d] = ACTIONS(1),
    [aux_sym_export_modifier_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(148),
    [sym__definition] = STATE(17),
    [sym__method_definition] = STATE(24),
    [sym_var_definition] = STATE(24),
    [sym_procedure_definition] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_line_comment] = STATE(1),
    [sym__perem] = STATE(146),
    [sym__procedure_keyword] = STATE(147),
    [sym__function_keyword] = STATE(139),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [aux_sym__perem_token1] = ACTIONS(7),
    [aux_sym__perem_token2] = ACTIONS(7),
    [anon_sym_u041f] = ACTIONS(9),
    [anon_sym_u043f] = ACTIONS(11),
    [aux_sym__procedure_keyword_token1] = ACTIONS(13),
    [anon_sym_u0424] = ACTIONS(15),
    [anon_sym_u0444] = ACTIONS(15),
    [aux_sym__function_keyword_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_u041f,
    ACTIONS(11), 1,
      anon_sym_u043f,
    ACTIONS(13), 1,
      aux_sym__procedure_keyword_token1,
    ACTIONS(17), 1,
      aux_sym__function_keyword_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      sym__definition,
    STATE(139), 1,
      sym__function_keyword,
    STATE(146), 1,
      sym__perem,
    STATE(147), 1,
      sym__procedure_keyword,
    ACTIONS(7), 2,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
    ACTIONS(15), 2,
      anon_sym_u0424,
      anon_sym_u0444,
    STATE(13), 2,
      sym_procedure_definition,
      sym_function_definition,
    STATE(24), 2,
      sym__method_definition,
      sym_var_definition,
  [53] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_u041f,
    ACTIONS(29), 1,
      anon_sym_u043f,
    ACTIONS(32), 1,
      aux_sym__procedure_keyword_token1,
    ACTIONS(38), 1,
      aux_sym__function_keyword_token1,
    STATE(17), 1,
      sym__definition,
    STATE(139), 1,
      sym__function_keyword,
    STATE(146), 1,
      sym__perem,
    STATE(147), 1,
      sym__procedure_keyword,
    ACTIONS(23), 2,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
    ACTIONS(35), 2,
      anon_sym_u0424,
      anon_sym_u0444,
    STATE(3), 2,
      sym_line_comment,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_procedure_definition,
      sym_function_definition,
    STATE(24), 2,
      sym__method_definition,
      sym_var_definition,
  [104] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym_true_token1,
    ACTIONS(49), 1,
      aux_sym_false_token1,
    ACTIONS(51), 1,
      aux_sym_undefined_token1,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_line_comment,
    ACTIONS(41), 2,
      anon_sym_u041d,
      anon_sym_u043d,
    ACTIONS(43), 2,
      anon_sym_u0418,
      anon_sym_u0438,
    ACTIONS(47), 2,
      anon_sym_u041b,
      anon_sym_u043b,
    STATE(94), 2,
      sym_true,
      sym_false,
    STATE(92), 3,
      sym_undefined,
      sym_string,
      sym_boolean,
  [147] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      aux_sym__endfunction_keyword_token1,
    ACTIONS(63), 1,
      aux_sym__return_keyword_token1,
    ACTIONS(67), 1,
      aux_sym_export_modifier_token1,
    STATE(5), 1,
      sym_line_comment,
    STATE(7), 1,
      sym_export_modifier,
    STATE(12), 1,
      sym__endfunction_keyword,
    STATE(39), 1,
      sym_body,
    STATE(45), 1,
      sym__statement,
    STATE(46), 1,
      sym_return_statement,
    STATE(47), 1,
      sym__return_keyword,
    ACTIONS(57), 2,
      anon_sym_u041a,
      anon_sym_u043a,
    ACTIONS(61), 2,
      anon_sym_u0412,
      anon_sym_u0432,
    ACTIONS(65), 2,
      anon_sym_u042d,
      anon_sym_u044d,
  [193] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      aux_sym__return_keyword_token1,
    ACTIONS(67), 1,
      aux_sym_export_modifier_token1,
    ACTIONS(71), 1,
      aux_sym__endprocedure_keyword_token1,
    STATE(6), 1,
      sym_line_comment,
    STATE(8), 1,
      sym_export_modifier,
    STATE(16), 1,
      sym__endprocedure_keyword,
    STATE(44), 1,
      sym_body,
    STATE(45), 1,
      sym__statement,
    STATE(46), 1,
      sym_return_statement,
    STATE(47), 1,
      sym__return_keyword,
    ACTIONS(61), 2,
      anon_sym_u0412,
      anon_sym_u0432,
    ACTIONS(65), 2,
      anon_sym_u042d,
      anon_sym_u044d,
    ACTIONS(69), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [239] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      aux_sym__endfunction_keyword_token1,
    ACTIONS(63), 1,
      aux_sym__return_keyword_token1,
    STATE(7), 1,
      sym_line_comment,
    STATE(22), 1,
      sym__endfunction_keyword,
    STATE(43), 1,
      sym_body,
    STATE(45), 1,
      sym__statement,
    STATE(46), 1,
      sym_return_statement,
    STATE(47), 1,
      sym__return_keyword,
    ACTIONS(57), 2,
      anon_sym_u041a,
      anon_sym_u043a,
    ACTIONS(61), 2,
      anon_sym_u0412,
      anon_sym_u0432,
  [275] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      aux_sym__return_keyword_token1,
    ACTIONS(71), 1,
      aux_sym__endprocedure_keyword_token1,
    STATE(8), 1,
      sym_line_comment,
    STATE(18), 1,
      sym__endprocedure_keyword,
    STATE(36), 1,
      sym_body,
    STATE(45), 1,
      sym__statement,
    STATE(46), 1,
      sym_return_statement,
    STATE(47), 1,
      sym__return_keyword,
    ACTIONS(61), 2,
      anon_sym_u0412,
      anon_sym_u0432,
    ACTIONS(69), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [311] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(73), 10,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
      anon_sym_u0412,
      anon_sym_u0432,
      aux_sym__return_keyword_token1,
      anon_sym_u042d,
      anon_sym_u044d,
      aux_sym_export_modifier_token1,
  [330] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(75), 10,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
      anon_sym_u0412,
      anon_sym_u0432,
      aux_sym__return_keyword_token1,
      anon_sym_u042d,
      anon_sym_u044d,
      aux_sym_export_modifier_token1,
  [349] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_u041f,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 1,
      anon_sym_u041f,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [389] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(87), 1,
      anon_sym_u041f,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [409] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 1,
      anon_sym_u041f,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 1,
      anon_sym_u041f,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [449] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(99), 1,
      anon_sym_u041f,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(103), 1,
      anon_sym_u041f,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_u041f,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [509] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(111), 1,
      anon_sym_u041f,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [529] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_u041f,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_u041f,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_u041f,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [589] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      anon_sym_u041f,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(131), 1,
      anon_sym_u041f,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(135), 1,
      anon_sym_u041f,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [649] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_u041f,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      aux_sym__perem_token1,
      aux_sym__perem_token2,
      anon_sym_u043f,
      aux_sym__procedure_keyword_token1,
      anon_sym_u0424,
      anon_sym_u0444,
      aux_sym__function_keyword_token1,
  [669] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(141), 8,
      anon_sym_SEMI,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
      anon_sym_u0412,
      anon_sym_u0432,
      aux_sym__return_keyword_token1,
  [686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(143), 8,
      anon_sym_SEMI,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
      anon_sym_u0412,
      anon_sym_u0432,
      aux_sym__return_keyword_token1,
  [703] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_export_modifier_token1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_line_comment,
    STATE(33), 1,
      aux_sym_var_definition_repeat1,
    STATE(153), 1,
      sym_export_modifier,
    ACTIONS(65), 2,
      anon_sym_u042d,
      anon_sym_u044d,
  [729] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      aux_sym_export_modifier_token1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym_var_definition_repeat1,
    STATE(30), 1,
      sym_line_comment,
    STATE(154), 1,
      sym_export_modifier,
    ACTIONS(65), 2,
      anon_sym_u042d,
      anon_sym_u044d,
  [755] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(155), 1,
      aux_sym_val_keyword_token1,
    STATE(31), 1,
      sym_line_comment,
    STATE(95), 1,
      sym_parameter,
    STATE(151), 1,
      sym_val_keyword,
    ACTIONS(153), 2,
      anon_sym_u0417,
      anon_sym_u0437,
  [778] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(155), 1,
      aux_sym_val_keyword_token1,
    STATE(32), 1,
      sym_line_comment,
    STATE(51), 1,
      sym_parameter,
    STATE(151), 1,
      sym_val_keyword,
    ACTIONS(153), 2,
      anon_sym_u0417,
      anon_sym_u0437,
  [801] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(33), 2,
      sym_line_comment,
      aux_sym_var_definition_repeat1,
    ACTIONS(160), 4,
      anon_sym_SEMI,
      anon_sym_u042d,
      anon_sym_u044d,
      aux_sym_export_modifier_token1,
  [818] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_line_comment,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_u042d,
      anon_sym_u044d,
      aux_sym_export_modifier_token1,
  [832] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(164), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [848] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      aux_sym__endprocedure_keyword_token1,
    STATE(11), 1,
      sym__endprocedure_keyword,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(166), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [878] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_line_comment,
    ACTIONS(168), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      aux_sym__endfunction_keyword_token1,
    STATE(22), 1,
      sym__endfunction_keyword,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_line_comment,
    STATE(77), 1,
      sym_def_value,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [925] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(172), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_line_comment,
    STATE(53), 1,
      sym_def_value,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [942] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(166), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [955] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      aux_sym__endfunction_keyword_token1,
    STATE(23), 1,
      sym__endfunction_keyword,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(57), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      aux_sym__endprocedure_keyword_token1,
    STATE(18), 1,
      sym__endprocedure_keyword,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [989] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(176), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [1002] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(178), 4,
      anon_sym_u041a,
      anon_sym_u043a,
      aux_sym__endprocedure_keyword_token1,
      aux_sym__endfunction_keyword_token1,
  [1015] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym__expression,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(180), 2,
      sym_identifier,
      sym_number,
  [1032] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(184), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_number,
  [1044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(49), 2,
      sym_line_comment,
      aux_sym_parameters_repeat1,
  [1058] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_parameters_repeat1,
    STATE(50), 1,
      sym_line_comment,
  [1074] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_parameters_repeat1,
    STATE(51), 1,
      sym_line_comment,
  [1090] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 1,
      sym_line_comment,
    ACTIONS(197), 3,
      anon_sym_SEMI,
      sym_identifier,
      sym_number,
  [1102] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(53), 1,
      sym_line_comment,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1113] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_line_comment,
    ACTIONS(201), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1124] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(55), 1,
      sym_line_comment,
    ACTIONS(203), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_parameters,
    STATE(56), 1,
      sym_line_comment,
  [1148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_parameters,
    STATE(57), 1,
      sym_line_comment,
  [1161] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_line_comment,
    ACTIONS(207), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_line_comment,
    ACTIONS(209), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [1183] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_line_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1194] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(213), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [1205] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(215), 2,
      anon_sym_u042b,
      anon_sym_u044b,
  [1216] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_line_comment,
    ACTIONS(217), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(219), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1238] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_line_comment,
    ACTIONS(221), 2,
      anon_sym_u0421,
      anon_sym_u0441,
  [1249] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(66), 1,
      sym_line_comment,
    ACTIONS(223), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1260] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_line_comment,
    ACTIONS(225), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1271] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_line_comment,
    ACTIONS(227), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1282] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_line_comment,
    ACTIONS(229), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1293] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_line_comment,
    ACTIONS(231), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1304] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(233), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1315] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(235), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1326] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(237), 2,
      anon_sym_u0414,
      anon_sym_u0434,
  [1337] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(239), 2,
      anon_sym_u0418,
      anon_sym_u0438,
  [1348] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(241), 2,
      anon_sym_u041f,
      anon_sym_u043f,
  [1359] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(243), 2,
      anon_sym_u0410,
      anon_sym_u0430,
  [1370] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1381] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(247), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1392] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(249), 2,
      anon_sym_u0417,
      anon_sym_u0437,
  [1403] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(251), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(253), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1425] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(255), 2,
      anon_sym_u0423,
      anon_sym_u0443,
  [1436] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(257), 2,
      anon_sym_u042f,
      anon_sym_u044f,
  [1447] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(259), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1458] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(261), 2,
      anon_sym_u0427,
      anon_sym_u0447,
  [1469] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(263), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1480] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(265), 2,
      anon_sym_u0421,
      anon_sym_u0441,
  [1491] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1502] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(269), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1513] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1524] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1535] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1546] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(277), 2,
      anon_sym_u0418,
      anon_sym_u0438,
  [1557] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym_line_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1568] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1579] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(281), 2,
      anon_sym_u0423,
      anon_sym_u0443,
  [1590] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(283), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1601] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(98), 1,
      sym_line_comment,
    ACTIONS(285), 2,
      anon_sym_u0418,
      anon_sym_u0438,
  [1612] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(287), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1623] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(289), 2,
      anon_sym_u0412,
      anon_sym_u0432,
  [1634] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(101), 1,
      sym_line_comment,
    ACTIONS(291), 2,
      anon_sym_u0414,
      anon_sym_u0434,
  [1645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(293), 2,
      anon_sym_u041b,
      anon_sym_u043b,
  [1656] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(295), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1667] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(297), 2,
      anon_sym_u0423,
      anon_sym_u0443,
  [1678] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(299), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1689] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(106), 1,
      sym_line_comment,
    ACTIONS(301), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1700] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(303), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1711] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(305), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1722] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 1,
      sym_line_comment,
    ACTIONS(307), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [1733] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_u0422,
      anon_sym_u0442,
  [1744] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(311), 2,
      anon_sym_u0416,
      anon_sym_u0436,
  [1755] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(313), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1766] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 1,
      sym_line_comment,
    ACTIONS(315), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1777] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(317), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1788] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1799] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_u0410,
      anon_sym_u0430,
  [1810] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym_line_comment,
    ACTIONS(323), 2,
      anon_sym_u0422,
      anon_sym_u0442,
  [1821] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(325), 2,
      anon_sym_u041f,
      anon_sym_u043f,
  [1832] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      sym_line_comment,
    ACTIONS(327), 2,
      anon_sym_u0418,
      anon_sym_u0438,
  [1843] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym_line_comment,
    ACTIONS(329), 2,
      anon_sym_u042c,
      anon_sym_u044c,
  [1854] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym_line_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1865] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(122), 1,
      sym_line_comment,
    ACTIONS(333), 2,
      anon_sym_u041f,
      anon_sym_u043f,
  [1876] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym_line_comment,
    ACTIONS(335), 2,
      anon_sym_u0410,
      anon_sym_u0430,
  [1887] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(124), 1,
      sym_line_comment,
    ACTIONS(337), 2,
      anon_sym_u0424,
      anon_sym_u0444,
  [1898] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(125), 1,
      sym_line_comment,
    ACTIONS(339), 2,
      anon_sym_u041a,
      anon_sym_u043a,
  [1909] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym_line_comment,
    ACTIONS(341), 2,
      anon_sym_u0426,
      anon_sym_u0446,
  [1920] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(127), 1,
      sym_line_comment,
    ACTIONS(343), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1931] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 1,
      sym_line_comment,
    ACTIONS(345), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [1942] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym_line_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1953] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym_line_comment,
    ACTIONS(349), 2,
      anon_sym_u0420,
      anon_sym_u0440,
  [1964] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(131), 1,
      sym_line_comment,
    ACTIONS(351), 2,
      anon_sym_u0422,
      anon_sym_u0442,
  [1975] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(132), 1,
      sym_line_comment,
    ACTIONS(353), 2,
      anon_sym_u0423,
      anon_sym_u0443,
  [1986] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(133), 1,
      sym_line_comment,
    ACTIONS(355), 2,
      anon_sym_u0415,
      anon_sym_u0435,
  [1997] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(134), 1,
      sym_line_comment,
    ACTIONS(357), 2,
      anon_sym_u0410,
      anon_sym_u0430,
  [2008] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(135), 1,
      sym_line_comment,
    ACTIONS(359), 2,
      anon_sym_u041e,
      anon_sym_u043e,
  [2019] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(136), 1,
      sym_line_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2030] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(137), 1,
      sym_line_comment,
    ACTIONS(363), 2,
      anon_sym_u041d,
      anon_sym_u043d,
  [2041] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(138), 1,
      sym_line_comment,
    ACTIONS(365), 2,
      anon_sym_u0414,
      anon_sym_u0434,
  [2052] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(367), 1,
      sym_identifier,
    STATE(139), 1,
      sym_line_comment,
  [2062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(140), 1,
      sym_line_comment,
  [2072] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(371), 1,
      sym_identifier,
    STATE(141), 1,
      sym_line_comment,
  [2082] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_line_comment,
  [2092] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(143), 1,
      sym_line_comment,
  [2102] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(144), 1,
      sym_line_comment,
  [2112] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(145), 1,
      sym_line_comment,
  [2122] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(146), 1,
      sym_line_comment,
  [2132] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(147), 1,
      sym_line_comment,
  [2142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_line_comment,
  [2152] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(387), 1,
      anon_sym_DOT_STAR,
    STATE(149), 1,
      sym_line_comment,
  [2162] = 3,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(391), 1,
      aux_sym_line_comment_token1,
    STATE(150), 1,
      sym_line_comment,
  [2172] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(151), 1,
      sym_line_comment,
  [2182] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(395), 1,
      sym_identifier,
    STATE(152), 1,
      sym_line_comment,
  [2192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_line_comment,
  [2202] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_line_comment,
  [2212] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(155), 1,
      sym_line_comment,
  [2222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(156), 1,
      sym_line_comment,
  [2232] = 1,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 193,
  [SMALL_STATE(7)] = 239,
  [SMALL_STATE(8)] = 275,
  [SMALL_STATE(9)] = 311,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 369,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 409,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 449,
  [SMALL_STATE(17)] = 469,
  [SMALL_STATE(18)] = 489,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 549,
  [SMALL_STATE(22)] = 569,
  [SMALL_STATE(23)] = 589,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 686,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 729,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 778,
  [SMALL_STATE(33)] = 801,
  [SMALL_STATE(34)] = 818,
  [SMALL_STATE(35)] = 832,
  [SMALL_STATE(36)] = 848,
  [SMALL_STATE(37)] = 865,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 891,
  [SMALL_STATE(40)] = 908,
  [SMALL_STATE(41)] = 925,
  [SMALL_STATE(42)] = 942,
  [SMALL_STATE(43)] = 955,
  [SMALL_STATE(44)] = 972,
  [SMALL_STATE(45)] = 989,
  [SMALL_STATE(46)] = 1002,
  [SMALL_STATE(47)] = 1015,
  [SMALL_STATE(48)] = 1032,
  [SMALL_STATE(49)] = 1044,
  [SMALL_STATE(50)] = 1058,
  [SMALL_STATE(51)] = 1074,
  [SMALL_STATE(52)] = 1090,
  [SMALL_STATE(53)] = 1102,
  [SMALL_STATE(54)] = 1113,
  [SMALL_STATE(55)] = 1124,
  [SMALL_STATE(56)] = 1135,
  [SMALL_STATE(57)] = 1148,
  [SMALL_STATE(58)] = 1161,
  [SMALL_STATE(59)] = 1172,
  [SMALL_STATE(60)] = 1183,
  [SMALL_STATE(61)] = 1194,
  [SMALL_STATE(62)] = 1205,
  [SMALL_STATE(63)] = 1216,
  [SMALL_STATE(64)] = 1227,
  [SMALL_STATE(65)] = 1238,
  [SMALL_STATE(66)] = 1249,
  [SMALL_STATE(67)] = 1260,
  [SMALL_STATE(68)] = 1271,
  [SMALL_STATE(69)] = 1282,
  [SMALL_STATE(70)] = 1293,
  [SMALL_STATE(71)] = 1304,
  [SMALL_STATE(72)] = 1315,
  [SMALL_STATE(73)] = 1326,
  [SMALL_STATE(74)] = 1337,
  [SMALL_STATE(75)] = 1348,
  [SMALL_STATE(76)] = 1359,
  [SMALL_STATE(77)] = 1370,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1392,
  [SMALL_STATE(80)] = 1403,
  [SMALL_STATE(81)] = 1414,
  [SMALL_STATE(82)] = 1425,
  [SMALL_STATE(83)] = 1436,
  [SMALL_STATE(84)] = 1447,
  [SMALL_STATE(85)] = 1458,
  [SMALL_STATE(86)] = 1469,
  [SMALL_STATE(87)] = 1480,
  [SMALL_STATE(88)] = 1491,
  [SMALL_STATE(89)] = 1502,
  [SMALL_STATE(90)] = 1513,
  [SMALL_STATE(91)] = 1524,
  [SMALL_STATE(92)] = 1535,
  [SMALL_STATE(93)] = 1546,
  [SMALL_STATE(94)] = 1557,
  [SMALL_STATE(95)] = 1568,
  [SMALL_STATE(96)] = 1579,
  [SMALL_STATE(97)] = 1590,
  [SMALL_STATE(98)] = 1601,
  [SMALL_STATE(99)] = 1612,
  [SMALL_STATE(100)] = 1623,
  [SMALL_STATE(101)] = 1634,
  [SMALL_STATE(102)] = 1645,
  [SMALL_STATE(103)] = 1656,
  [SMALL_STATE(104)] = 1667,
  [SMALL_STATE(105)] = 1678,
  [SMALL_STATE(106)] = 1689,
  [SMALL_STATE(107)] = 1700,
  [SMALL_STATE(108)] = 1711,
  [SMALL_STATE(109)] = 1722,
  [SMALL_STATE(110)] = 1733,
  [SMALL_STATE(111)] = 1744,
  [SMALL_STATE(112)] = 1755,
  [SMALL_STATE(113)] = 1766,
  [SMALL_STATE(114)] = 1777,
  [SMALL_STATE(115)] = 1788,
  [SMALL_STATE(116)] = 1799,
  [SMALL_STATE(117)] = 1810,
  [SMALL_STATE(118)] = 1821,
  [SMALL_STATE(119)] = 1832,
  [SMALL_STATE(120)] = 1843,
  [SMALL_STATE(121)] = 1854,
  [SMALL_STATE(122)] = 1865,
  [SMALL_STATE(123)] = 1876,
  [SMALL_STATE(124)] = 1887,
  [SMALL_STATE(125)] = 1898,
  [SMALL_STATE(126)] = 1909,
  [SMALL_STATE(127)] = 1920,
  [SMALL_STATE(128)] = 1931,
  [SMALL_STATE(129)] = 1942,
  [SMALL_STATE(130)] = 1953,
  [SMALL_STATE(131)] = 1964,
  [SMALL_STATE(132)] = 1975,
  [SMALL_STATE(133)] = 1986,
  [SMALL_STATE(134)] = 1997,
  [SMALL_STATE(135)] = 2008,
  [SMALL_STATE(136)] = 2019,
  [SMALL_STATE(137)] = 2030,
  [SMALL_STATE(138)] = 2041,
  [SMALL_STATE(139)] = 2052,
  [SMALL_STATE(140)] = 2062,
  [SMALL_STATE(141)] = 2072,
  [SMALL_STATE(142)] = 2082,
  [SMALL_STATE(143)] = 2092,
  [SMALL_STATE(144)] = 2102,
  [SMALL_STATE(145)] = 2112,
  [SMALL_STATE(146)] = 2122,
  [SMALL_STATE(147)] = 2132,
  [SMALL_STATE(148)] = 2142,
  [SMALL_STATE(149)] = 2152,
  [SMALL_STATE(150)] = 2162,
  [SMALL_STATE(151)] = 2172,
  [SMALL_STATE(152)] = 2182,
  [SMALL_STATE(153)] = 2192,
  [SMALL_STATE(154)] = 2202,
  [SMALL_STATE(155)] = 2212,
  [SMALL_STATE(156)] = 2222,
  [SMALL_STATE(157)] = 2232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 6, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 6, 0, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_definition, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_definition, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_definition, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_definition, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 5, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 5, 0, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endfunction_keyword, 12, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__endfunction_keyword, 12, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endprocedure_keyword, 14, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__endprocedure_keyword, 14, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endfunction_keyword, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__endfunction_keyword, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__endprocedure_keyword, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__endprocedure_keyword, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_definition, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_modifier, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_modifier, 7, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_definition_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_keyword, 7, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__return_keyword, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefined, 12, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undefined, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_value, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 4, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 6, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_keyword, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure_keyword, 9, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_keyword, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_keyword, 7, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_keyword, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_keyword, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__perem, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
