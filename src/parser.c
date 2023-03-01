#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_model = 1,
  anon_sym_end_DASHmodel = 2,
  anon_sym_SEMI = 3,
  anon_sym_uses = 4,
  anon_sym_COMMA = 5,
  anon_sym_imports = 6,
  anon_sym_options = 7,
  anon_sym_version = 8,
  anon_sym_DOT = 9,
  anon_sym_explterm = 10,
  anon_sym_noimplicit = 11,
  anon_sym_noautofinal = 12,
  anon_sym_keepassert = 13,
  anon_sym_xbim = 14,
  anon_sym_fctasproc = 15,
  anon_sym_tagpriv = 16,
  anon_sym_dynonly = 17,
  anon_sym_parameters = 18,
  anon_sym_end_DASHparameters = 19,
  anon_sym_EQ = 20,
  anon_sym_declarations = 21,
  anon_sym_end_DASHdeclarations = 22,
  anon_sym_COLON = 23,
  anon_sym_shared = 24,
  anon_sym_dynamic = 25,
  anon_sym_set = 26,
  anon_sym_of = 27,
  anon_sym_constant = 28,
  anon_sym_range = 29,
  anon_sym_listof = 30,
  anon_sym_hashmap = 31,
  anon_sym_array = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_record = 35,
  anon_sym_end_DASHrecord = 36,
  anon_sym_function = 37,
  anon_sym_procedure = 38,
  anon_sym_or = 39,
  anon_sym_any = 40,
  anon_sym_integer = 41,
  anon_sym_real = 42,
  anon_sym_string = 43,
  anon_sym_boolean = 44,
  anon_sym_mpvar = 45,
  anon_sym_linctr = 46,
  sym_identifier = 47,
  sym_integer = 48,
  sym_real = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  anon_sym_DOT_DOT = 52,
  aux_sym_quoted_string_token1 = 53,
  aux_sym_quoted_string_token2 = 54,
  anon_sym_include = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym__definition = 58,
  sym_model_definition = 59,
  sym__directive = 60,
  sym_directive_use = 61,
  sym_directive_import = 62,
  sym_directive_option = 63,
  sym_directive_version = 64,
  sym_option = 65,
  sym__parameters = 66,
  sym_parameter_definition = 67,
  sym__declarations = 68,
  sym_declaration_definition = 69,
  sym_simple_type = 70,
  sym_elementary_type = 71,
  sym_set_type = 72,
  sym_dynamic_set_type = 73,
  sym_simple_set_type = 74,
  sym_range_type = 75,
  sym_dynamic_range_type = 76,
  sym_simple_range_type = 77,
  sym_list_type = 78,
  sym_array_type = 79,
  sym_dynamic_array_type = 80,
  sym_hashmap_array_type = 81,
  sym_simple_array_type = 82,
  sym_record_type = 83,
  sym_subroutine_type = 84,
  sym_function_type = 85,
  sym_procedure_type = 86,
  sym_unioned_types = 87,
  sym_basic_type = 88,
  sym_mp_type = 89,
  sym_user_or_external_type = 90,
  sym_set_declaration_or_expression = 91,
  sym_value = 92,
  sym_bool = 93,
  sym_range = 94,
  sym_quoted_string = 95,
  sym_include = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_model_definition_repeat1 = 98,
  aux_sym_directive_use_repeat1 = 99,
  aux_sym_directive_option_repeat1 = 100,
  aux_sym__parameters_repeat1 = 101,
  aux_sym__declarations_repeat1 = 102,
  aux_sym_declaration_definition_repeat1 = 103,
  aux_sym_simple_array_type_repeat1 = 104,
  aux_sym_unioned_types_repeat1 = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_model] = "model",
  [anon_sym_end_DASHmodel] = "end-model",
  [anon_sym_SEMI] = ";",
  [anon_sym_uses] = "uses",
  [anon_sym_COMMA] = ",",
  [anon_sym_imports] = "imports",
  [anon_sym_options] = "options",
  [anon_sym_version] = "version",
  [anon_sym_DOT] = ".",
  [anon_sym_explterm] = "explterm",
  [anon_sym_noimplicit] = "noimplicit",
  [anon_sym_noautofinal] = "noautofinal",
  [anon_sym_keepassert] = "keepassert",
  [anon_sym_xbim] = "xbim",
  [anon_sym_fctasproc] = "fctasproc",
  [anon_sym_tagpriv] = "tagpriv",
  [anon_sym_dynonly] = "dynonly",
  [anon_sym_parameters] = "parameters",
  [anon_sym_end_DASHparameters] = "end-parameters",
  [anon_sym_EQ] = "=",
  [anon_sym_declarations] = "declarations",
  [anon_sym_end_DASHdeclarations] = "end-declarations",
  [anon_sym_COLON] = ":",
  [anon_sym_shared] = "shared",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_set] = "set",
  [anon_sym_of] = "of",
  [anon_sym_constant] = "constant",
  [anon_sym_range] = "range",
  [anon_sym_listof] = "list of",
  [anon_sym_hashmap] = "hashmap",
  [anon_sym_array] = "array",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_record] = "record",
  [anon_sym_end_DASHrecord] = "end-record",
  [anon_sym_function] = "function",
  [anon_sym_procedure] = "procedure",
  [anon_sym_or] = "or",
  [anon_sym_any] = "any",
  [anon_sym_integer] = "integer",
  [anon_sym_real] = "real",
  [anon_sym_string] = "string",
  [anon_sym_boolean] = "boolean",
  [anon_sym_mpvar] = "mpvar",
  [anon_sym_linctr] = "linctr",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [anon_sym_include] = "include",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_model_definition] = "model_definition",
  [sym__directive] = "_directive",
  [sym_directive_use] = "directive_use",
  [sym_directive_import] = "directive_import",
  [sym_directive_option] = "directive_option",
  [sym_directive_version] = "directive_version",
  [sym_option] = "option",
  [sym__parameters] = "_parameters",
  [sym_parameter_definition] = "parameter_definition",
  [sym__declarations] = "_declarations",
  [sym_declaration_definition] = "declaration_definition",
  [sym_simple_type] = "simple_type",
  [sym_elementary_type] = "elementary_type",
  [sym_set_type] = "set_type",
  [sym_dynamic_set_type] = "dynamic_set_type",
  [sym_simple_set_type] = "simple_set_type",
  [sym_range_type] = "range_type",
  [sym_dynamic_range_type] = "dynamic_range_type",
  [sym_simple_range_type] = "simple_range_type",
  [sym_list_type] = "list_type",
  [sym_array_type] = "array_type",
  [sym_dynamic_array_type] = "dynamic_array_type",
  [sym_hashmap_array_type] = "hashmap_array_type",
  [sym_simple_array_type] = "simple_array_type",
  [sym_record_type] = "record_type",
  [sym_subroutine_type] = "subroutine_type",
  [sym_function_type] = "function_type",
  [sym_procedure_type] = "procedure_type",
  [sym_unioned_types] = "unioned_types",
  [sym_basic_type] = "basic_type",
  [sym_mp_type] = "mp_type",
  [sym_user_or_external_type] = "user_or_external_type",
  [sym_set_declaration_or_expression] = "set_declaration_or_expression",
  [sym_value] = "value",
  [sym_bool] = "bool",
  [sym_range] = "range",
  [sym_quoted_string] = "quoted_string",
  [sym_include] = "include",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_model_definition_repeat1] = "model_definition_repeat1",
  [aux_sym_directive_use_repeat1] = "directive_use_repeat1",
  [aux_sym_directive_option_repeat1] = "directive_option_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym__declarations_repeat1] = "_declarations_repeat1",
  [aux_sym_declaration_definition_repeat1] = "declaration_definition_repeat1",
  [aux_sym_simple_array_type_repeat1] = "simple_array_type_repeat1",
  [aux_sym_unioned_types_repeat1] = "unioned_types_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_end_DASHmodel] = anon_sym_end_DASHmodel,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_imports] = anon_sym_imports,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_explterm] = anon_sym_explterm,
  [anon_sym_noimplicit] = anon_sym_noimplicit,
  [anon_sym_noautofinal] = anon_sym_noautofinal,
  [anon_sym_keepassert] = anon_sym_keepassert,
  [anon_sym_xbim] = anon_sym_xbim,
  [anon_sym_fctasproc] = anon_sym_fctasproc,
  [anon_sym_tagpriv] = anon_sym_tagpriv,
  [anon_sym_dynonly] = anon_sym_dynonly,
  [anon_sym_parameters] = anon_sym_parameters,
  [anon_sym_end_DASHparameters] = anon_sym_end_DASHparameters,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_declarations] = anon_sym_declarations,
  [anon_sym_end_DASHdeclarations] = anon_sym_end_DASHdeclarations,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_constant] = anon_sym_constant,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_listof] = anon_sym_listof,
  [anon_sym_hashmap] = anon_sym_hashmap,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_end_DASHrecord] = anon_sym_end_DASHrecord,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_mpvar] = anon_sym_mpvar,
  [anon_sym_linctr] = anon_sym_linctr,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [anon_sym_include] = anon_sym_include,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_model_definition] = sym_model_definition,
  [sym__directive] = sym__directive,
  [sym_directive_use] = sym_directive_use,
  [sym_directive_import] = sym_directive_import,
  [sym_directive_option] = sym_directive_option,
  [sym_directive_version] = sym_directive_version,
  [sym_option] = sym_option,
  [sym__parameters] = sym__parameters,
  [sym_parameter_definition] = sym_parameter_definition,
  [sym__declarations] = sym__declarations,
  [sym_declaration_definition] = sym_declaration_definition,
  [sym_simple_type] = sym_simple_type,
  [sym_elementary_type] = sym_elementary_type,
  [sym_set_type] = sym_set_type,
  [sym_dynamic_set_type] = sym_dynamic_set_type,
  [sym_simple_set_type] = sym_simple_set_type,
  [sym_range_type] = sym_range_type,
  [sym_dynamic_range_type] = sym_dynamic_range_type,
  [sym_simple_range_type] = sym_simple_range_type,
  [sym_list_type] = sym_list_type,
  [sym_array_type] = sym_array_type,
  [sym_dynamic_array_type] = sym_dynamic_array_type,
  [sym_hashmap_array_type] = sym_hashmap_array_type,
  [sym_simple_array_type] = sym_simple_array_type,
  [sym_record_type] = sym_record_type,
  [sym_subroutine_type] = sym_subroutine_type,
  [sym_function_type] = sym_function_type,
  [sym_procedure_type] = sym_procedure_type,
  [sym_unioned_types] = sym_unioned_types,
  [sym_basic_type] = sym_basic_type,
  [sym_mp_type] = sym_mp_type,
  [sym_user_or_external_type] = sym_user_or_external_type,
  [sym_set_declaration_or_expression] = sym_set_declaration_or_expression,
  [sym_value] = sym_value,
  [sym_bool] = sym_bool,
  [sym_range] = sym_range,
  [sym_quoted_string] = sym_quoted_string,
  [sym_include] = sym_include,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_model_definition_repeat1] = aux_sym_model_definition_repeat1,
  [aux_sym_directive_use_repeat1] = aux_sym_directive_use_repeat1,
  [aux_sym_directive_option_repeat1] = aux_sym_directive_option_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym__declarations_repeat1] = aux_sym__declarations_repeat1,
  [aux_sym_declaration_definition_repeat1] = aux_sym_declaration_definition_repeat1,
  [aux_sym_simple_array_type_repeat1] = aux_sym_simple_array_type_repeat1,
  [aux_sym_unioned_types_repeat1] = aux_sym_unioned_types_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explterm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noimplicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noautofinal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keepassert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xbim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fctasproc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tagpriv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parameters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_DASHparameters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declarations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_DASHdeclarations] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hashmap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
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
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end_DASHrecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mpvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_linctr] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_model_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_use] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_import] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_option] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_version] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_elementary_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_range_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_range_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_range_type] = {
    .visible = true,
    .named = true,
  },
  [sym_list_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_hashmap_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unioned_types] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_mp_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_or_external_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_declaration_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_use_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_option_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unioned_types_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_default_value = 1,
  field_major = 2,
  field_max = 3,
  field_min = 4,
  field_minor = 5,
  field_name = 6,
  field_param_type = 7,
  field_release = 8,
  field_return_type = 9,
  field_user_type = 10,
  field_variable = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default_value] = "default_value",
  [field_major] = "major",
  [field_max] = "max",
  [field_min] = "min",
  [field_minor] = "minor",
  [field_name] = "name",
  [field_param_type] = "param_type",
  [field_release] = "release",
  [field_return_type] = "return_type",
  [field_user_type] = "user_type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_major, 1},
  [2] =
    {field_major, 1},
    {field_minor, 3},
  [4] =
    {field_default_value, 2},
    {field_name, 0},
  [6] =
    {field_variable, 1},
  [7] =
    {field_user_type, 0},
  [8] =
    {field_variable, 0},
  [9] =
    {field_variable, 0, .inherited = true},
    {field_variable, 1, .inherited = true},
  [11] =
    {field_variable, 0},
    {field_variable, 1, .inherited = true},
  [13] =
    {field_major, 1},
    {field_minor, 3},
    {field_release, 5},
  [16] =
    {field_return_type, 2},
  [17] =
    {field_max, 2},
    {field_min, 0},
  [19] =
    {field_param_type, 2},
  [20] =
    {field_name, 0},
  [21] =
    {field_return_type, 4},
  [22] =
    {field_param_type, 2},
    {field_return_type, 5},
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
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 25,
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
  [94] = 56,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 55,
  [99] = 99,
  [100] = 54,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 53,
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
  [125] = 91,
  [126] = 92,
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
  [141] = 41,
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
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 168,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 166,
  [178] = 178,
  [179] = 158,
  [180] = 170,
  [181] = 181,
  [182] = 182,
  [183] = 41,
  [184] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(243);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '.') ADVANCE(253);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(161);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == 'x') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == ')') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'f') ADVANCE(405);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == ';') ADVANCE(246);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(417);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(227);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(261);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_end_DASHmodel);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_imports);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(417);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_explterm);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_noimplicit);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_noautofinal);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_keepassert);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_xbim);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_fctasproc);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_tagpriv);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_dynonly);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_parameters);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_end_DASHparameters);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_declarations);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_end_DASHdeclarations);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_shared);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_constant);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_constant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_listof);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_hashmap);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_hashmap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_end_DASHrecord);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_mpvar);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_mpvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_linctr);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_linctr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'c') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 's') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(422);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
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
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 0},
  [183] = {(TSStateId)(-1)},
  [184] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_include] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_end_DASHmodel] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_imports] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_explterm] = ACTIONS(1),
    [anon_sym_noimplicit] = ACTIONS(1),
    [anon_sym_noautofinal] = ACTIONS(1),
    [anon_sym_keepassert] = ACTIONS(1),
    [anon_sym_xbim] = ACTIONS(1),
    [anon_sym_fctasproc] = ACTIONS(1),
    [anon_sym_tagpriv] = ACTIONS(1),
    [anon_sym_dynonly] = ACTIONS(1),
    [anon_sym_parameters] = ACTIONS(1),
    [anon_sym_end_DASHparameters] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_declarations] = ACTIONS(1),
    [anon_sym_end_DASHdeclarations] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_constant] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_listof] = ACTIONS(1),
    [anon_sym_hashmap] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_end_DASHrecord] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_mpvar] = ACTIONS(1),
    [anon_sym_linctr] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_quoted_string_token1] = ACTIONS(1),
    [aux_sym_quoted_string_token2] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym__definition] = STATE(142),
    [sym_model_definition] = STATE(143),
    [sym_include] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_model] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_shared,
    ACTIONS(13), 1,
      anon_sym_dynamic,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(21), 1,
      anon_sym_hashmap,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(25), 1,
      anon_sym_record,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      anon_sym_procedure,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(2), 1,
      sym_include,
    STATE(66), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(96), 2,
      sym_dynamic_range_type,
      sym_simple_range_type,
    STATE(112), 2,
      sym_function_type,
      sym_procedure_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    STATE(95), 3,
      sym_dynamic_array_type,
      sym_hashmap_array_type,
      sym_simple_array_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(97), 6,
      sym_set_type,
      sym_range_type,
      sym_list_type,
      sym_array_type,
      sym_record_type,
      sym_subroutine_type,
  [86] = 28,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_dynamic,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(21), 1,
      anon_sym_hashmap,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(25), 1,
      anon_sym_record,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      anon_sym_procedure,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(39), 1,
      anon_sym_shared,
    STATE(3), 1,
      sym_include,
    STATE(73), 1,
      sym_elementary_type,
    STATE(113), 1,
      sym_set_type,
    STATE(114), 1,
      sym_range_type,
    STATE(115), 1,
      sym_list_type,
    STATE(116), 1,
      sym_array_type,
    STATE(117), 1,
      sym_record_type,
    STATE(118), 1,
      sym_subroutine_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(96), 2,
      sym_dynamic_range_type,
      sym_simple_range_type,
    STATE(112), 2,
      sym_function_type,
      sym_procedure_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    STATE(95), 3,
      sym_dynamic_array_type,
      sym_hashmap_array_type,
      sym_simple_array_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [182] = 18,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_dynamic,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(21), 1,
      anon_sym_hashmap,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(4), 1,
      sym_include,
    STATE(59), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(96), 2,
      sym_dynamic_range_type,
      sym_simple_range_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    STATE(95), 3,
      sym_dynamic_array_type,
      sym_hashmap_array_type,
      sym_simple_array_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(101), 4,
      sym_set_type,
      sym_range_type,
      sym_list_type,
      sym_array_type,
  [250] = 21,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_dynamic,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(21), 1,
      anon_sym_hashmap,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(5), 1,
      sym_include,
    STATE(69), 1,
      sym_elementary_type,
    STATE(88), 1,
      sym_range_type,
    STATE(135), 1,
      sym_array_type,
    STATE(136), 1,
      sym_list_type,
    STATE(137), 1,
      sym_set_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(96), 2,
      sym_dynamic_range_type,
      sym_simple_range_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    STATE(95), 3,
      sym_dynamic_array_type,
      sym_hashmap_array_type,
      sym_simple_array_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [324] = 14,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(41), 1,
      anon_sym_dynamic,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_integer,
    STATE(6), 1,
      sym_include,
    STATE(92), 1,
      sym_set_declaration_or_expression,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(147), 4,
      sym_elementary_type,
      sym_set_type,
      sym_simple_range_type,
      sym_range,
  [377] = 14,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(41), 1,
      anon_sym_dynamic,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_integer,
    STATE(7), 1,
      sym_include,
    STATE(126), 1,
      sym_set_declaration_or_expression,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(147), 4,
      sym_elementary_type,
      sym_set_type,
      sym_simple_range_type,
      sym_range,
  [430] = 14,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_listof,
    ACTIONS(51), 1,
      anon_sym_array,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_include,
    STATE(182), 1,
      sym_simple_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [483] = 14,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_listof,
    ACTIONS(51), 1,
      anon_sym_array,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_include,
    STATE(161), 1,
      sym_simple_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [536] = 14,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(41), 1,
      anon_sym_dynamic,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_integer,
    STATE(10), 1,
      sym_include,
    STATE(155), 1,
      sym_set_declaration_or_expression,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(147), 4,
      sym_elementary_type,
      sym_set_type,
      sym_simple_range_type,
      sym_range,
  [589] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_listof,
    ACTIONS(51), 1,
      anon_sym_array,
    STATE(11), 1,
      sym_include,
    STATE(86), 1,
      sym_simple_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [639] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_listof,
    ACTIONS(51), 1,
      anon_sym_array,
    STATE(12), 1,
      sym_include,
    STATE(77), 1,
      sym_simple_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [689] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(13), 1,
      sym_include,
    STATE(130), 1,
      sym_simple_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [739] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(14), 1,
      sym_include,
    STATE(86), 1,
      sym_simple_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [789] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(15), 1,
      sym_include,
    STATE(77), 1,
      sym_simple_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [839] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(16), 1,
      sym_include,
    STATE(109), 1,
      sym_simple_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [889] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(41), 1,
      anon_sym_dynamic,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      sym_integer,
    STATE(17), 1,
      sym_include,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(64), 2,
      sym_dynamic_set_type,
      sym_simple_set_type,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(154), 4,
      sym_elementary_type,
      sym_set_type,
      sym_simple_range_type,
      sym_range,
  [939] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(18), 1,
      sym_include,
    STATE(89), 1,
      sym_simple_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(79), 5,
      sym_elementary_type,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [989] = 13,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_listof,
    ACTIONS(23), 1,
      anon_sym_array,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(19), 1,
      sym_include,
    STATE(74), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
    STATE(102), 4,
      sym_simple_set_type,
      sym_simple_range_type,
      sym_list_type,
      sym_simple_array_type,
  [1038] = 15,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end_DASHmodel,
    ACTIONS(65), 1,
      anon_sym_uses,
    ACTIONS(67), 1,
      anon_sym_imports,
    ACTIONS(69), 1,
      anon_sym_options,
    ACTIONS(71), 1,
      anon_sym_version,
    ACTIONS(73), 1,
      anon_sym_parameters,
    ACTIONS(75), 1,
      anon_sym_declarations,
    STATE(20), 1,
      sym_include,
    STATE(22), 1,
      aux_sym_model_definition_repeat1,
    STATE(52), 1,
      sym__directive,
    STATE(131), 1,
      sym__parameters,
    STATE(174), 1,
      sym__declarations,
    STATE(48), 4,
      sym_directive_use,
      sym_directive_import,
      sym_directive_option,
      sym_directive_version,
  [1087] = 15,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_uses,
    ACTIONS(67), 1,
      anon_sym_imports,
    ACTIONS(69), 1,
      anon_sym_options,
    ACTIONS(71), 1,
      anon_sym_version,
    ACTIONS(73), 1,
      anon_sym_parameters,
    ACTIONS(75), 1,
      anon_sym_declarations,
    ACTIONS(77), 1,
      anon_sym_end_DASHmodel,
    STATE(20), 1,
      aux_sym_model_definition_repeat1,
    STATE(21), 1,
      sym_include,
    STATE(52), 1,
      sym__directive,
    STATE(119), 1,
      sym__parameters,
    STATE(159), 1,
      sym__declarations,
    STATE(48), 4,
      sym_directive_use,
      sym_directive_import,
      sym_directive_option,
      sym_directive_version,
  [1136] = 10,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_uses,
    ACTIONS(84), 1,
      anon_sym_imports,
    ACTIONS(87), 1,
      anon_sym_options,
    ACTIONS(90), 1,
      anon_sym_version,
    STATE(52), 1,
      sym__directive,
    STATE(22), 2,
      sym_include,
      aux_sym_model_definition_repeat1,
    ACTIONS(79), 3,
      anon_sym_end_DASHmodel,
      anon_sym_parameters,
      anon_sym_declarations,
    STATE(48), 4,
      sym_directive_use,
      sym_directive_import,
      sym_directive_option,
      sym_directive_version,
  [1173] = 9,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_constant,
    STATE(23), 1,
      sym_include,
    STATE(58), 1,
      sym_elementary_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1207] = 9,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(95), 1,
      anon_sym_constant,
    STATE(24), 1,
      sym_include,
    STATE(58), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1241] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(25), 1,
      sym_include,
    STATE(84), 1,
      sym_elementary_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1272] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(26), 1,
      sym_include,
    STATE(71), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1303] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(27), 1,
      sym_include,
    STATE(71), 1,
      sym_elementary_type,
    ACTIONS(59), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(94), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(57), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1334] = 8,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(28), 1,
      sym_include,
    STATE(84), 1,
      sym_elementary_type,
    ACTIONS(33), 2,
      anon_sym_mpvar,
      anon_sym_linctr,
    STATE(56), 3,
      sym_basic_type,
      sym_mp_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1365] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(29), 2,
      sym_include,
      aux_sym_directive_use_repeat1,
    ACTIONS(97), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1389] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(30), 2,
      sym_include,
      aux_sym_directive_option_repeat1,
    ACTIONS(102), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1413] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_include,
    STATE(36), 1,
      aux_sym_directive_use_repeat1,
    ACTIONS(107), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1439] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_include,
    STATE(35), 1,
      aux_sym_directive_use_repeat1,
    ACTIONS(111), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1465] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym_include,
    STATE(34), 1,
      aux_sym_directive_option_repeat1,
    ACTIONS(113), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1491] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_directive_option_repeat1,
    STATE(34), 1,
      sym_include,
    ACTIONS(117), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1517] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_directive_use_repeat1,
    STATE(35), 1,
      sym_include,
    ACTIONS(119), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1543] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_directive_use_repeat1,
    STATE(36), 1,
      sym_include,
    ACTIONS(121), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1569] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(37), 1,
      sym_include,
    ACTIONS(123), 9,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1590] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(33), 1,
      sym_option,
    STATE(38), 1,
      sym_include,
    ACTIONS(125), 8,
      anon_sym_explterm,
      anon_sym_noimplicit,
      anon_sym_noautofinal,
      anon_sym_keepassert,
      anon_sym_xbim,
      anon_sym_fctasproc,
      anon_sym_tagpriv,
      anon_sym_dynonly,
  [1613] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(39), 1,
      sym_include,
    STATE(43), 1,
      sym_option,
    ACTIONS(125), 8,
      anon_sym_explterm,
      anon_sym_noimplicit,
      anon_sym_noautofinal,
      anon_sym_keepassert,
      anon_sym_xbim,
      anon_sym_fctasproc,
      anon_sym_tagpriv,
      anon_sym_dynonly,
  [1636] = 9,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_integer,
    ACTIONS(129), 1,
      sym_real,
    STATE(40), 1,
      sym_include,
    STATE(152), 1,
      sym_value,
    ACTIONS(131), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 2,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
    STATE(156), 2,
      sym_bool,
      sym_quoted_string,
  [1667] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(41), 1,
      sym_include,
    ACTIONS(135), 9,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1688] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_include,
    ACTIONS(137), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1711] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(43), 1,
      sym_include,
    ACTIONS(102), 9,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1732] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_include,
    ACTIONS(141), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1755] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(45), 1,
      sym_include,
    ACTIONS(97), 9,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1776] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(145), 1,
      anon_sym_any,
    STATE(46), 1,
      sym_include,
    STATE(81), 2,
      sym_basic_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1802] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(147), 1,
      anon_sym_any,
    STATE(47), 1,
      sym_include,
    STATE(65), 2,
      sym_basic_type,
      sym_user_or_external_type,
    ACTIONS(31), 4,
      anon_sym_integer,
      anon_sym_real,
      anon_sym_string,
      anon_sym_boolean,
  [1828] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_include,
    ACTIONS(149), 7,
      anon_sym_end_DASHmodel,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1850] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(49), 1,
      sym_include,
    ACTIONS(153), 8,
      anon_sym_end_DASHmodel,
      anon_sym_SEMI,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1870] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(50), 1,
      sym_include,
    ACTIONS(155), 7,
      anon_sym_end_DASHmodel,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1889] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(47), 1,
      sym_integer,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(51), 1,
      sym_include,
    STATE(62), 1,
      sym_range,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [1914] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(52), 1,
      sym_include,
    ACTIONS(161), 7,
      anon_sym_end_DASHmodel,
      anon_sym_uses,
      anon_sym_imports,
      anon_sym_options,
      anon_sym_version,
      anon_sym_parameters,
      anon_sym_declarations,
  [1933] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(53), 1,
      sym_include,
    ACTIONS(165), 2,
      anon_sym_or,
      sym_identifier,
    ACTIONS(163), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [1953] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(54), 1,
      sym_include,
    ACTIONS(169), 2,
      anon_sym_or,
      sym_identifier,
    ACTIONS(167), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [1973] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(55), 1,
      sym_include,
    ACTIONS(173), 2,
      anon_sym_or,
      sym_identifier,
    ACTIONS(171), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [1993] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(56), 1,
      sym_include,
    ACTIONS(177), 2,
      anon_sym_or,
      sym_identifier,
    ACTIONS(175), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2013] = 9,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_set,
    ACTIONS(181), 1,
      anon_sym_range,
    ACTIONS(183), 1,
      anon_sym_array,
    STATE(57), 1,
      sym_include,
    STATE(70), 1,
      sym_simple_set_type,
    STATE(103), 1,
      sym_simple_range_type,
    STATE(104), 1,
      sym_simple_array_type,
  [2041] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(58), 1,
      sym_include,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2060] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(191), 1,
      anon_sym_or,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(59), 1,
      sym_include,
    STATE(128), 1,
      sym_unioned_types,
    ACTIONS(189), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2083] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(123), 1,
      sym_declaration_definition,
    ACTIONS(195), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
    STATE(60), 2,
      sym_include,
      aux_sym__declarations_repeat1,
  [2104] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(202), 1,
      anon_sym_or,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(200), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
    STATE(61), 2,
      sym_include,
      aux_sym_unioned_types_repeat1,
  [2125] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(62), 1,
      sym_include,
    ACTIONS(207), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2144] = 7,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_model,
    STATE(142), 1,
      sym__definition,
    STATE(143), 1,
      sym_model_definition,
    STATE(63), 2,
      sym_include,
      aux_sym_source_file_repeat1,
  [2167] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(64), 1,
      sym_include,
    ACTIONS(216), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2186] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(222), 1,
      anon_sym_or,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(65), 1,
      sym_include,
    STATE(67), 1,
      aux_sym_unioned_types_repeat1,
    ACTIONS(220), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2209] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(191), 1,
      anon_sym_or,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(66), 1,
      sym_include,
    STATE(101), 1,
      sym_unioned_types,
    ACTIONS(226), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2232] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(222), 1,
      anon_sym_or,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(61), 1,
      aux_sym_unioned_types_repeat1,
    STATE(67), 1,
      sym_include,
    ACTIONS(230), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2255] = 8,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_model,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_include,
    STATE(142), 1,
      sym__definition,
    STATE(143), 1,
      sym_model_definition,
  [2280] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(191), 1,
      anon_sym_or,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(69), 1,
      sym_include,
    STATE(121), 1,
      sym_unioned_types,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2303] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(70), 1,
      sym_include,
    ACTIONS(240), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2322] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(71), 1,
      sym_include,
    ACTIONS(244), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2341] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(72), 1,
      sym_include,
    ACTIONS(248), 4,
      anon_sym_COMMA,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2360] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(191), 1,
      anon_sym_or,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(73), 1,
      sym_include,
    STATE(133), 1,
      sym_unioned_types,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2383] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(191), 1,
      anon_sym_or,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(74), 1,
      sym_include,
    STATE(99), 1,
      sym_unioned_types,
    ACTIONS(256), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2406] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(260), 1,
      anon_sym_end_DASHdeclarations,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym__declarations_repeat1,
    STATE(75), 1,
      sym_include,
    STATE(123), 1,
      sym_declaration_definition,
  [2428] = 7,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(76), 1,
      sym_include,
    STATE(127), 1,
      aux_sym_declaration_definition_repeat1,
  [2450] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(272), 1,
      sym_identifier,
    STATE(77), 1,
      sym_include,
    ACTIONS(270), 3,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2468] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(274), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(78), 1,
      sym_include,
    STATE(85), 1,
      aux_sym__parameters_repeat1,
    STATE(150), 1,
      sym_parameter_definition,
  [2490] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(79), 1,
      sym_include,
    ACTIONS(278), 3,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2508] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_end_DASHrecord,
    STATE(80), 1,
      sym_include,
    STATE(83), 1,
      aux_sym__declarations_repeat1,
    STATE(123), 1,
      sym_declaration_definition,
  [2530] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    STATE(81), 1,
      sym_include,
    ACTIONS(200), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
    ACTIONS(205), 2,
      anon_sym_or,
      sym_identifier,
  [2548] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(82), 1,
      sym_include,
    ACTIONS(284), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2568] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_end_DASHrecord,
    STATE(60), 1,
      aux_sym__declarations_repeat1,
    STATE(83), 1,
      sym_include,
    STATE(123), 1,
      sym_declaration_definition,
  [2590] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(84), 1,
      sym_include,
    ACTIONS(292), 3,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2608] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(296), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(150), 1,
      sym_parameter_definition,
    STATE(85), 2,
      sym_include,
      aux_sym__parameters_repeat1,
  [2628] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(86), 1,
      sym_include,
    ACTIONS(301), 3,
      anon_sym_end_DASHdeclarations,
      anon_sym_RPAREN,
      anon_sym_end_DASHrecord,
  [2646] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_end_DASHdeclarations,
    STATE(75), 1,
      aux_sym__declarations_repeat1,
    STATE(87), 1,
      sym_include,
    STATE(123), 1,
      sym_declaration_definition,
  [2668] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(88), 1,
      sym_include,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2685] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(89), 1,
      sym_include,
    ACTIONS(307), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2702] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(90), 2,
      sym_include,
      aux_sym_declaration_definition_repeat1,
  [2719] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_include,
    STATE(120), 1,
      aux_sym_simple_array_type_repeat1,
  [2738] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_simple_array_type_repeat1,
    STATE(92), 1,
      sym_include,
  [2757] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(93), 1,
      sym_include,
    STATE(184), 1,
      sym_quoted_string,
    ACTIONS(322), 2,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
  [2774] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(94), 1,
      sym_include,
    ACTIONS(175), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2791] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(95), 1,
      sym_include,
    ACTIONS(324), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2808] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(96), 1,
      sym_include,
    ACTIONS(328), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2825] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(97), 1,
      sym_include,
    ACTIONS(226), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2842] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(98), 1,
      sym_include,
    ACTIONS(171), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2859] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(99), 1,
      sym_include,
    ACTIONS(332), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2876] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(100), 1,
      sym_include,
    ACTIONS(167), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2893] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(101), 1,
      sym_include,
    ACTIONS(189), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2910] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(102), 1,
      sym_include,
    ACTIONS(256), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2927] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(103), 1,
      sym_include,
    ACTIONS(336), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2944] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(342), 1,
      sym_identifier,
    STATE(104), 1,
      sym_include,
    ACTIONS(340), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2961] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(105), 1,
      sym_include,
    ACTIONS(344), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2978] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(106), 1,
      sym_include,
    ACTIONS(348), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [2995] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(107), 1,
      sym_include,
    ACTIONS(163), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3012] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(31), 1,
      sym_quoted_string,
    STATE(108), 1,
      sym_include,
    ACTIONS(352), 2,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
  [3029] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(109), 1,
      sym_include,
    ACTIONS(354), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3046] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(32), 1,
      sym_quoted_string,
    STATE(110), 1,
      sym_include,
    ACTIONS(352), 2,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
  [3063] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(78), 1,
      aux_sym__parameters_repeat1,
    STATE(111), 1,
      sym_include,
    STATE(150), 1,
      sym_parameter_definition,
  [3082] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(112), 1,
      sym_include,
    ACTIONS(358), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3099] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(113), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3116] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(114), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3133] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(115), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3150] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(116), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3167] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(117), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3184] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(118), 1,
      sym_include,
    ACTIONS(252), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3201] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end_DASHmodel,
    ACTIONS(75), 1,
      anon_sym_declarations,
    STATE(119), 1,
      sym_include,
    STATE(174), 1,
      sym__declarations,
  [3220] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(120), 2,
      sym_include,
      aux_sym_simple_array_type_repeat1,
  [3237] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(121), 1,
      sym_include,
    ACTIONS(367), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3254] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(373), 1,
      sym_identifier,
    STATE(122), 1,
      sym_include,
    ACTIONS(371), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3271] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(123), 1,
      sym_include,
    ACTIONS(375), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3288] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_include,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3305] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_simple_array_type_repeat1,
    STATE(125), 1,
      sym_include,
  [3324] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_simple_array_type_repeat1,
    STATE(126), 1,
      sym_include,
  [3343] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(90), 1,
      aux_sym_declaration_definition_repeat1,
    STATE(127), 1,
      sym_include,
  [3362] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(128), 1,
      sym_include,
    ACTIONS(387), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3379] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(129), 1,
      sym_include,
    ACTIONS(391), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3396] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(397), 1,
      sym_identifier,
    STATE(130), 1,
      sym_include,
    ACTIONS(395), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3413] = 6,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_declarations,
    ACTIONS(399), 1,
      anon_sym_end_DASHmodel,
    STATE(131), 1,
      sym_include,
    STATE(157), 1,
      sym__declarations,
  [3432] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(45), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_include,
    ACTIONS(352), 2,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
  [3449] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(133), 1,
      sym_include,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3466] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(134), 1,
      sym_include,
    ACTIONS(401), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3483] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(135), 1,
      sym_include,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3500] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(136), 1,
      sym_include,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3517] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(137), 1,
      sym_include,
    ACTIONS(236), 2,
      anon_sym_end_DASHdeclarations,
      anon_sym_end_DASHrecord,
  [3534] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(138), 1,
      sym_include,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3548] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(139), 1,
      sym_include,
    ACTIONS(407), 2,
      anon_sym_end_DASHmodel,
      anon_sym_declarations,
  [3562] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(140), 1,
      sym_include,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3576] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(135), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(141), 1,
      sym_include,
  [3592] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(142), 1,
      sym_include,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3606] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(143), 1,
      sym_include,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3620] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_COLON,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_include,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(145), 1,
      sym_include,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3650] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_array,
    STATE(105), 1,
      sym_simple_array_type,
    STATE(146), 1,
      sym_include,
  [3666] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(147), 1,
      sym_include,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3680] = 5,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_set,
    STATE(70), 1,
      sym_simple_set_type,
    STATE(148), 1,
      sym_include,
  [3696] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(149), 1,
      sym_include,
    ACTIONS(427), 2,
      ts_builtin_sym_end,
      anon_sym_model,
  [3710] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(429), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(150), 1,
      sym_include,
  [3726] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(151), 1,
      sym_include,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3740] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(435), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(152), 1,
      sym_include,
  [3756] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(439), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(153), 1,
      sym_include,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(154), 1,
      sym_include,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3786] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    STATE(155), 1,
      sym_include,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3800] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(445), 1,
      anon_sym_end_DASHparameters,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(156), 1,
      sym_include,
  [3816] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_end_DASHmodel,
    STATE(157), 1,
      sym_include,
  [3829] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_of,
    STATE(158), 1,
      sym_include,
  [3842] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end_DASHmodel,
    STATE(159), 1,
      sym_include,
  [3855] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_integer,
    STATE(160), 1,
      sym_include,
  [3868] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_include,
  [3881] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_include,
  [3894] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_integer,
    STATE(163), 1,
      sym_include,
  [3907] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_end_DASHmodel,
    STATE(164), 1,
      sym_include,
  [3920] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_integer,
    STATE(165), 1,
      sym_include,
  [3933] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_of,
    STATE(166), 1,
      sym_include,
  [3946] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_include,
  [3959] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_include,
  [3972] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_end_DASHmodel,
    STATE(169), 1,
      sym_include,
  [3985] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_of,
    STATE(170), 1,
      sym_include,
  [3998] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    STATE(171), 1,
      sym_include,
  [4011] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_include,
  [4024] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(173), 1,
      sym_include,
  [4037] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_end_DASHmodel,
    STATE(174), 1,
      sym_include,
  [4050] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_include,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(175), 1,
      sym_include,
  [4063] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_include,
  [4076] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_of,
    STATE(177), 1,
      sym_include,
  [4089] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_include,
  [4102] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_of,
    STATE(179), 1,
      sym_include,
  [4115] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_of,
    STATE(180), 1,
      sym_include,
  [4128] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_integer,
    STATE(181), 1,
      sym_include,
  [4141] = 4,
    ACTIONS(3), 1,
      anon_sym_include,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_include,
  [4154] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [4158] = 1,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 250,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 430,
  [SMALL_STATE(9)] = 483,
  [SMALL_STATE(10)] = 536,
  [SMALL_STATE(11)] = 589,
  [SMALL_STATE(12)] = 639,
  [SMALL_STATE(13)] = 689,
  [SMALL_STATE(14)] = 739,
  [SMALL_STATE(15)] = 789,
  [SMALL_STATE(16)] = 839,
  [SMALL_STATE(17)] = 889,
  [SMALL_STATE(18)] = 939,
  [SMALL_STATE(19)] = 989,
  [SMALL_STATE(20)] = 1038,
  [SMALL_STATE(21)] = 1087,
  [SMALL_STATE(22)] = 1136,
  [SMALL_STATE(23)] = 1173,
  [SMALL_STATE(24)] = 1207,
  [SMALL_STATE(25)] = 1241,
  [SMALL_STATE(26)] = 1272,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1334,
  [SMALL_STATE(29)] = 1365,
  [SMALL_STATE(30)] = 1389,
  [SMALL_STATE(31)] = 1413,
  [SMALL_STATE(32)] = 1439,
  [SMALL_STATE(33)] = 1465,
  [SMALL_STATE(34)] = 1491,
  [SMALL_STATE(35)] = 1517,
  [SMALL_STATE(36)] = 1543,
  [SMALL_STATE(37)] = 1569,
  [SMALL_STATE(38)] = 1590,
  [SMALL_STATE(39)] = 1613,
  [SMALL_STATE(40)] = 1636,
  [SMALL_STATE(41)] = 1667,
  [SMALL_STATE(42)] = 1688,
  [SMALL_STATE(43)] = 1711,
  [SMALL_STATE(44)] = 1732,
  [SMALL_STATE(45)] = 1755,
  [SMALL_STATE(46)] = 1776,
  [SMALL_STATE(47)] = 1802,
  [SMALL_STATE(48)] = 1828,
  [SMALL_STATE(49)] = 1850,
  [SMALL_STATE(50)] = 1870,
  [SMALL_STATE(51)] = 1889,
  [SMALL_STATE(52)] = 1914,
  [SMALL_STATE(53)] = 1933,
  [SMALL_STATE(54)] = 1953,
  [SMALL_STATE(55)] = 1973,
  [SMALL_STATE(56)] = 1993,
  [SMALL_STATE(57)] = 2013,
  [SMALL_STATE(58)] = 2041,
  [SMALL_STATE(59)] = 2060,
  [SMALL_STATE(60)] = 2083,
  [SMALL_STATE(61)] = 2104,
  [SMALL_STATE(62)] = 2125,
  [SMALL_STATE(63)] = 2144,
  [SMALL_STATE(64)] = 2167,
  [SMALL_STATE(65)] = 2186,
  [SMALL_STATE(66)] = 2209,
  [SMALL_STATE(67)] = 2232,
  [SMALL_STATE(68)] = 2255,
  [SMALL_STATE(69)] = 2280,
  [SMALL_STATE(70)] = 2303,
  [SMALL_STATE(71)] = 2322,
  [SMALL_STATE(72)] = 2341,
  [SMALL_STATE(73)] = 2360,
  [SMALL_STATE(74)] = 2383,
  [SMALL_STATE(75)] = 2406,
  [SMALL_STATE(76)] = 2428,
  [SMALL_STATE(77)] = 2450,
  [SMALL_STATE(78)] = 2468,
  [SMALL_STATE(79)] = 2490,
  [SMALL_STATE(80)] = 2508,
  [SMALL_STATE(81)] = 2530,
  [SMALL_STATE(82)] = 2548,
  [SMALL_STATE(83)] = 2568,
  [SMALL_STATE(84)] = 2590,
  [SMALL_STATE(85)] = 2608,
  [SMALL_STATE(86)] = 2628,
  [SMALL_STATE(87)] = 2646,
  [SMALL_STATE(88)] = 2668,
  [SMALL_STATE(89)] = 2685,
  [SMALL_STATE(90)] = 2702,
  [SMALL_STATE(91)] = 2719,
  [SMALL_STATE(92)] = 2738,
  [SMALL_STATE(93)] = 2757,
  [SMALL_STATE(94)] = 2774,
  [SMALL_STATE(95)] = 2791,
  [SMALL_STATE(96)] = 2808,
  [SMALL_STATE(97)] = 2825,
  [SMALL_STATE(98)] = 2842,
  [SMALL_STATE(99)] = 2859,
  [SMALL_STATE(100)] = 2876,
  [SMALL_STATE(101)] = 2893,
  [SMALL_STATE(102)] = 2910,
  [SMALL_STATE(103)] = 2927,
  [SMALL_STATE(104)] = 2944,
  [SMALL_STATE(105)] = 2961,
  [SMALL_STATE(106)] = 2978,
  [SMALL_STATE(107)] = 2995,
  [SMALL_STATE(108)] = 3012,
  [SMALL_STATE(109)] = 3029,
  [SMALL_STATE(110)] = 3046,
  [SMALL_STATE(111)] = 3063,
  [SMALL_STATE(112)] = 3082,
  [SMALL_STATE(113)] = 3099,
  [SMALL_STATE(114)] = 3116,
  [SMALL_STATE(115)] = 3133,
  [SMALL_STATE(116)] = 3150,
  [SMALL_STATE(117)] = 3167,
  [SMALL_STATE(118)] = 3184,
  [SMALL_STATE(119)] = 3201,
  [SMALL_STATE(120)] = 3220,
  [SMALL_STATE(121)] = 3237,
  [SMALL_STATE(122)] = 3254,
  [SMALL_STATE(123)] = 3271,
  [SMALL_STATE(124)] = 3288,
  [SMALL_STATE(125)] = 3305,
  [SMALL_STATE(126)] = 3324,
  [SMALL_STATE(127)] = 3343,
  [SMALL_STATE(128)] = 3362,
  [SMALL_STATE(129)] = 3379,
  [SMALL_STATE(130)] = 3396,
  [SMALL_STATE(131)] = 3413,
  [SMALL_STATE(132)] = 3432,
  [SMALL_STATE(133)] = 3449,
  [SMALL_STATE(134)] = 3466,
  [SMALL_STATE(135)] = 3483,
  [SMALL_STATE(136)] = 3500,
  [SMALL_STATE(137)] = 3517,
  [SMALL_STATE(138)] = 3534,
  [SMALL_STATE(139)] = 3548,
  [SMALL_STATE(140)] = 3562,
  [SMALL_STATE(141)] = 3576,
  [SMALL_STATE(142)] = 3592,
  [SMALL_STATE(143)] = 3606,
  [SMALL_STATE(144)] = 3620,
  [SMALL_STATE(145)] = 3636,
  [SMALL_STATE(146)] = 3650,
  [SMALL_STATE(147)] = 3666,
  [SMALL_STATE(148)] = 3680,
  [SMALL_STATE(149)] = 3696,
  [SMALL_STATE(150)] = 3710,
  [SMALL_STATE(151)] = 3726,
  [SMALL_STATE(152)] = 3740,
  [SMALL_STATE(153)] = 3756,
  [SMALL_STATE(154)] = 3772,
  [SMALL_STATE(155)] = 3786,
  [SMALL_STATE(156)] = 3800,
  [SMALL_STATE(157)] = 3816,
  [SMALL_STATE(158)] = 3829,
  [SMALL_STATE(159)] = 3842,
  [SMALL_STATE(160)] = 3855,
  [SMALL_STATE(161)] = 3868,
  [SMALL_STATE(162)] = 3881,
  [SMALL_STATE(163)] = 3894,
  [SMALL_STATE(164)] = 3907,
  [SMALL_STATE(165)] = 3920,
  [SMALL_STATE(166)] = 3933,
  [SMALL_STATE(167)] = 3946,
  [SMALL_STATE(168)] = 3959,
  [SMALL_STATE(169)] = 3972,
  [SMALL_STATE(170)] = 3985,
  [SMALL_STATE(171)] = 3998,
  [SMALL_STATE(172)] = 4011,
  [SMALL_STATE(173)] = 4024,
  [SMALL_STATE(174)] = 4037,
  [SMALL_STATE(175)] = 4050,
  [SMALL_STATE(176)] = 4063,
  [SMALL_STATE(177)] = 4076,
  [SMALL_STATE(178)] = 4089,
  [SMALL_STATE(179)] = 4102,
  [SMALL_STATE(180)] = 4115,
  [SMALL_STATE(181)] = 4128,
  [SMALL_STATE(182)] = 4141,
  [SMALL_STATE(183)] = 4154,
  [SMALL_STATE(184)] = 4158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(108),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(110),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(38),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(163),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_use_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_use_repeat1, 2), SHIFT_REPEAT(132),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_option_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_option_repeat1, 2), SHIFT_REPEAT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_use, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_option, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_option, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_use, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_version, 2, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_version, 4, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_version, 6, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_range_type, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_range_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mp_type, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mp_type, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_or_external_type, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_or_external_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elementary_type, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elementary_type, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set_type, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_set_type, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 4, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 4, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 2), SHIFT_REPEAT(76),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unioned_types_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unioned_types_repeat1, 2), SHIFT_REPEAT(46),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unioned_types_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_range_type, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_range_type, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unioned_types, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unioned_types, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 3, .production_id = 7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 3, .production_id = 7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unioned_types, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unioned_types, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 5, .production_id = 9),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 5, .production_id = 9),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_set_type, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_set_type, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set_type, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_set_type, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 12),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 4, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 4, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 3, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 3, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_array_type, 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_array_type, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_type, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_type, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_type, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_type, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_type, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_type, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(162),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_array_type, 7),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_array_type, 7),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 15),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5, .production_id = 15),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_definition_repeat1, 2, .production_id = 8), SHIFT_REPEAT(175),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_definition_repeat1, 2, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_type, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_type, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 4, .production_id = 6),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 4, .production_id = 6),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_range_type, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_range_type, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_array_type, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashmap_array_type, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashmap_array_type, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 16),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6, .production_id = 16),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_type, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_type, 1),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_array_type_repeat1, 2), SHIFT_REPEAT(10),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_array_type_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 6, .production_id = 9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 6, .production_id = 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_type, 4, .production_id = 13),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_type, 4, .production_id = 13),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__declarations_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__declarations_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_definition, 5, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_definition, 5, .production_id = 7),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 11),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3, .production_id = 11),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_type, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_type, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 5, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 6, .production_id = 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 4, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration_or_expression, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 3, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameters_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_definition_repeat1, 2, .production_id = 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_definition, 3, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_definition, 3, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration_or_expression, 3, .production_id = 14),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declarations, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [487] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mosel(void) {
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
