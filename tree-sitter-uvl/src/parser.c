#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 453
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 2
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 53

enum {
  sym_name = 1,
  anon_sym_cardinality = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_as = 6,
  anon_sym_namespace = 7,
  anon_sym_LBRACK = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_STAR = 10,
  anon_sym_RBRACK = 11,
  anon_sym_constraint = 12,
  anon_sym_constraints = 13,
  anon_sym_from = 14,
  anon_sym_COLON = 15,
  anon_sym_QMARK = 16,
  anon_sym_GT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_DASH = 21,
  sym_version_number = 22,
  sym_versions = 23,
  anon_sym_BANG = 24,
  anon_sym_PIPE = 25,
  anon_sym_AMP = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_LT_EQ_GT = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_PLUS = 30,
  anon_sym_SLASH = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  sym_number = 36,
  sym_comment = 37,
  anon_sym_DOT = 38,
  anon_sym_or = 39,
  anon_sym_alternative = 40,
  anon_sym_mandatory = 41,
  anon_sym_optional = 42,
  anon_sym_Boolean = 43,
  anon_sym_Arithmetic = 44,
  anon_sym_Type = 45,
  anon_sym_group_DASHcardinality = 46,
  anon_sym_feature_DASHcardinality = 47,
  anon_sym_aggregate_DASHfunction = 48,
  anon_sym_type_DASHconstraints = 49,
  anon_sym_string_DASHconstraints = 50,
  anon_sym_numeric_DASHconstraints = 51,
  anon_sym_versioning = 52,
  anon_sym_Real = 53,
  anon_sym_Integer = 54,
  anon_sym_String = 55,
  anon_sym_SQUOTE = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_string_name_token1 = 58,
  sym_string_content = 59,
  sym_imports = 60,
  sym_features = 61,
  sym_include = 62,
  sym_int = 63,
  sym__indent = 64,
  sym__dedent = 65,
  sym__newline = 66,
  sym_source_file = 67,
  sym_blk = 68,
  sym_attributes = 69,
  sym__header = 70,
  sym_typed_feature = 71,
  sym_ref = 72,
  sym_namespace = 73,
  sym_incomplete_namespace = 74,
  sym_incomplete_ref = 75,
  sym_cardinality = 76,
  sym_attribute_constraint = 77,
  sym_attribute_constraints = 78,
  sym_attribute_value = 79,
  sym__attribute = 80,
  sym__value = 81,
  sym__expr = 82,
  sym_versions_blk = 83,
  sym_version_feature = 84,
  sym_version_line = 85,
  sym_versioned_ref = 86,
  sym_version = 87,
  sym_unary_expr = 88,
  sym_binary_expr = 89,
  sym_nested_expr = 90,
  sym_function = 91,
  sym_vector = 92,
  sym_bool = 93,
  sym_path = 94,
  sym_lang_lvl = 95,
  sym_group_mode = 96,
  sym_major_lvl = 97,
  sym_minor_lvl = 98,
  sym_type = 99,
  sym_string = 100,
  sym_string_name = 101,
  sym_constraints = 102,
  sym__any_name = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_blk_repeat1 = 105,
  aux_sym_attributes_repeat1 = 106,
  aux_sym_attribute_constraints_repeat1 = 107,
  aux_sym_versions_blk_repeat1 = 108,
  aux_sym_version_feature_repeat1 = 109,
  aux_sym_version_line_repeat1 = 110,
  aux_sym_function_repeat1 = 111,
  aux_sym_vector_repeat1 = 112,
  aux_sym_path_repeat1 = 113,
  aux_sym_lang_lvl_repeat1 = 114,
  alias_sym_attrib_expr = 115,
  alias_sym_constraint = 116,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_cardinality] = "cardinality",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_RBRACK] = "]",
  [anon_sym_constraint] = "constraint",
  [anon_sym_constraints] = "constraints",
  [anon_sym_from] = "from",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DASH] = "-",
  [sym_version_number] = "version_number",
  [sym_versions] = "versions",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [anon_sym_or] = "or",
  [anon_sym_alternative] = "alternative",
  [anon_sym_mandatory] = "mandatory",
  [anon_sym_optional] = "optional",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Arithmetic] = "Arithmetic",
  [anon_sym_Type] = "Type",
  [anon_sym_group_DASHcardinality] = "group-cardinality",
  [anon_sym_feature_DASHcardinality] = "feature-cardinality",
  [anon_sym_aggregate_DASHfunction] = "aggregate-function",
  [anon_sym_type_DASHconstraints] = "type-constraints",
  [anon_sym_string_DASHconstraints] = "string-constraints",
  [anon_sym_numeric_DASHconstraints] = "numeric-constraints",
  [anon_sym_versioning] = "versioning",
  [anon_sym_Real] = "Real",
  [anon_sym_Integer] = "Integer",
  [anon_sym_String] = "String",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_name_token1] = "string_name_token1",
  [sym_string_content] = "string_content",
  [sym_imports] = "imports",
  [sym_features] = "features",
  [sym_include] = "include",
  [sym_int] = "int",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_blk] = "blk",
  [sym_attributes] = "attributes",
  [sym__header] = "_header",
  [sym_typed_feature] = "typed_feature",
  [sym_ref] = "ref",
  [sym_namespace] = "namespace",
  [sym_incomplete_namespace] = "incomplete_namespace",
  [sym_incomplete_ref] = "incomplete_ref",
  [sym_cardinality] = "cardinality",
  [sym_attribute_constraint] = "attribute_constraint",
  [sym_attribute_constraints] = "attribute_constraints",
  [sym_attribute_value] = "attribute_value",
  [sym__attribute] = "_attribute",
  [sym__value] = "_value",
  [sym__expr] = "_expr",
  [sym_versions_blk] = "versions_blk",
  [sym_version_feature] = "version_feature",
  [sym_version_line] = "version_line",
  [sym_versioned_ref] = "versioned_ref",
  [sym_version] = "version",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_nested_expr] = "nested_expr",
  [sym_function] = "function",
  [sym_vector] = "vector",
  [sym_bool] = "bool",
  [sym_path] = "path",
  [sym_lang_lvl] = "lang_lvl",
  [sym_group_mode] = "group_mode",
  [sym_major_lvl] = "major_lvl",
  [sym_minor_lvl] = "minor_lvl",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym_string_name] = "name",
  [sym_constraints] = "constraints",
  [sym__any_name] = "_any_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_blk_repeat1] = "blk_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_constraints_repeat1] = "attribute_constraints_repeat1",
  [aux_sym_versions_blk_repeat1] = "versions_blk_repeat1",
  [aux_sym_version_feature_repeat1] = "version_feature_repeat1",
  [aux_sym_version_line_repeat1] = "version_line_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_lang_lvl_repeat1] = "lang_lvl_repeat1",
  [alias_sym_attrib_expr] = "attrib_expr",
  [alias_sym_constraint] = "constraint",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_cardinality] = anon_sym_cardinality,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_constraints] = anon_sym_constraints,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_version_number] = sym_version_number,
  [sym_versions] = sym_versions,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_alternative] = anon_sym_alternative,
  [anon_sym_mandatory] = anon_sym_mandatory,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Arithmetic] = anon_sym_Arithmetic,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_group_DASHcardinality] = anon_sym_group_DASHcardinality,
  [anon_sym_feature_DASHcardinality] = anon_sym_feature_DASHcardinality,
  [anon_sym_aggregate_DASHfunction] = anon_sym_aggregate_DASHfunction,
  [anon_sym_type_DASHconstraints] = anon_sym_type_DASHconstraints,
  [anon_sym_string_DASHconstraints] = anon_sym_string_DASHconstraints,
  [anon_sym_numeric_DASHconstraints] = anon_sym_numeric_DASHconstraints,
  [anon_sym_versioning] = anon_sym_versioning,
  [anon_sym_Real] = anon_sym_Real,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_name_token1] = aux_sym_string_name_token1,
  [sym_string_content] = sym_string_content,
  [sym_imports] = sym_imports,
  [sym_features] = sym_features,
  [sym_include] = sym_include,
  [sym_int] = sym_int,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_blk] = sym_blk,
  [sym_attributes] = sym_attributes,
  [sym__header] = sym__header,
  [sym_typed_feature] = sym_typed_feature,
  [sym_ref] = sym_ref,
  [sym_namespace] = sym_namespace,
  [sym_incomplete_namespace] = sym_incomplete_namespace,
  [sym_incomplete_ref] = sym_incomplete_ref,
  [sym_cardinality] = sym_cardinality,
  [sym_attribute_constraint] = sym_attribute_constraint,
  [sym_attribute_constraints] = sym_attribute_constraints,
  [sym_attribute_value] = sym_attribute_value,
  [sym__attribute] = sym__attribute,
  [sym__value] = sym__value,
  [sym__expr] = sym__expr,
  [sym_versions_blk] = sym_versions_blk,
  [sym_version_feature] = sym_version_feature,
  [sym_version_line] = sym_version_line,
  [sym_versioned_ref] = sym_versioned_ref,
  [sym_version] = sym_version,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_nested_expr] = sym_nested_expr,
  [sym_function] = sym_function,
  [sym_vector] = sym_vector,
  [sym_bool] = sym_bool,
  [sym_path] = sym_path,
  [sym_lang_lvl] = sym_lang_lvl,
  [sym_group_mode] = sym_group_mode,
  [sym_major_lvl] = sym_major_lvl,
  [sym_minor_lvl] = sym_minor_lvl,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym_string_name] = sym_name,
  [sym_constraints] = sym_constraints,
  [sym__any_name] = sym__any_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_blk_repeat1] = aux_sym_blk_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_constraints_repeat1] = aux_sym_attribute_constraints_repeat1,
  [aux_sym_versions_blk_repeat1] = aux_sym_versions_blk_repeat1,
  [aux_sym_version_feature_repeat1] = aux_sym_version_feature_repeat1,
  [aux_sym_version_line_repeat1] = aux_sym_version_line_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_lang_lvl_repeat1] = aux_sym_lang_lvl_repeat1,
  [alias_sym_attrib_expr] = alias_sym_attrib_expr,
  [alias_sym_constraint] = alias_sym_constraint,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_version_number] = {
    .visible = true,
    .named = true,
  },
  [sym_versions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alternative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mandatory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arithmetic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_DASHcardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feature_DASHcardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aggregate_DASHfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numeric_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_versioning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_imports] = {
    .visible = true,
    .named = true,
  },
  [sym_features] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_blk] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_typed_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_versions_blk] = {
    .visible = true,
    .named = true,
  },
  [sym_version_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_version_line] = {
    .visible = true,
    .named = true,
  },
  [sym_versioned_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_group_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_major_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_minor_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym__any_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_blk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_versions_blk_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lang_lvl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attrib_expr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_constraint] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_arg = 2,
  field_attribs = 3,
  field_begin = 4,
  field_cardinality = 5,
  field_child = 6,
  field_condition = 7,
  field_end = 8,
  field_feature = 9,
  field_from = 10,
  field_header = 11,
  field_lhs = 12,
  field_name = 13,
  field_number = 14,
  field_op = 15,
  field_path = 16,
  field_rhs = 17,
  field_tail = 18,
  field_type = 19,
  field_value = 20,
  field_version = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_arg] = "arg",
  [field_attribs] = "attribs",
  [field_begin] = "begin",
  [field_cardinality] = "cardinality",
  [field_child] = "child",
  [field_condition] = "condition",
  [field_end] = "end",
  [field_feature] = "feature",
  [field_from] = "from",
  [field_header] = "header",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_number] = "number",
  [field_op] = "op",
  [field_path] = "path",
  [field_rhs] = "rhs",
  [field_tail] = "tail",
  [field_type] = "type",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 1},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 3},
  [20] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 4},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 1},
  [28] = {.index = 45, .length = 3},
  [29] = {.index = 48, .length = 1},
  [30] = {.index = 49, .length = 3},
  [31] = {.index = 52, .length = 2},
  [32] = {.index = 54, .length = 4},
  [33] = {.index = 58, .length = 5},
  [34] = {.index = 63, .length = 3},
  [35] = {.index = 66, .length = 4},
  [36] = {.index = 70, .length = 4},
  [37] = {.index = 74, .length = 4},
  [38] = {.index = 78, .length = 5},
  [40] = {.index = 83, .length = 1},
  [41] = {.index = 84, .length = 4},
  [42] = {.index = 88, .length = 5},
  [43] = {.index = 93, .length = 5},
  [44] = {.index = 98, .length = 6},
  [45] = {.index = 83, .length = 1},
  [46] = {.index = 104, .length = 1},
  [47] = {.index = 105, .length = 1},
  [48] = {.index = 106, .length = 1},
  [49] = {.index = 107, .length = 2},
  [50] = {.index = 109, .length = 2},
  [51] = {.index = 111, .length = 2},
  [52] = {.index = 113, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_header, 0},
  [3] =
    {field_lhs, 1},
    {field_op, 0},
  [5] =
    {field_attribs, 1},
    {field_header, 0},
  [7] =
    {field_tail, 1},
  [8] =
    {field_name, 1},
    {field_type, 0},
  [10] =
    {field_end, 1},
  [11] =
    {field_name, 0},
  [12] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [15] =
    {field_alias, 2},
    {field_path, 0},
  [17] =
    {field_number, 0},
  [18] =
    {field_tail, 2},
  [19] =
    {field_arg, 2},
    {field_op, 0},
  [21] =
    {field_child, 2},
    {field_child, 3},
    {field_header, 0},
  [24] =
    {field_cardinality, 2},
    {field_header, 0},
  [26] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_header, 0},
  [29] =
    {field_name, 0},
    {field_value, 1},
  [31] =
    {field_attribs, 1},
    {field_child, 2},
    {field_child, 3},
    {field_header, 0},
  [35] =
    {field_name, 0},
    {field_number, 1},
  [37] =
    {field_path, 0},
    {field_version, 2},
  [39] =
    {field_begin, 1},
    {field_end, 3},
  [41] =
    {field_condition, 0},
    {field_path, 1},
    {field_version, 3},
  [44] =
    {field_feature, 0},
  [45] =
    {field_arg, 2},
    {field_op, 0},
    {field_tail, 3},
  [48] =
    {field_arg, 1},
  [49] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_op, 0},
  [52] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [54] =
    {field_child, 2},
    {field_child, 3},
    {field_child, 4},
    {field_header, 0},
  [58] =
    {field_attribs, 1},
    {field_child, 2},
    {field_child, 3},
    {field_child, 4},
    {field_header, 0},
  [63] =
    {field_op, 2},
    {field_path, 0},
    {field_version, 3},
  [66] =
    {field_condition, 0},
    {field_op, 3},
    {field_path, 1},
    {field_version, 4},
  [70] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_op, 0},
    {field_tail, 4},
  [74] =
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_header, 0},
  [78] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_header, 0},
  [83] =
    {field_tail, 3},
  [84] =
    {field_begin, 2},
    {field_end, 4},
    {field_op, 3},
    {field_path, 0},
  [88] =
    {field_begin, 3},
    {field_condition, 0},
    {field_end, 5},
    {field_op, 4},
    {field_path, 1},
  [93] =
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_child, 6},
    {field_header, 0},
  [98] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_child, 6},
    {field_header, 0},
  [104] =
    {field_version, 0},
  [105] =
    {field_tail, 4},
  [106] =
    {field_version, 1},
  [107] =
    {field_version, 0},
    {field_version, 1, .inherited = true},
  [109] =
    {field_version, 0, .inherited = true},
    {field_version, 1, .inherited = true},
  [111] =
    {field_from, 1},
    {field_version, 3},
  [113] =
    {field_from, 1},
    {field_version, 3},
    {field_version, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_constraint,
  },
  [19] = {
    [1] = alias_sym_constraint,
  },
  [21] = {
    [0] = alias_sym_attrib_expr,
  },
  [39] = {
    [2] = alias_sym_constraint,
  },
  [45] = {
    [2] = alias_sym_constraint,
  },
  [47] = {
    [2] = alias_sym_constraint,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expr, 3,
    sym__expr,
    alias_sym_attrib_expr,
    alias_sym_constraint,
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
  [13] = 4,
  [14] = 5,
  [15] = 6,
  [16] = 7,
  [17] = 9,
  [18] = 10,
  [19] = 12,
  [20] = 11,
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
  [35] = 21,
  [36] = 26,
  [37] = 28,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 23,
  [42] = 42,
  [43] = 30,
  [44] = 24,
  [45] = 25,
  [46] = 27,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 42,
  [51] = 47,
  [52] = 31,
  [53] = 32,
  [54] = 48,
  [55] = 40,
  [56] = 33,
  [57] = 34,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 61,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 69,
  [75] = 69,
  [76] = 72,
  [77] = 69,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 80,
  [90] = 87,
  [91] = 88,
  [92] = 80,
  [93] = 82,
  [94] = 84,
  [95] = 87,
  [96] = 96,
  [97] = 80,
  [98] = 81,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 81,
  [104] = 104,
  [105] = 84,
  [106] = 81,
  [107] = 87,
  [108] = 88,
  [109] = 102,
  [110] = 82,
  [111] = 102,
  [112] = 82,
  [113] = 102,
  [114] = 88,
  [115] = 115,
  [116] = 67,
  [117] = 117,
  [118] = 115,
  [119] = 104,
  [120] = 120,
  [121] = 104,
  [122] = 115,
  [123] = 115,
  [124] = 104,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 83,
  [131] = 120,
  [132] = 120,
  [133] = 117,
  [134] = 125,
  [135] = 117,
  [136] = 136,
  [137] = 125,
  [138] = 117,
  [139] = 83,
  [140] = 83,
  [141] = 120,
  [142] = 126,
  [143] = 143,
  [144] = 67,
  [145] = 67,
  [146] = 126,
  [147] = 126,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 143,
  [152] = 152,
  [153] = 153,
  [154] = 143,
  [155] = 155,
  [156] = 156,
  [157] = 143,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 150,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 150,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 150,
  [176] = 163,
  [177] = 165,
  [178] = 164,
  [179] = 168,
  [180] = 158,
  [181] = 160,
  [182] = 169,
  [183] = 170,
  [184] = 152,
  [185] = 163,
  [186] = 149,
  [187] = 187,
  [188] = 188,
  [189] = 174,
  [190] = 161,
  [191] = 148,
  [192] = 153,
  [193] = 167,
  [194] = 171,
  [195] = 155,
  [196] = 172,
  [197] = 173,
  [198] = 165,
  [199] = 164,
  [200] = 187,
  [201] = 168,
  [202] = 158,
  [203] = 160,
  [204] = 169,
  [205] = 170,
  [206] = 152,
  [207] = 149,
  [208] = 174,
  [209] = 161,
  [210] = 148,
  [211] = 153,
  [212] = 212,
  [213] = 167,
  [214] = 171,
  [215] = 155,
  [216] = 172,
  [217] = 173,
  [218] = 165,
  [219] = 164,
  [220] = 168,
  [221] = 158,
  [222] = 160,
  [223] = 169,
  [224] = 170,
  [225] = 152,
  [226] = 163,
  [227] = 149,
  [228] = 174,
  [229] = 161,
  [230] = 148,
  [231] = 153,
  [232] = 167,
  [233] = 171,
  [234] = 155,
  [235] = 172,
  [236] = 173,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 238,
  [241] = 238,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 244,
  [247] = 244,
  [248] = 242,
  [249] = 243,
  [250] = 242,
  [251] = 244,
  [252] = 243,
  [253] = 242,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 260,
  [267] = 260,
  [268] = 264,
  [269] = 260,
  [270] = 264,
  [271] = 271,
  [272] = 104,
  [273] = 273,
  [274] = 115,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 275,
  [279] = 275,
  [280] = 275,
  [281] = 281,
  [282] = 282,
  [283] = 282,
  [284] = 284,
  [285] = 282,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 282,
  [291] = 291,
  [292] = 284,
  [293] = 293,
  [294] = 282,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 117,
  [307] = 307,
  [308] = 308,
  [309] = 125,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 301,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 305,
  [321] = 321,
  [322] = 322,
  [323] = 322,
  [324] = 298,
  [325] = 325,
  [326] = 314,
  [327] = 327,
  [328] = 316,
  [329] = 329,
  [330] = 317,
  [331] = 331,
  [332] = 316,
  [333] = 120,
  [334] = 334,
  [335] = 301,
  [336] = 316,
  [337] = 317,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 313,
  [342] = 298,
  [343] = 308,
  [344] = 319,
  [345] = 345,
  [346] = 317,
  [347] = 313,
  [348] = 298,
  [349] = 308,
  [350] = 319,
  [351] = 351,
  [352] = 313,
  [353] = 308,
  [354] = 319,
  [355] = 355,
  [356] = 301,
  [357] = 27,
  [358] = 358,
  [359] = 359,
  [360] = 23,
  [361] = 361,
  [362] = 361,
  [363] = 363,
  [364] = 24,
  [365] = 25,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 126,
  [370] = 370,
  [371] = 371,
  [372] = 27,
  [373] = 371,
  [374] = 374,
  [375] = 375,
  [376] = 24,
  [377] = 377,
  [378] = 370,
  [379] = 371,
  [380] = 380,
  [381] = 25,
  [382] = 382,
  [383] = 383,
  [384] = 30,
  [385] = 366,
  [386] = 67,
  [387] = 387,
  [388] = 377,
  [389] = 368,
  [390] = 23,
  [391] = 391,
  [392] = 392,
  [393] = 392,
  [394] = 370,
  [395] = 395,
  [396] = 371,
  [397] = 397,
  [398] = 374,
  [399] = 30,
  [400] = 370,
  [401] = 363,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 404,
  [407] = 405,
  [408] = 404,
  [409] = 403,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 410,
  [414] = 403,
  [415] = 415,
  [416] = 411,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 412,
  [422] = 404,
  [423] = 405,
  [424] = 424,
  [425] = 425,
  [426] = 415,
  [427] = 427,
  [428] = 420,
  [429] = 410,
  [430] = 410,
  [431] = 411,
  [432] = 420,
  [433] = 427,
  [434] = 412,
  [435] = 420,
  [436] = 403,
  [437] = 415,
  [438] = 438,
  [439] = 412,
  [440] = 412,
  [441] = 427,
  [442] = 411,
  [443] = 361,
  [444] = 392,
  [445] = 415,
  [446] = 446,
  [447] = 446,
  [448] = 446,
  [449] = 449,
  [450] = 405,
  [451] = 446,
  [452] = 415,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'b'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 43642
    ? (c < 3784
      ? (c < 2759
        ? (c < 2048
          ? (c < 1155
            ? (c < 736
              ? (c < 183
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)))))))
            : (c <= 1159 || (c < 1552
              ? (c < 1471
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)))))
              : (c <= 1562 || (c < 1791
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c < 1770
                    ? (c >= 1759 && c <= 1768)
                    : c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || (c < 2045
                    ? c == 2042
                    : c <= 2045)))))))))
          : (c <= 2093 || (c < 2561
            ? (c < 2474
              ? (c < 2275
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)
                  : (c <= 2183 || (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)))
                : (c <= 2403 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)
                  : (c <= 2444 || (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)))))
              : (c <= 2480 || (c < 2519
                ? (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c < 2507
                    ? (c >= 2503 && c <= 2504)
                    : c <= 2510)))
                : (c <= 2519 || (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c < 2558
                    ? c == 2556
                    : c <= 2558)))))))
            : (c <= 2563 || (c < 2641
              ? (c < 2613
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)))
                : (c <= 2614 || (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))))
              : (c <= 2641 || (c < 2703
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2748
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2757)))))))))))
        : (c <= 2761 || (c < 3174
          ? (c < 2962
            ? (c < 2869
              ? (c < 2817
                ? (c < 2784
                  ? (c < 2768
                    ? (c >= 2763 && c <= 2765)
                    : c <= 2768)
                  : (c <= 2787 || (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)))
                : (c <= 2819 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)))))
              : (c <= 2873 || (c < 2911
                ? (c < 2891
                  ? (c < 2887
                    ? (c >= 2876 && c <= 2884)
                    : c <= 2888)
                  : (c <= 2893 || (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)))
                : (c <= 2915 || (c < 2946
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)
                  : (c <= 2947 || (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)))))))
            : (c <= 2965 || (c < 3046
              ? (c < 2990
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)))
                : (c <= 3001 || (c < 3018
                  ? (c < 3014
                    ? (c >= 3006 && c <= 3010)
                    : c <= 3016)
                  : (c <= 3021 || (c < 3031
                    ? c == 3024
                    : c <= 3031)))))
              : (c <= 3055 || (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3149)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))))))
          : (c <= 3183 || (c < 3457
            ? (c < 3296
              ? (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)))))
              : (c <= 3299 || (c < 3398
                ? (c < 3328
                  ? (c < 3313
                    ? (c >= 3302 && c <= 3311)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3423
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3415)
                  : (c <= 3427 || (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)))))))
            : (c <= 3459 || (c < 3585
              ? (c < 3530
                ? (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || (c < 3520
                    ? c == 3517
                    : c <= 3526)))
                : (c <= 3530 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)))))
              : (c <= 3642 || (c < 3724
                ? (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3776
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))))))))))
      : (c <= 3789 || (c < 8027
        ? (c < 5919
          ? (c < 4696
            ? (c < 3974
              ? (c < 3893
                ? (c < 3840
                  ? (c < 3804
                    ? (c >= 3792 && c <= 3801)
                    : c <= 3807)
                  : (c <= 3840 || (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3881)))
                : (c <= 3893 || (c < 3902
                  ? (c < 3897
                    ? c == 3895
                    : c <= 3897)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)))))
              : (c <= 3991 || (c < 4295
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)))))))
            : (c <= 4696 || (c < 4888
              ? (c < 4792
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)))
                : (c <= 4798 || (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))))
              : (c <= 4954 || (c < 5121
                ? (c < 4992
                  ? (c < 4969
                    ? (c >= 4957 && c <= 4959)
                    : c <= 4977)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))))))))
          : (c <= 5940 || (c < 6752
            ? (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6099)))
                : (c <= 6103 || (c < 6155
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6157 || (c < 6176
                    ? (c >= 6159 && c <= 6169)
                    : c <= 6264)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)))))))
            : (c <= 6780 || (c < 7245
              ? (c < 6912
                ? (c < 6823
                  ? (c < 6800
                    ? (c >= 6783 && c <= 6793)
                    : c <= 6809)
                  : (c <= 6823 || (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)))
                : (c <= 6988 || (c < 7040
                  ? (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)
                  : (c <= 7155 || (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)))))
              : (c <= 7293 || (c < 7424
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 43642
    ? (c < 3792
      ? (c < 2763
        ? (c < 2112
          ? (c < 1162
            ? (c < 748
              ? (c < 186
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 183
                    ? c == 181
                    : c <= 183)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 902
                ? (c < 886
                  ? (c < 768
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)))))))
            : (c <= 1327 || (c < 1568
              ? (c < 1473
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)))))
              : (c <= 1641 || (c < 1808
                ? (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)))
                : (c <= 1866 || (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))))))))
          : (c <= 2139 || (c < 2565
            ? (c < 2482
              ? (c < 2406
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)))
                : (c <= 2415 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))))))
            : (c <= 2570 || (c < 2649
              ? (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))))
              : (c <= 2652 || (c < 2707
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)))))))))))
        : (c <= 2765 || (c < 3200
          ? (c < 2969
            ? (c < 2876
              ? (c < 2821
                ? (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)))))
              : (c <= 2884 || (c < 2918
                ? (c < 2901
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))))))
            : (c <= 2970 || (c < 3072
              ? (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))))
              : (c <= 3084 || (c < 3146
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))))))))
          : (c <= 3203 || (c < 3461
            ? (c < 3302
              ? (c < 3260
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))))
              : (c <= 3311 || (c < 3402
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)))
                : (c <= 3406 || (c < 3430
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)
                  : (c <= 3439 || (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)))))))
            : (c <= 3478 || (c < 3648
              ? (c < 3535
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)))
                : (c <= 3540 || (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)))))
              : (c <= 3662 || (c < 3749
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)))
                : (c <= 3749 || (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))))))))))))
      : (c <= 3801 || (c < 8027
        ? (c < 5952
          ? (c < 4698
            ? (c < 3993
              ? (c < 3895
                ? (c < 3864
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3865 || (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)))))
              : (c <= 4028 || (c < 4301
                ? (c < 4176
                  ? (c < 4096
                    ? c == 4038
                    : c <= 4169)
                  : (c <= 4253 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)))))))
            : (c <= 4701 || (c < 4957
              ? (c < 4800
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)))))
              : (c <= 4959 || (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)))))))))
          : (c <= 5971 || (c < 6783
            ? (c < 6320
              ? (c < 6108
                ? (c < 6002
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6003 || (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)))
                : (c <= 6109 || (c < 6159
                  ? (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)
                  : (c <= 6169 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)))))
              : (c <= 6389 || (c < 6528
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)))))))
            : (c <= 6793 || (c < 7296
              ? (c < 6992
                ? (c < 6832
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6845 || (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)
                  : (c <= 7223 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))))
              : (c <= 7304 || (c < 7960
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)))
                : (c <= 7965 || (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') SKIP(85)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'v') ADVANCE(199);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (sym_name_character_set_1(lookahead)) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (sym_name_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (sym_name_character_set_2(lookahead)) ADVANCE(201);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 79:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(140);
      END_STATE();
    case 84:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(84)
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(86)
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '&') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(122);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '0') ADVANCE(126);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '?') ADVANCE(98);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') SKIP(87)
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (sym_name_character_set_3(lookahead)) ADVANCE(201);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_version_number);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_version_number);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_version_number);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_version_number);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_name_character_set_4(lookahead)) ADVANCE(201);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_version_number);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(138);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(83);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_group_DASHcardinality);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_feature_DASHcardinality);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_aggregate_DASHfunction);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_type_DASHconstraints);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_string_DASHconstraints);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_numeric_DASHconstraints);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(23);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(31);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(24);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(26);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(28);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(27);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(193);
      if (sym_name_character_set_6(lookahead)) ADVANCE(201);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(194);
      if (sym_name_character_set_6(lookahead)) ADVANCE(201);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(166);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(167);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(161);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(162);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(178);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(189);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(165);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(177);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(190);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(168);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(164);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(183);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(169);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(174);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(179);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(196);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(171);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(163);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(184);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(180);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(181);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(173);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(175);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(188);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(197);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(172);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(182);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(186);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(191);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(185);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (sym_name_character_set_4(lookahead)) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(200);
      if (sym_name_character_set_7(lookahead)) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
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
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Real);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_imports);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_include);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_features);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_versions);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_mandatory);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Arithmetic);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_versioning);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_alternative);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_constraints);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 88, .external_lex_state = 2},
  [2] = {.lex_state = 88, .external_lex_state = 2},
  [3] = {.lex_state = 88, .external_lex_state = 2},
  [4] = {.lex_state = 88, .external_lex_state = 3},
  [5] = {.lex_state = 88, .external_lex_state = 3},
  [6] = {.lex_state = 88, .external_lex_state = 3},
  [7] = {.lex_state = 88, .external_lex_state = 3},
  [8] = {.lex_state = 88, .external_lex_state = 3},
  [9] = {.lex_state = 88, .external_lex_state = 3},
  [10] = {.lex_state = 88, .external_lex_state = 3},
  [11] = {.lex_state = 88, .external_lex_state = 3},
  [12] = {.lex_state = 88, .external_lex_state = 3},
  [13] = {.lex_state = 88, .external_lex_state = 3},
  [14] = {.lex_state = 88, .external_lex_state = 3},
  [15] = {.lex_state = 88, .external_lex_state = 3},
  [16] = {.lex_state = 88, .external_lex_state = 3},
  [17] = {.lex_state = 88, .external_lex_state = 3},
  [18] = {.lex_state = 88, .external_lex_state = 3},
  [19] = {.lex_state = 88, .external_lex_state = 3},
  [20] = {.lex_state = 88, .external_lex_state = 3},
  [21] = {.lex_state = 88, .external_lex_state = 4},
  [22] = {.lex_state = 88, .external_lex_state = 4},
  [23] = {.lex_state = 88, .external_lex_state = 4},
  [24] = {.lex_state = 88, .external_lex_state = 4},
  [25] = {.lex_state = 88, .external_lex_state = 4},
  [26] = {.lex_state = 88, .external_lex_state = 4},
  [27] = {.lex_state = 88, .external_lex_state = 4},
  [28] = {.lex_state = 88, .external_lex_state = 4},
  [29] = {.lex_state = 88, .external_lex_state = 4},
  [30] = {.lex_state = 88, .external_lex_state = 4},
  [31] = {.lex_state = 88, .external_lex_state = 2},
  [32] = {.lex_state = 88, .external_lex_state = 2},
  [33] = {.lex_state = 88, .external_lex_state = 2},
  [34] = {.lex_state = 88, .external_lex_state = 2},
  [35] = {.lex_state = 88, .external_lex_state = 5},
  [36] = {.lex_state = 88, .external_lex_state = 5},
  [37] = {.lex_state = 88, .external_lex_state = 5},
  [38] = {.lex_state = 88, .external_lex_state = 5},
  [39] = {.lex_state = 88, .external_lex_state = 2},
  [40] = {.lex_state = 88, .external_lex_state = 2},
  [41] = {.lex_state = 88, .external_lex_state = 5},
  [42] = {.lex_state = 88, .external_lex_state = 2},
  [43] = {.lex_state = 88, .external_lex_state = 5},
  [44] = {.lex_state = 88, .external_lex_state = 5},
  [45] = {.lex_state = 88, .external_lex_state = 5},
  [46] = {.lex_state = 88, .external_lex_state = 5},
  [47] = {.lex_state = 88, .external_lex_state = 2},
  [48] = {.lex_state = 88, .external_lex_state = 2},
  [49] = {.lex_state = 88, .external_lex_state = 2},
  [50] = {.lex_state = 88, .external_lex_state = 3},
  [51] = {.lex_state = 88, .external_lex_state = 3},
  [52] = {.lex_state = 88, .external_lex_state = 3},
  [53] = {.lex_state = 88, .external_lex_state = 3},
  [54] = {.lex_state = 88, .external_lex_state = 3},
  [55] = {.lex_state = 88, .external_lex_state = 3},
  [56] = {.lex_state = 88, .external_lex_state = 3},
  [57] = {.lex_state = 88, .external_lex_state = 3},
  [58] = {.lex_state = 88, .external_lex_state = 6},
  [59] = {.lex_state = 7, .external_lex_state = 7},
  [60] = {.lex_state = 7, .external_lex_state = 8},
  [61] = {.lex_state = 7, .external_lex_state = 8},
  [62] = {.lex_state = 7, .external_lex_state = 8},
  [63] = {.lex_state = 7, .external_lex_state = 8},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 7, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 7},
  [68] = {.lex_state = 7, .external_lex_state = 6},
  [69] = {.lex_state = 7, .external_lex_state = 9},
  [70] = {.lex_state = 7, .external_lex_state = 8},
  [71] = {.lex_state = 7, .external_lex_state = 8},
  [72] = {.lex_state = 7, .external_lex_state = 9},
  [73] = {.lex_state = 7, .external_lex_state = 9},
  [74] = {.lex_state = 7, .external_lex_state = 9},
  [75] = {.lex_state = 7, .external_lex_state = 9},
  [76] = {.lex_state = 7, .external_lex_state = 9},
  [77] = {.lex_state = 7, .external_lex_state = 9},
  [78] = {.lex_state = 7, .external_lex_state = 9},
  [79] = {.lex_state = 88, .external_lex_state = 6},
  [80] = {.lex_state = 7, .external_lex_state = 2},
  [81] = {.lex_state = 7, .external_lex_state = 2},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 7, .external_lex_state = 6},
  [84] = {.lex_state = 7, .external_lex_state = 2},
  [85] = {.lex_state = 7, .external_lex_state = 2},
  [86] = {.lex_state = 7, .external_lex_state = 2},
  [87] = {.lex_state = 7, .external_lex_state = 2},
  [88] = {.lex_state = 7, .external_lex_state = 2},
  [89] = {.lex_state = 7, .external_lex_state = 2},
  [90] = {.lex_state = 7, .external_lex_state = 2},
  [91] = {.lex_state = 7, .external_lex_state = 2},
  [92] = {.lex_state = 7, .external_lex_state = 2},
  [93] = {.lex_state = 7, .external_lex_state = 2},
  [94] = {.lex_state = 7, .external_lex_state = 2},
  [95] = {.lex_state = 7, .external_lex_state = 2},
  [96] = {.lex_state = 7, .external_lex_state = 2},
  [97] = {.lex_state = 7, .external_lex_state = 2},
  [98] = {.lex_state = 7, .external_lex_state = 2},
  [99] = {.lex_state = 7, .external_lex_state = 2},
  [100] = {.lex_state = 7, .external_lex_state = 2},
  [101] = {.lex_state = 88, .external_lex_state = 6},
  [102] = {.lex_state = 7, .external_lex_state = 2},
  [103] = {.lex_state = 7, .external_lex_state = 2},
  [104] = {.lex_state = 7, .external_lex_state = 6},
  [105] = {.lex_state = 7, .external_lex_state = 2},
  [106] = {.lex_state = 7, .external_lex_state = 2},
  [107] = {.lex_state = 7, .external_lex_state = 2},
  [108] = {.lex_state = 7, .external_lex_state = 2},
  [109] = {.lex_state = 7, .external_lex_state = 2},
  [110] = {.lex_state = 7, .external_lex_state = 2},
  [111] = {.lex_state = 7, .external_lex_state = 2},
  [112] = {.lex_state = 7, .external_lex_state = 2},
  [113] = {.lex_state = 7, .external_lex_state = 2},
  [114] = {.lex_state = 7, .external_lex_state = 2},
  [115] = {.lex_state = 7, .external_lex_state = 6},
  [116] = {.lex_state = 7, .external_lex_state = 6},
  [117] = {.lex_state = 7, .external_lex_state = 6},
  [118] = {.lex_state = 7, .external_lex_state = 7},
  [119] = {.lex_state = 7, .external_lex_state = 9},
  [120] = {.lex_state = 7, .external_lex_state = 6},
  [121] = {.lex_state = 7, .external_lex_state = 7},
  [122] = {.lex_state = 7, .external_lex_state = 9},
  [123] = {.lex_state = 7, .external_lex_state = 8},
  [124] = {.lex_state = 7, .external_lex_state = 8},
  [125] = {.lex_state = 7, .external_lex_state = 6},
  [126] = {.lex_state = 7, .external_lex_state = 6},
  [127] = {.lex_state = 7, .external_lex_state = 6},
  [128] = {.lex_state = 88, .external_lex_state = 2},
  [129] = {.lex_state = 88, .external_lex_state = 7},
  [130] = {.lex_state = 88, .external_lex_state = 8},
  [131] = {.lex_state = 88, .external_lex_state = 8},
  [132] = {.lex_state = 88, .external_lex_state = 7},
  [133] = {.lex_state = 88, .external_lex_state = 7},
  [134] = {.lex_state = 88, .external_lex_state = 8},
  [135] = {.lex_state = 88, .external_lex_state = 8},
  [136] = {.lex_state = 7, .external_lex_state = 6},
  [137] = {.lex_state = 88, .external_lex_state = 9},
  [138] = {.lex_state = 88, .external_lex_state = 9},
  [139] = {.lex_state = 88, .external_lex_state = 9},
  [140] = {.lex_state = 88, .external_lex_state = 7},
  [141] = {.lex_state = 88, .external_lex_state = 9},
  [142] = {.lex_state = 88, .external_lex_state = 7},
  [143] = {.lex_state = 7, .external_lex_state = 6},
  [144] = {.lex_state = 88, .external_lex_state = 8},
  [145] = {.lex_state = 88, .external_lex_state = 9},
  [146] = {.lex_state = 88, .external_lex_state = 8},
  [147] = {.lex_state = 88, .external_lex_state = 9},
  [148] = {.lex_state = 7, .external_lex_state = 6},
  [149] = {.lex_state = 7, .external_lex_state = 6},
  [150] = {.lex_state = 88, .external_lex_state = 9},
  [151] = {.lex_state = 88, .external_lex_state = 8},
  [152] = {.lex_state = 7, .external_lex_state = 6},
  [153] = {.lex_state = 7, .external_lex_state = 6},
  [154] = {.lex_state = 88, .external_lex_state = 7},
  [155] = {.lex_state = 7, .external_lex_state = 6},
  [156] = {.lex_state = 7, .external_lex_state = 6},
  [157] = {.lex_state = 88, .external_lex_state = 9},
  [158] = {.lex_state = 7, .external_lex_state = 6},
  [159] = {.lex_state = 88, .external_lex_state = 8},
  [160] = {.lex_state = 7, .external_lex_state = 6},
  [161] = {.lex_state = 7, .external_lex_state = 6},
  [162] = {.lex_state = 88, .external_lex_state = 9},
  [163] = {.lex_state = 7, .external_lex_state = 6},
  [164] = {.lex_state = 7, .external_lex_state = 6},
  [165] = {.lex_state = 7, .external_lex_state = 6},
  [166] = {.lex_state = 88, .external_lex_state = 9},
  [167] = {.lex_state = 7, .external_lex_state = 6},
  [168] = {.lex_state = 7, .external_lex_state = 6},
  [169] = {.lex_state = 7, .external_lex_state = 6},
  [170] = {.lex_state = 7, .external_lex_state = 6},
  [171] = {.lex_state = 7, .external_lex_state = 6},
  [172] = {.lex_state = 7, .external_lex_state = 6},
  [173] = {.lex_state = 7, .external_lex_state = 6},
  [174] = {.lex_state = 7, .external_lex_state = 6},
  [175] = {.lex_state = 88, .external_lex_state = 9},
  [176] = {.lex_state = 88, .external_lex_state = 7},
  [177] = {.lex_state = 88, .external_lex_state = 9},
  [178] = {.lex_state = 88, .external_lex_state = 9},
  [179] = {.lex_state = 88, .external_lex_state = 9},
  [180] = {.lex_state = 88, .external_lex_state = 9},
  [181] = {.lex_state = 88, .external_lex_state = 9},
  [182] = {.lex_state = 88, .external_lex_state = 9},
  [183] = {.lex_state = 88, .external_lex_state = 9},
  [184] = {.lex_state = 88, .external_lex_state = 9},
  [185] = {.lex_state = 88, .external_lex_state = 9},
  [186] = {.lex_state = 88, .external_lex_state = 9},
  [187] = {.lex_state = 88, .external_lex_state = 8},
  [188] = {.lex_state = 88, .external_lex_state = 7},
  [189] = {.lex_state = 88, .external_lex_state = 9},
  [190] = {.lex_state = 88, .external_lex_state = 9},
  [191] = {.lex_state = 88, .external_lex_state = 9},
  [192] = {.lex_state = 88, .external_lex_state = 9},
  [193] = {.lex_state = 88, .external_lex_state = 9},
  [194] = {.lex_state = 88, .external_lex_state = 9},
  [195] = {.lex_state = 88, .external_lex_state = 9},
  [196] = {.lex_state = 88, .external_lex_state = 9},
  [197] = {.lex_state = 88, .external_lex_state = 9},
  [198] = {.lex_state = 88, .external_lex_state = 7},
  [199] = {.lex_state = 88, .external_lex_state = 7},
  [200] = {.lex_state = 88, .external_lex_state = 7},
  [201] = {.lex_state = 88, .external_lex_state = 7},
  [202] = {.lex_state = 88, .external_lex_state = 7},
  [203] = {.lex_state = 88, .external_lex_state = 7},
  [204] = {.lex_state = 88, .external_lex_state = 7},
  [205] = {.lex_state = 88, .external_lex_state = 7},
  [206] = {.lex_state = 88, .external_lex_state = 7},
  [207] = {.lex_state = 88, .external_lex_state = 7},
  [208] = {.lex_state = 88, .external_lex_state = 7},
  [209] = {.lex_state = 88, .external_lex_state = 7},
  [210] = {.lex_state = 88, .external_lex_state = 7},
  [211] = {.lex_state = 88, .external_lex_state = 7},
  [212] = {.lex_state = 88, .external_lex_state = 9},
  [213] = {.lex_state = 88, .external_lex_state = 7},
  [214] = {.lex_state = 88, .external_lex_state = 7},
  [215] = {.lex_state = 88, .external_lex_state = 7},
  [216] = {.lex_state = 88, .external_lex_state = 7},
  [217] = {.lex_state = 88, .external_lex_state = 7},
  [218] = {.lex_state = 88, .external_lex_state = 8},
  [219] = {.lex_state = 88, .external_lex_state = 8},
  [220] = {.lex_state = 88, .external_lex_state = 8},
  [221] = {.lex_state = 88, .external_lex_state = 8},
  [222] = {.lex_state = 88, .external_lex_state = 8},
  [223] = {.lex_state = 88, .external_lex_state = 8},
  [224] = {.lex_state = 88, .external_lex_state = 8},
  [225] = {.lex_state = 88, .external_lex_state = 8},
  [226] = {.lex_state = 88, .external_lex_state = 8},
  [227] = {.lex_state = 88, .external_lex_state = 8},
  [228] = {.lex_state = 88, .external_lex_state = 8},
  [229] = {.lex_state = 88, .external_lex_state = 8},
  [230] = {.lex_state = 88, .external_lex_state = 8},
  [231] = {.lex_state = 88, .external_lex_state = 8},
  [232] = {.lex_state = 88, .external_lex_state = 8},
  [233] = {.lex_state = 88, .external_lex_state = 8},
  [234] = {.lex_state = 88, .external_lex_state = 8},
  [235] = {.lex_state = 88, .external_lex_state = 8},
  [236] = {.lex_state = 88, .external_lex_state = 8},
  [237] = {.lex_state = 88, .external_lex_state = 8},
  [238] = {.lex_state = 88, .external_lex_state = 9},
  [239] = {.lex_state = 88, .external_lex_state = 9},
  [240] = {.lex_state = 88, .external_lex_state = 9},
  [241] = {.lex_state = 88, .external_lex_state = 9},
  [242] = {.lex_state = 7, .external_lex_state = 7},
  [243] = {.lex_state = 7, .external_lex_state = 7},
  [244] = {.lex_state = 7, .external_lex_state = 7},
  [245] = {.lex_state = 7, .external_lex_state = 7},
  [246] = {.lex_state = 7, .external_lex_state = 7},
  [247] = {.lex_state = 7, .external_lex_state = 7},
  [248] = {.lex_state = 7, .external_lex_state = 7},
  [249] = {.lex_state = 7, .external_lex_state = 7},
  [250] = {.lex_state = 7, .external_lex_state = 7},
  [251] = {.lex_state = 7, .external_lex_state = 7},
  [252] = {.lex_state = 7, .external_lex_state = 7},
  [253] = {.lex_state = 7, .external_lex_state = 7},
  [254] = {.lex_state = 7, .external_lex_state = 2},
  [255] = {.lex_state = 7, .external_lex_state = 3},
  [256] = {.lex_state = 7, .external_lex_state = 6},
  [257] = {.lex_state = 7, .external_lex_state = 3},
  [258] = {.lex_state = 7, .external_lex_state = 3},
  [259] = {.lex_state = 13, .external_lex_state = 3},
  [260] = {.lex_state = 13, .external_lex_state = 2},
  [261] = {.lex_state = 7, .external_lex_state = 6},
  [262] = {.lex_state = 13, .external_lex_state = 3},
  [263] = {.lex_state = 13, .external_lex_state = 3},
  [264] = {.lex_state = 13, .external_lex_state = 2},
  [265] = {.lex_state = 13, .external_lex_state = 2},
  [266] = {.lex_state = 13, .external_lex_state = 2},
  [267] = {.lex_state = 13, .external_lex_state = 2},
  [268] = {.lex_state = 13, .external_lex_state = 2},
  [269] = {.lex_state = 13, .external_lex_state = 2},
  [270] = {.lex_state = 13, .external_lex_state = 2},
  [271] = {.lex_state = 7, .external_lex_state = 6},
  [272] = {.lex_state = 7, .external_lex_state = 2},
  [273] = {.lex_state = 7, .external_lex_state = 6},
  [274] = {.lex_state = 7, .external_lex_state = 2},
  [275] = {.lex_state = 7, .external_lex_state = 2},
  [276] = {.lex_state = 7, .external_lex_state = 6},
  [277] = {.lex_state = 7, .external_lex_state = 6},
  [278] = {.lex_state = 7, .external_lex_state = 2},
  [279] = {.lex_state = 7, .external_lex_state = 2},
  [280] = {.lex_state = 7, .external_lex_state = 2},
  [281] = {.lex_state = 7, .external_lex_state = 6},
  [282] = {.lex_state = 7, .external_lex_state = 2},
  [283] = {.lex_state = 7, .external_lex_state = 2},
  [284] = {.lex_state = 7, .external_lex_state = 6},
  [285] = {.lex_state = 7, .external_lex_state = 2},
  [286] = {.lex_state = 7, .external_lex_state = 6},
  [287] = {.lex_state = 13, .external_lex_state = 3},
  [288] = {.lex_state = 7, .external_lex_state = 6},
  [289] = {.lex_state = 7, .external_lex_state = 2},
  [290] = {.lex_state = 7, .external_lex_state = 2},
  [291] = {.lex_state = 13, .external_lex_state = 3},
  [292] = {.lex_state = 7, .external_lex_state = 6},
  [293] = {.lex_state = 13, .external_lex_state = 3},
  [294] = {.lex_state = 7, .external_lex_state = 2},
  [295] = {.lex_state = 13, .external_lex_state = 3},
  [296] = {.lex_state = 7, .external_lex_state = 6},
  [297] = {.lex_state = 7, .external_lex_state = 5},
  [298] = {.lex_state = 13, .external_lex_state = 2},
  [299] = {.lex_state = 7, .external_lex_state = 6},
  [300] = {.lex_state = 0, .external_lex_state = 6},
  [301] = {.lex_state = 0, .external_lex_state = 7},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 7, .external_lex_state = 3},
  [304] = {.lex_state = 0, .external_lex_state = 7},
  [305] = {.lex_state = 0, .external_lex_state = 8},
  [306] = {.lex_state = 88, .external_lex_state = 2},
  [307] = {.lex_state = 7, .external_lex_state = 6},
  [308] = {.lex_state = 13, .external_lex_state = 2},
  [309] = {.lex_state = 88, .external_lex_state = 2},
  [310] = {.lex_state = 7, .external_lex_state = 6},
  [311] = {.lex_state = 7, .external_lex_state = 6},
  [312] = {.lex_state = 7, .external_lex_state = 6},
  [313] = {.lex_state = 13, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 6},
  [315] = {.lex_state = 0, .external_lex_state = 7},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 0, .external_lex_state = 7},
  [318] = {.lex_state = 0, .external_lex_state = 8},
  [319] = {.lex_state = 13, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 8},
  [321] = {.lex_state = 7, .external_lex_state = 6},
  [322] = {.lex_state = 0, .external_lex_state = 8},
  [323] = {.lex_state = 0, .external_lex_state = 8},
  [324] = {.lex_state = 13, .external_lex_state = 2},
  [325] = {.lex_state = 7, .external_lex_state = 3},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 13, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 9},
  [329] = {.lex_state = 13, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 7},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 0, .external_lex_state = 9},
  [333] = {.lex_state = 88, .external_lex_state = 2},
  [334] = {.lex_state = 7, .external_lex_state = 6},
  [335] = {.lex_state = 0, .external_lex_state = 7},
  [336] = {.lex_state = 0, .external_lex_state = 9},
  [337] = {.lex_state = 0, .external_lex_state = 7},
  [338] = {.lex_state = 13, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 6},
  [340] = {.lex_state = 0, .external_lex_state = 6},
  [341] = {.lex_state = 13, .external_lex_state = 2},
  [342] = {.lex_state = 13, .external_lex_state = 2},
  [343] = {.lex_state = 13, .external_lex_state = 2},
  [344] = {.lex_state = 13, .external_lex_state = 2},
  [345] = {.lex_state = 0, .external_lex_state = 8},
  [346] = {.lex_state = 0, .external_lex_state = 7},
  [347] = {.lex_state = 13, .external_lex_state = 2},
  [348] = {.lex_state = 13, .external_lex_state = 2},
  [349] = {.lex_state = 13, .external_lex_state = 2},
  [350] = {.lex_state = 13, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 8},
  [352] = {.lex_state = 13, .external_lex_state = 2},
  [353] = {.lex_state = 13, .external_lex_state = 2},
  [354] = {.lex_state = 13, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 9},
  [356] = {.lex_state = 0, .external_lex_state = 7},
  [357] = {.lex_state = 0, .external_lex_state = 7},
  [358] = {.lex_state = 0, .external_lex_state = 7},
  [359] = {.lex_state = 0, .external_lex_state = 7},
  [360] = {.lex_state = 0, .external_lex_state = 8},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 8},
  [363] = {.lex_state = 0, .external_lex_state = 7},
  [364] = {.lex_state = 0, .external_lex_state = 8},
  [365] = {.lex_state = 0, .external_lex_state = 8},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 8, .external_lex_state = 2},
  [368] = {.lex_state = 0, .external_lex_state = 8},
  [369] = {.lex_state = 88, .external_lex_state = 2},
  [370] = {.lex_state = 0, .external_lex_state = 8},
  [371] = {.lex_state = 0, .external_lex_state = 8},
  [372] = {.lex_state = 0, .external_lex_state = 8},
  [373] = {.lex_state = 0, .external_lex_state = 8},
  [374] = {.lex_state = 0, .external_lex_state = 8},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 0, .external_lex_state = 7},
  [377] = {.lex_state = 0, .external_lex_state = 8},
  [378] = {.lex_state = 0, .external_lex_state = 8},
  [379] = {.lex_state = 0, .external_lex_state = 8},
  [380] = {.lex_state = 7, .external_lex_state = 2},
  [381] = {.lex_state = 0, .external_lex_state = 7},
  [382] = {.lex_state = 0, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 7},
  [385] = {.lex_state = 0, .external_lex_state = 2},
  [386] = {.lex_state = 88, .external_lex_state = 2},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 7},
  [389] = {.lex_state = 0, .external_lex_state = 7},
  [390] = {.lex_state = 0, .external_lex_state = 7},
  [391] = {.lex_state = 8, .external_lex_state = 2},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 8},
  [394] = {.lex_state = 0, .external_lex_state = 8},
  [395] = {.lex_state = 0, .external_lex_state = 8},
  [396] = {.lex_state = 0, .external_lex_state = 8},
  [397] = {.lex_state = 13, .external_lex_state = 8},
  [398] = {.lex_state = 0, .external_lex_state = 7},
  [399] = {.lex_state = 0, .external_lex_state = 8},
  [400] = {.lex_state = 0, .external_lex_state = 8},
  [401] = {.lex_state = 0, .external_lex_state = 8},
  [402] = {.lex_state = 0, .external_lex_state = 7},
  [403] = {.lex_state = 159, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 8},
  [405] = {.lex_state = 0, .external_lex_state = 8},
  [406] = {.lex_state = 0, .external_lex_state = 8},
  [407] = {.lex_state = 0, .external_lex_state = 8},
  [408] = {.lex_state = 0, .external_lex_state = 8},
  [409] = {.lex_state = 159, .external_lex_state = 2},
  [410] = {.lex_state = 0, .external_lex_state = 8},
  [411] = {.lex_state = 0, .external_lex_state = 8},
  [412] = {.lex_state = 0, .external_lex_state = 2},
  [413] = {.lex_state = 0, .external_lex_state = 8},
  [414] = {.lex_state = 159, .external_lex_state = 2},
  [415] = {.lex_state = 154, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 8},
  [417] = {.lex_state = 0, .external_lex_state = 6},
  [418] = {.lex_state = 0, .external_lex_state = 8},
  [419] = {.lex_state = 0, .external_lex_state = 8},
  [420] = {.lex_state = 0, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 8},
  [423] = {.lex_state = 0, .external_lex_state = 8},
  [424] = {.lex_state = 0, .external_lex_state = 2},
  [425] = {.lex_state = 0, .external_lex_state = 2},
  [426] = {.lex_state = 154, .external_lex_state = 2},
  [427] = {.lex_state = 13, .external_lex_state = 2},
  [428] = {.lex_state = 0, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 8},
  [430] = {.lex_state = 0, .external_lex_state = 8},
  [431] = {.lex_state = 0, .external_lex_state = 8},
  [432] = {.lex_state = 0, .external_lex_state = 2},
  [433] = {.lex_state = 13, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 2},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 159, .external_lex_state = 2},
  [437] = {.lex_state = 154, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 13, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 8},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 154, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 8},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 154, .external_lex_state = 2},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_comment = 3,
  ts_external_token_RPAREN = 4,
  ts_external_token_RBRACK = 5,
  ts_external_token_RBRACE = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [9] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_cardinality] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_constraints] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_version_number] = ACTIONS(1),
    [sym_versions] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_alternative] = ACTIONS(1),
    [anon_sym_mandatory] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Arithmetic] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_group_DASHcardinality] = ACTIONS(1),
    [anon_sym_feature_DASHcardinality] = ACTIONS(1),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(1),
    [anon_sym_type_DASHconstraints] = ACTIONS(1),
    [anon_sym_string_DASHconstraints] = ACTIONS(1),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(1),
    [anon_sym_versioning] = ACTIONS(1),
    [anon_sym_Real] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_imports] = ACTIONS(1),
    [sym_features] = ACTIONS(1),
    [sym_include] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(438),
    [sym_blk] = STATE(2),
    [sym__header] = STATE(284),
    [sym_typed_feature] = STATE(284),
    [sym_ref] = STATE(284),
    [sym_namespace] = STATE(284),
    [sym_incomplete_namespace] = STATE(284),
    [sym_incomplete_ref] = STATE(284),
    [sym_cardinality] = STATE(284),
    [sym__expr] = STATE(156),
    [sym_versions_blk] = STATE(2),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(284),
    [sym_group_mode] = STATE(284),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(284),
    [sym__any_name] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [sym_versions] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(43),
    [sym_features] = ACTIONS(43),
    [sym_include] = ACTIONS(43),
  },
  [2] = {
    [sym_blk] = STATE(3),
    [sym__header] = STATE(284),
    [sym_typed_feature] = STATE(284),
    [sym_ref] = STATE(284),
    [sym_namespace] = STATE(284),
    [sym_incomplete_namespace] = STATE(284),
    [sym_incomplete_ref] = STATE(284),
    [sym_cardinality] = STATE(284),
    [sym__expr] = STATE(156),
    [sym_versions_blk] = STATE(3),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(284),
    [sym_group_mode] = STATE(284),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(284),
    [sym__any_name] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [sym_versions] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(43),
    [sym_features] = ACTIONS(43),
    [sym_include] = ACTIONS(43),
  },
  [3] = {
    [sym_blk] = STATE(3),
    [sym__header] = STATE(284),
    [sym_typed_feature] = STATE(284),
    [sym_ref] = STATE(284),
    [sym_namespace] = STATE(284),
    [sym_incomplete_namespace] = STATE(284),
    [sym_incomplete_ref] = STATE(284),
    [sym_cardinality] = STATE(284),
    [sym__expr] = STATE(156),
    [sym_versions_blk] = STATE(3),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(284),
    [sym_group_mode] = STATE(284),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(284),
    [sym__any_name] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_name] = ACTIONS(49),
    [anon_sym_namespace] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_constraints] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(64),
    [sym_versions] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [sym_number] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(82),
    [anon_sym_alternative] = ACTIONS(82),
    [anon_sym_mandatory] = ACTIONS(82),
    [anon_sym_optional] = ACTIONS(82),
    [anon_sym_Boolean] = ACTIONS(85),
    [anon_sym_Arithmetic] = ACTIONS(88),
    [anon_sym_Type] = ACTIONS(88),
    [anon_sym_group_DASHcardinality] = ACTIONS(58),
    [anon_sym_feature_DASHcardinality] = ACTIONS(58),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(58),
    [anon_sym_type_DASHconstraints] = ACTIONS(58),
    [anon_sym_string_DASHconstraints] = ACTIONS(58),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(58),
    [anon_sym_versioning] = ACTIONS(91),
    [anon_sym_Real] = ACTIONS(94),
    [anon_sym_Integer] = ACTIONS(94),
    [anon_sym_String] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym_imports] = ACTIONS(103),
    [sym_features] = ACTIONS(103),
    [sym_include] = ACTIONS(103),
  },
  [4] = {
    [sym_blk] = STATE(6),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(6),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(108),
  },
  [5] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(110),
  },
  [6] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(112),
  },
  [7] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(114),
  },
  [8] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(116),
    [anon_sym_namespace] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_constraints] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(140),
    [anon_sym_false] = ACTIONS(140),
    [sym_number] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(146),
    [anon_sym_alternative] = ACTIONS(146),
    [anon_sym_mandatory] = ACTIONS(146),
    [anon_sym_optional] = ACTIONS(146),
    [anon_sym_Boolean] = ACTIONS(149),
    [anon_sym_Arithmetic] = ACTIONS(152),
    [anon_sym_Type] = ACTIONS(152),
    [anon_sym_group_DASHcardinality] = ACTIONS(125),
    [anon_sym_feature_DASHcardinality] = ACTIONS(125),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(125),
    [anon_sym_type_DASHconstraints] = ACTIONS(125),
    [anon_sym_string_DASHconstraints] = ACTIONS(125),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(125),
    [anon_sym_versioning] = ACTIONS(155),
    [anon_sym_Real] = ACTIONS(158),
    [anon_sym_Integer] = ACTIONS(158),
    [anon_sym_String] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_imports] = ACTIONS(167),
    [sym_features] = ACTIONS(167),
    [sym_include] = ACTIONS(167),
    [sym__dedent] = ACTIONS(170),
  },
  [9] = {
    [sym_blk] = STATE(12),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(12),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(172),
  },
  [10] = {
    [sym_blk] = STATE(11),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(11),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(174),
  },
  [11] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(176),
  },
  [12] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(178),
  },
  [13] = {
    [sym_blk] = STATE(15),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(15),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(180),
  },
  [14] = {
    [sym_blk] = STATE(16),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(16),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(182),
  },
  [15] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(184),
  },
  [16] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(186),
  },
  [17] = {
    [sym_blk] = STATE(19),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(19),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(188),
  },
  [18] = {
    [sym_blk] = STATE(20),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(20),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(190),
  },
  [19] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(192),
  },
  [20] = {
    [sym_blk] = STATE(8),
    [sym__header] = STATE(292),
    [sym_typed_feature] = STATE(292),
    [sym_ref] = STATE(292),
    [sym_namespace] = STATE(292),
    [sym_incomplete_namespace] = STATE(292),
    [sym_incomplete_ref] = STATE(292),
    [sym_cardinality] = STATE(292),
    [sym__expr] = STATE(156),
    [sym_versioned_ref] = STATE(164),
    [sym_unary_expr] = STATE(164),
    [sym_binary_expr] = STATE(164),
    [sym_nested_expr] = STATE(164),
    [sym_function] = STATE(164),
    [sym_bool] = STATE(164),
    [sym_path] = STATE(136),
    [sym_lang_lvl] = STATE(292),
    [sym_group_mode] = STATE(292),
    [sym_major_lvl] = STATE(273),
    [sym_minor_lvl] = STATE(273),
    [sym_type] = STATE(289),
    [sym_string] = STATE(164),
    [sym_string_name] = STATE(68),
    [sym_constraints] = STATE(292),
    [sym__any_name] = STATE(68),
    [aux_sym_blk_repeat1] = STATE(8),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(29),
    [anon_sym_alternative] = ACTIONS(29),
    [anon_sym_mandatory] = ACTIONS(29),
    [anon_sym_optional] = ACTIONS(29),
    [anon_sym_Boolean] = ACTIONS(31),
    [anon_sym_Arithmetic] = ACTIONS(33),
    [anon_sym_Type] = ACTIONS(33),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_versioning] = ACTIONS(35),
    [anon_sym_Real] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_imports] = ACTIONS(106),
    [sym_features] = ACTIONS(106),
    [sym_include] = ACTIONS(106),
    [sym__dedent] = ACTIONS(194),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__indent,
    ACTIONS(196), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(198), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [46] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__indent,
    ACTIONS(202), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(204), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 16,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(210), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 16,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(214), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 16,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(218), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__indent,
    ACTIONS(220), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(222), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 16,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(228), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__indent,
    ACTIONS(230), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(232), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__indent,
    ACTIONS(236), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(238), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 16,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(244), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(248), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(252), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(256), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(260), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__indent,
    ACTIONS(196), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(198), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__indent,
    ACTIONS(220), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(222), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__indent,
    ACTIONS(230), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(232), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__indent,
    ACTIONS(236), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(238), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(272), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(276), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 16,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(210), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(280), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 16,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(244), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 16,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(214), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 16,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(218), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 16,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(228), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(284), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(288), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(292), 20,
      anon_sym_namespace,
      anon_sym_constraints,
      sym_versions,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(280), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(284), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(248), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(252), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(288), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(276), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(256), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 15,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(260), 19,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_versioning,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1611] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_versioning,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_name,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(288), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(33), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(296), 4,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
    ACTIONS(298), 11,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [1665] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(200), 1,
      sym__expr,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(402), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [1728] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(395), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [1790] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(395), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [1852] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(395), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [1914] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(395), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [1976] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(320), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2035] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(395), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2094] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(187), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(305), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(352), 20,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [2186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_name,
    ACTIONS(356), 1,
      anon_sym_cardinality,
    ACTIONS(364), 1,
      anon_sym_DOT,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_path_repeat1,
    STATE(276), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(358), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(360), 3,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(362), 10,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [2229] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2280] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_path,
    STATE(237), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_path,
    STATE(237), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2382] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2433] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2484] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2535] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2586] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2637] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2688] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2739] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_versioning,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      sym_name,
    ACTIONS(406), 1,
      anon_sym_cardinality,
    ACTIONS(408), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(281), 2,
      sym_string_name,
      sym__any_name,
    STATE(288), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(33), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [2781] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(185), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2829] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_path,
    STATE(168), 1,
      sym__expr,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(164), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2877] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      sym__expr,
    STATE(157), 1,
      sym_path,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [2925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 5,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
      sym_name,
    ACTIONS(412), 14,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2955] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_path,
    STATE(169), 1,
      sym__expr,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(164), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3003] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(159), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3051] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(204), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3099] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(205), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3147] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(206), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3195] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(176), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_path,
    STATE(170), 1,
      sym__expr,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(164), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3291] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_path,
    STATE(152), 1,
      sym__expr,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(164), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3339] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_QMARK,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_path,
    STATE(163), 1,
      sym__expr,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(164), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3387] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(166), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3435] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(223), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3483] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(224), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3531] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(212), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3579] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(226), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3627] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(179), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(188), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3723] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(237), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3771] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_versioning,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      sym_name,
    ACTIONS(416), 1,
      anon_sym_cardinality,
    ACTIONS(418), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(281), 2,
      sym_string_name,
      sym__any_name,
    STATE(288), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(33), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [3813] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(239), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3861] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_name,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym_number,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_path,
    STATE(201), 1,
      sym__expr,
    ACTIONS(314), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym_string_name,
      sym__any_name,
    STATE(199), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(422), 4,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(424), 12,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [3943] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(182), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [3991] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(220), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4039] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(183), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4087] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(184), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4135] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(238), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4183] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(175), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4231] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(240), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4279] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(162), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4327] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_name,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_BANG,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_path,
    STATE(241), 1,
      sym__expr,
    ACTIONS(378), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_string_name,
      sym__any_name,
    STATE(178), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4375] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_number,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym_path,
    STATE(225), 1,
      sym__expr,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(134), 2,
      sym_string_name,
      sym__any_name,
    STATE(219), 7,
      sym_versioned_ref,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_string,
  [4423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(296), 3,
      anon_sym_cardinality,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(298), 12,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
      sym_name,
    ACTIONS(352), 14,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_path_repeat1,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 14,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      sym_name,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(142), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(298), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_name,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(424), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_path_repeat1,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(437), 14,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      sym_name,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(142), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(424), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4639] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_name,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(298), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      sym_name,
    ACTIONS(296), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(298), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      sym_name,
    ACTIONS(422), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(424), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DOT,
    STATE(120), 1,
      aux_sym_path_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(362), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 15,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 15,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4814] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_versioning,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      sym_name,
    STATE(281), 2,
      sym_string_name,
      sym__any_name,
    STATE(288), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(33), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [4849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_path_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(362), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(412), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [4903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_path_repeat1,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(437), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_path_repeat1,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(437), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_path_repeat1,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [4987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_path_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(362), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_path_repeat1,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5043] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_as,
    ACTIONS(467), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(463), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
    ACTIONS(469), 9,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_path_repeat1,
    ACTIONS(360), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(362), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_path_repeat1,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(412), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [5155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(412), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DOT,
    STATE(138), 1,
      aux_sym_path_repeat1,
    ACTIONS(439), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(437), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(352), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(352), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [5303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DOT,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(426), 13,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [5349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(484), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(488), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5393] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_function_repeat1,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(514), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(512), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 7,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [5481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(520), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(526), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5549] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(514), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(532), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(534), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(512), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(530), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [5581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACK,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(538), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5627] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    STATE(318), 1,
      aux_sym_attribute_constraints_repeat1,
    ACTIONS(548), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(552), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(554), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(558), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(562), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5707] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_function_repeat1,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LT,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(514), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(532), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(512), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 5,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [5773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(570), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5817] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_function_repeat1,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [5853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(578), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(582), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(510), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(512), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 9,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
  [5945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(588), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(592), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [5989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(596), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(600), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6033] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_function_repeat1,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6069] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(610), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(614), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(608), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(570), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(582), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(538), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(558), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(510), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 8,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
  [6249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 6,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [6276] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 4,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [6305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(488), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6326] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    ACTIONS(548), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(552), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(554), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6357] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(610), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(614), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(620), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(622), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(608), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(600), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(562), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(484), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(520), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(578), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(588), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(526), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(592), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(596), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(570), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6619] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(610), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(614), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(622), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(608), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(582), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(538), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(558), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(510), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(608), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
  [6759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_SLASH,
    ACTIONS(610), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(608), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [6786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(488), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(600), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(562), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(484), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(520), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6891] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [6922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(578), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(588), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(526), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [6985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(592), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(596), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(570), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(469), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(582), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(538), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(558), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(510), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    ACTIONS(586), 1,
      anon_sym_LT,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
  [7178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    ACTIONS(548), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [7205] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    ACTIONS(548), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(552), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(510), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [7234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(488), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(600), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(562), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(484), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(520), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(578), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(588), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(526), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(592), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(596), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
  [7444] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(556), 1,
      anon_sym_SLASH,
    ACTIONS(548), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(552), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(554), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(544), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7505] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7535] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7565] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(504), 1,
      anon_sym_SLASH,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(494), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_PLUS,
  [7595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7624] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7653] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(315), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7711] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(356), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7740] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(301), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7769] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7798] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7856] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(335), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7885] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7914] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      sym_name,
    ACTIONS(640), 1,
      anon_sym_constraint,
    ACTIONS(642), 1,
      anon_sym_constraints,
    STATE(59), 2,
      sym_string_name,
      sym__any_name,
    STATE(383), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7969] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(668), 1,
      sym__dedent,
    STATE(449), 1,
      sym_path,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(258), 2,
      sym_version_feature,
      aux_sym_versions_blk_repeat1,
  [7993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      sym_name,
    ACTIONS(672), 1,
      anon_sym_cardinality,
    STATE(321), 1,
      sym_path,
    ACTIONS(674), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
  [8017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_name,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(682), 1,
      sym__dedent,
    STATE(449), 1,
      sym_path,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(257), 2,
      sym_version_feature,
      aux_sym_versions_blk_repeat1,
  [8041] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(666), 1,
      sym_name,
    ACTIONS(684), 1,
      sym__dedent,
    STATE(449), 1,
      sym_path,
    STATE(125), 2,
      sym_string_name,
      sym__any_name,
    STATE(257), 2,
      sym_version_feature,
      aux_sym_versions_blk_repeat1,
  [8065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_name,
    ACTIONS(688), 1,
      anon_sym_from,
    ACTIONS(690), 1,
      sym_version_number,
    ACTIONS(692), 1,
      sym__dedent,
    STATE(331), 1,
      sym_version,
    STATE(263), 2,
      sym_version_line,
      aux_sym_version_feature_repeat1,
  [8088] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(400), 1,
      sym_version,
    ACTIONS(696), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(698), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(702), 1,
      sym_name,
    ACTIONS(704), 1,
      anon_sym_cardinality,
    ACTIONS(706), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(312), 2,
      sym_string_name,
      sym__any_name,
  [8130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_name,
    ACTIONS(688), 1,
      anon_sym_from,
    ACTIONS(690), 1,
      sym_version_number,
    ACTIONS(708), 1,
      sym__dedent,
    STATE(331), 1,
      sym_version,
    STATE(259), 2,
      sym_version_line,
      aux_sym_version_feature_repeat1,
  [8153] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_name,
    ACTIONS(713), 1,
      anon_sym_from,
    ACTIONS(716), 1,
      sym_version_number,
    ACTIONS(719), 1,
      sym__dedent,
    STATE(331), 1,
      sym_version,
    STATE(263), 2,
      sym_version_line,
      aux_sym_version_feature_repeat1,
  [8176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(373), 1,
      sym_version,
    ACTIONS(721), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(723), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8197] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(371), 1,
      sym_version,
    ACTIONS(725), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(727), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(394), 1,
      sym_version,
    ACTIONS(729), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(731), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(378), 1,
      sym_version,
    ACTIONS(733), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(735), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(396), 1,
      sym_version,
    ACTIONS(737), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(739), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(370), 1,
      sym_version,
    ACTIONS(741), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(743), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8302] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(379), 1,
      sym_version,
    ACTIONS(745), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(747), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_name,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    ACTIONS(749), 1,
      anon_sym_cardinality,
    ACTIONS(751), 3,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [8341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      sym_name,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(369), 2,
      sym_string_name,
      sym__any_name,
  [8358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DOT,
    STATE(276), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(757), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      sym_name,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(369), 2,
      sym_string_name,
      sym__any_name,
  [8390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      sym_name,
    STATE(447), 1,
      sym_path,
    STATE(309), 2,
      sym_string_name,
      sym__any_name,
  [8407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_DOT,
    STATE(277), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(763), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(277), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(767), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      sym_name,
    STATE(448), 1,
      sym_path,
    STATE(309), 2,
      sym_string_name,
      sym__any_name,
  [8454] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      sym_name,
    STATE(451), 1,
      sym_path,
    STATE(309), 2,
      sym_string_name,
      sym__any_name,
  [8471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    ACTIONS(761), 1,
      sym_name,
    STATE(446), 1,
      sym_path,
    STATE(309), 2,
      sym_string_name,
      sym__any_name,
  [8488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [8498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(772), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
  [8512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym_name,
    ACTIONS(755), 1,
      anon_sym_DQUOTE,
    STATE(369), 2,
      sym_string_name,
      sym__any_name,
  [8526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_cardinality,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym__newline,
    STATE(26), 1,
      sym_attributes,
  [8542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      sym_name,
    STATE(142), 2,
      sym_string_name,
      sym__any_name,
  [8556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [8566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym__dedent,
    ACTIONS(782), 3,
      anon_sym_from,
      sym_version_number,
      sym_name,
  [8578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [8588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(786), 1,
      sym_name,
    STATE(311), 2,
      sym_string_name,
      sym__any_name,
  [8602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      sym_name,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
  [8616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      sym__dedent,
    ACTIONS(788), 3,
      anon_sym_from,
      sym_version_number,
      sym_name,
  [8628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_cardinality,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(796), 1,
      sym__newline,
    STATE(36), 1,
      sym_attributes,
  [8644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym__dedent,
    ACTIONS(798), 3,
      anon_sym_from,
      sym_version_number,
      sym_name,
  [8656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      sym_name,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
  [8670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      sym__dedent,
    ACTIONS(802), 3,
      anon_sym_from,
      sym_version_number,
      sym_name,
  [8682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [8692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      sym__indent,
    ACTIONS(806), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_name,
  [8704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(407), 1,
      sym_version,
  [8717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_version_line_repeat1,
  [8739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_attributes_repeat1,
  [8752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_version_line_repeat1,
  [8765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_name,
  [8774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_attributes_repeat1,
  [8787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RBRACK,
    STATE(322), 1,
      aux_sym_vector_repeat1,
  [8800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 1,
      anon_sym_DOT,
    STATE(306), 1,
      aux_sym_path_repeat1,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(429), 1,
      sym_version,
  [8835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    ACTIONS(838), 1,
      anon_sym_DOT,
    STATE(333), 1,
      aux_sym_path_repeat1,
  [8848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(408), 1,
      sym_version,
  [8888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(846), 1,
      sym__newline,
    STATE(38), 1,
      sym_attributes,
  [8901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      aux_sym_attributes_repeat1,
  [8914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_function_repeat1,
  [8927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_attributes_repeat1,
  [8940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_attribute_constraints_repeat1,
  [8953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(442), 1,
      sym_version,
  [8966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RBRACK,
    STATE(323), 1,
      aux_sym_vector_repeat1,
  [8979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [8988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      aux_sym_vector_repeat1,
  [9001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      aux_sym_vector_repeat1,
  [9014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(405), 1,
      sym_version,
  [9027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 3,
      sym__dedent,
      anon_sym_DQUOTE,
      sym_name,
  [9036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(880), 1,
      sym__newline,
    STATE(29), 1,
      sym_attributes,
  [9049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_name,
    ACTIONS(884), 1,
      sym_version_number,
    STATE(424), 1,
      sym_version,
  [9062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_function_repeat1,
  [9075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_name,
    ACTIONS(690), 1,
      sym_version_number,
    STATE(340), 1,
      sym_version,
  [9088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_attributes_repeat1,
  [9101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      sym__newline,
    STATE(300), 1,
      aux_sym_version_line_repeat1,
  [9114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_function_repeat1,
  [9127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 1,
      anon_sym_DOT,
    STATE(306), 1,
      aux_sym_path_repeat1,
  [9140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [9149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_attributes_repeat1,
  [9162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_function_repeat1,
  [9175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_attributes_repeat1,
  [9188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_name,
    ACTIONS(690), 1,
      sym_version_number,
    STATE(375), 1,
      sym_version,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_version_line_repeat1,
  [9214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      sym__newline,
    STATE(302), 1,
      aux_sym_version_line_repeat1,
  [9227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(404), 1,
      sym_version,
  [9240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(450), 1,
      sym_version,
  [9253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(413), 1,
      sym_version,
  [9266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(416), 1,
      sym_version,
  [9279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_attribute_constraints_repeat1,
  [9292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_attributes_repeat1,
  [9305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(422), 1,
      sym_version,
  [9318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(423), 1,
      sym_version,
  [9331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(430), 1,
      sym_version,
  [9344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(431), 1,
      sym_version,
  [9357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      aux_sym_vector_repeat1,
  [9370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(406), 1,
      sym_version,
  [9383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(410), 1,
      sym_version,
  [9396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_name,
    ACTIONS(700), 1,
      sym_version_number,
    STATE(411), 1,
      sym_version,
  [9409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_function_repeat1,
  [9422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym_attributes_repeat1,
  [9435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 2,
      sym__newline,
      anon_sym_COMMA,
  [9475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_RBRACK,
      anon_sym_DASH,
  [9483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(326), 1,
      sym_cardinality,
  [9517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 2,
      anon_sym_STAR,
      sym_int,
  [9525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [9541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    ACTIONS(960), 1,
      anon_sym_DASH,
  [9551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RBRACK,
    ACTIONS(964), 1,
      anon_sym_DASH,
  [9561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_RBRACK,
    ACTIONS(968), 1,
      anon_sym_DASH,
  [9579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 2,
      sym__newline,
      anon_sym_COMMA,
  [9595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
    ACTIONS(978), 1,
      anon_sym_DASH,
  [9621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    ACTIONS(982), 1,
      anon_sym_DASH,
  [9631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      anon_sym_DQUOTE,
      sym_name,
  [9639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(314), 1,
      sym_cardinality,
  [9681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [9689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_STAR,
    ACTIONS(990), 1,
      sym_int,
  [9731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      sym__newline,
      anon_sym_COMMA,
  [9739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 2,
      anon_sym_RBRACK,
      anon_sym_DASH,
  [9747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
    ACTIONS(996), 1,
      anon_sym_DASH,
  [9757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
    ACTIONS(1000), 1,
      anon_sym_DASH,
  [9775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
  [9785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    ACTIONS(1008), 1,
      anon_sym_DASH,
  [9811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9827] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1014), 1,
      sym_string_content,
  [9834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [9841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
  [9848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
  [9855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
  [9862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
  [9869] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_string_content,
  [9876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      anon_sym_RBRACK,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
  [9890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
  [9897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      anon_sym_RBRACK,
  [9904] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1036), 1,
      sym_string_content,
  [9911] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1038), 1,
      aux_sym_string_name_token1,
  [9918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_RBRACK,
  [9925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      sym__newline,
  [9932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
  [9946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      anon_sym_SQUOTE,
  [9953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      anon_sym_DQUOTE,
  [9960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
  [9967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
  [9974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_COLON,
  [9981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LBRACK,
  [9988] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1058), 1,
      aux_sym_string_name_token1,
  [9995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_version_number,
  [10002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
  [10009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACK,
  [10016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_RBRACK,
  [10023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_RBRACK,
  [10030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_SQUOTE,
  [10037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym_version_number,
  [10044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      anon_sym_DQUOTE,
  [10051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      anon_sym_SQUOTE,
  [10058] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1078), 1,
      sym_string_content,
  [10065] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1080), 1,
      aux_sym_string_name_token1,
  [10072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      ts_builtin_sym_end,
  [10079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_DQUOTE,
  [10086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
  [10093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_version_number,
  [10100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_RBRACK,
  [10107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_COLON,
  [10114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [10121] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1092), 1,
      aux_sym_string_name_token1,
  [10128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_LBRACK,
  [10135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_LBRACK,
  [10142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_LBRACK,
  [10149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__newline,
  [10156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      anon_sym_RBRACK,
  [10163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_LBRACK,
  [10170] = 2,
    ACTIONS(1012), 1,
      sym_comment,
    ACTIONS(1106), 1,
      aux_sym_string_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 46,
  [SMALL_STATE(23)] = 92,
  [SMALL_STATE(24)] = 136,
  [SMALL_STATE(25)] = 180,
  [SMALL_STATE(26)] = 224,
  [SMALL_STATE(27)] = 270,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 536,
  [SMALL_STATE(34)] = 579,
  [SMALL_STATE(35)] = 622,
  [SMALL_STATE(36)] = 667,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 757,
  [SMALL_STATE(39)] = 802,
  [SMALL_STATE(40)] = 845,
  [SMALL_STATE(41)] = 888,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 1017,
  [SMALL_STATE(45)] = 1060,
  [SMALL_STATE(46)] = 1103,
  [SMALL_STATE(47)] = 1146,
  [SMALL_STATE(48)] = 1189,
  [SMALL_STATE(49)] = 1232,
  [SMALL_STATE(50)] = 1275,
  [SMALL_STATE(51)] = 1317,
  [SMALL_STATE(52)] = 1359,
  [SMALL_STATE(53)] = 1401,
  [SMALL_STATE(54)] = 1443,
  [SMALL_STATE(55)] = 1485,
  [SMALL_STATE(56)] = 1527,
  [SMALL_STATE(57)] = 1569,
  [SMALL_STATE(58)] = 1611,
  [SMALL_STATE(59)] = 1665,
  [SMALL_STATE(60)] = 1728,
  [SMALL_STATE(61)] = 1790,
  [SMALL_STATE(62)] = 1852,
  [SMALL_STATE(63)] = 1914,
  [SMALL_STATE(64)] = 1976,
  [SMALL_STATE(65)] = 2035,
  [SMALL_STATE(66)] = 2094,
  [SMALL_STATE(67)] = 2153,
  [SMALL_STATE(68)] = 2186,
  [SMALL_STATE(69)] = 2229,
  [SMALL_STATE(70)] = 2280,
  [SMALL_STATE(71)] = 2331,
  [SMALL_STATE(72)] = 2382,
  [SMALL_STATE(73)] = 2433,
  [SMALL_STATE(74)] = 2484,
  [SMALL_STATE(75)] = 2535,
  [SMALL_STATE(76)] = 2586,
  [SMALL_STATE(77)] = 2637,
  [SMALL_STATE(78)] = 2688,
  [SMALL_STATE(79)] = 2739,
  [SMALL_STATE(80)] = 2781,
  [SMALL_STATE(81)] = 2829,
  [SMALL_STATE(82)] = 2877,
  [SMALL_STATE(83)] = 2925,
  [SMALL_STATE(84)] = 2955,
  [SMALL_STATE(85)] = 3003,
  [SMALL_STATE(86)] = 3051,
  [SMALL_STATE(87)] = 3099,
  [SMALL_STATE(88)] = 3147,
  [SMALL_STATE(89)] = 3195,
  [SMALL_STATE(90)] = 3243,
  [SMALL_STATE(91)] = 3291,
  [SMALL_STATE(92)] = 3339,
  [SMALL_STATE(93)] = 3387,
  [SMALL_STATE(94)] = 3435,
  [SMALL_STATE(95)] = 3483,
  [SMALL_STATE(96)] = 3531,
  [SMALL_STATE(97)] = 3579,
  [SMALL_STATE(98)] = 3627,
  [SMALL_STATE(99)] = 3675,
  [SMALL_STATE(100)] = 3723,
  [SMALL_STATE(101)] = 3771,
  [SMALL_STATE(102)] = 3813,
  [SMALL_STATE(103)] = 3861,
  [SMALL_STATE(104)] = 3909,
  [SMALL_STATE(105)] = 3943,
  [SMALL_STATE(106)] = 3991,
  [SMALL_STATE(107)] = 4039,
  [SMALL_STATE(108)] = 4087,
  [SMALL_STATE(109)] = 4135,
  [SMALL_STATE(110)] = 4183,
  [SMALL_STATE(111)] = 4231,
  [SMALL_STATE(112)] = 4279,
  [SMALL_STATE(113)] = 4327,
  [SMALL_STATE(114)] = 4375,
  [SMALL_STATE(115)] = 4423,
  [SMALL_STATE(116)] = 4456,
  [SMALL_STATE(117)] = 4483,
  [SMALL_STATE(118)] = 4513,
  [SMALL_STATE(119)] = 4545,
  [SMALL_STATE(120)] = 4577,
  [SMALL_STATE(121)] = 4607,
  [SMALL_STATE(122)] = 4639,
  [SMALL_STATE(123)] = 4671,
  [SMALL_STATE(124)] = 4703,
  [SMALL_STATE(125)] = 4735,
  [SMALL_STATE(126)] = 4764,
  [SMALL_STATE(127)] = 4789,
  [SMALL_STATE(128)] = 4814,
  [SMALL_STATE(129)] = 4849,
  [SMALL_STATE(130)] = 4877,
  [SMALL_STATE(131)] = 4903,
  [SMALL_STATE(132)] = 4931,
  [SMALL_STATE(133)] = 4959,
  [SMALL_STATE(134)] = 4987,
  [SMALL_STATE(135)] = 5015,
  [SMALL_STATE(136)] = 5043,
  [SMALL_STATE(137)] = 5073,
  [SMALL_STATE(138)] = 5101,
  [SMALL_STATE(139)] = 5129,
  [SMALL_STATE(140)] = 5155,
  [SMALL_STATE(141)] = 5181,
  [SMALL_STATE(142)] = 5209,
  [SMALL_STATE(143)] = 5232,
  [SMALL_STATE(144)] = 5257,
  [SMALL_STATE(145)] = 5280,
  [SMALL_STATE(146)] = 5303,
  [SMALL_STATE(147)] = 5326,
  [SMALL_STATE(148)] = 5349,
  [SMALL_STATE(149)] = 5371,
  [SMALL_STATE(150)] = 5393,
  [SMALL_STATE(151)] = 5429,
  [SMALL_STATE(152)] = 5453,
  [SMALL_STATE(153)] = 5481,
  [SMALL_STATE(154)] = 5503,
  [SMALL_STATE(155)] = 5527,
  [SMALL_STATE(156)] = 5549,
  [SMALL_STATE(157)] = 5581,
  [SMALL_STATE(158)] = 5605,
  [SMALL_STATE(159)] = 5627,
  [SMALL_STATE(160)] = 5663,
  [SMALL_STATE(161)] = 5685,
  [SMALL_STATE(162)] = 5707,
  [SMALL_STATE(163)] = 5743,
  [SMALL_STATE(164)] = 5773,
  [SMALL_STATE(165)] = 5795,
  [SMALL_STATE(166)] = 5817,
  [SMALL_STATE(167)] = 5853,
  [SMALL_STATE(168)] = 5875,
  [SMALL_STATE(169)] = 5897,
  [SMALL_STATE(170)] = 5919,
  [SMALL_STATE(171)] = 5945,
  [SMALL_STATE(172)] = 5967,
  [SMALL_STATE(173)] = 5989,
  [SMALL_STATE(174)] = 6011,
  [SMALL_STATE(175)] = 6033,
  [SMALL_STATE(176)] = 6069,
  [SMALL_STATE(177)] = 6098,
  [SMALL_STATE(178)] = 6119,
  [SMALL_STATE(179)] = 6140,
  [SMALL_STATE(180)] = 6161,
  [SMALL_STATE(181)] = 6182,
  [SMALL_STATE(182)] = 6203,
  [SMALL_STATE(183)] = 6224,
  [SMALL_STATE(184)] = 6249,
  [SMALL_STATE(185)] = 6276,
  [SMALL_STATE(186)] = 6305,
  [SMALL_STATE(187)] = 6326,
  [SMALL_STATE(188)] = 6357,
  [SMALL_STATE(189)] = 6388,
  [SMALL_STATE(190)] = 6409,
  [SMALL_STATE(191)] = 6430,
  [SMALL_STATE(192)] = 6451,
  [SMALL_STATE(193)] = 6472,
  [SMALL_STATE(194)] = 6493,
  [SMALL_STATE(195)] = 6514,
  [SMALL_STATE(196)] = 6535,
  [SMALL_STATE(197)] = 6556,
  [SMALL_STATE(198)] = 6577,
  [SMALL_STATE(199)] = 6598,
  [SMALL_STATE(200)] = 6619,
  [SMALL_STATE(201)] = 6650,
  [SMALL_STATE(202)] = 6671,
  [SMALL_STATE(203)] = 6692,
  [SMALL_STATE(204)] = 6713,
  [SMALL_STATE(205)] = 6734,
  [SMALL_STATE(206)] = 6759,
  [SMALL_STATE(207)] = 6786,
  [SMALL_STATE(208)] = 6807,
  [SMALL_STATE(209)] = 6828,
  [SMALL_STATE(210)] = 6849,
  [SMALL_STATE(211)] = 6870,
  [SMALL_STATE(212)] = 6891,
  [SMALL_STATE(213)] = 6922,
  [SMALL_STATE(214)] = 6943,
  [SMALL_STATE(215)] = 6964,
  [SMALL_STATE(216)] = 6985,
  [SMALL_STATE(217)] = 7006,
  [SMALL_STATE(218)] = 7027,
  [SMALL_STATE(219)] = 7048,
  [SMALL_STATE(220)] = 7069,
  [SMALL_STATE(221)] = 7090,
  [SMALL_STATE(222)] = 7111,
  [SMALL_STATE(223)] = 7132,
  [SMALL_STATE(224)] = 7153,
  [SMALL_STATE(225)] = 7178,
  [SMALL_STATE(226)] = 7205,
  [SMALL_STATE(227)] = 7234,
  [SMALL_STATE(228)] = 7255,
  [SMALL_STATE(229)] = 7276,
  [SMALL_STATE(230)] = 7297,
  [SMALL_STATE(231)] = 7318,
  [SMALL_STATE(232)] = 7339,
  [SMALL_STATE(233)] = 7360,
  [SMALL_STATE(234)] = 7381,
  [SMALL_STATE(235)] = 7402,
  [SMALL_STATE(236)] = 7423,
  [SMALL_STATE(237)] = 7444,
  [SMALL_STATE(238)] = 7475,
  [SMALL_STATE(239)] = 7505,
  [SMALL_STATE(240)] = 7535,
  [SMALL_STATE(241)] = 7565,
  [SMALL_STATE(242)] = 7595,
  [SMALL_STATE(243)] = 7624,
  [SMALL_STATE(244)] = 7653,
  [SMALL_STATE(245)] = 7682,
  [SMALL_STATE(246)] = 7711,
  [SMALL_STATE(247)] = 7740,
  [SMALL_STATE(248)] = 7769,
  [SMALL_STATE(249)] = 7798,
  [SMALL_STATE(250)] = 7827,
  [SMALL_STATE(251)] = 7856,
  [SMALL_STATE(252)] = 7885,
  [SMALL_STATE(253)] = 7914,
  [SMALL_STATE(254)] = 7943,
  [SMALL_STATE(255)] = 7969,
  [SMALL_STATE(256)] = 7993,
  [SMALL_STATE(257)] = 8017,
  [SMALL_STATE(258)] = 8041,
  [SMALL_STATE(259)] = 8065,
  [SMALL_STATE(260)] = 8088,
  [SMALL_STATE(261)] = 8109,
  [SMALL_STATE(262)] = 8130,
  [SMALL_STATE(263)] = 8153,
  [SMALL_STATE(264)] = 8176,
  [SMALL_STATE(265)] = 8197,
  [SMALL_STATE(266)] = 8218,
  [SMALL_STATE(267)] = 8239,
  [SMALL_STATE(268)] = 8260,
  [SMALL_STATE(269)] = 8281,
  [SMALL_STATE(270)] = 8302,
  [SMALL_STATE(271)] = 8323,
  [SMALL_STATE(272)] = 8341,
  [SMALL_STATE(273)] = 8358,
  [SMALL_STATE(274)] = 8373,
  [SMALL_STATE(275)] = 8390,
  [SMALL_STATE(276)] = 8407,
  [SMALL_STATE(277)] = 8422,
  [SMALL_STATE(278)] = 8437,
  [SMALL_STATE(279)] = 8454,
  [SMALL_STATE(280)] = 8471,
  [SMALL_STATE(281)] = 8488,
  [SMALL_STATE(282)] = 8498,
  [SMALL_STATE(283)] = 8512,
  [SMALL_STATE(284)] = 8526,
  [SMALL_STATE(285)] = 8542,
  [SMALL_STATE(286)] = 8556,
  [SMALL_STATE(287)] = 8566,
  [SMALL_STATE(288)] = 8578,
  [SMALL_STATE(289)] = 8588,
  [SMALL_STATE(290)] = 8602,
  [SMALL_STATE(291)] = 8616,
  [SMALL_STATE(292)] = 8628,
  [SMALL_STATE(293)] = 8644,
  [SMALL_STATE(294)] = 8656,
  [SMALL_STATE(295)] = 8670,
  [SMALL_STATE(296)] = 8682,
  [SMALL_STATE(297)] = 8692,
  [SMALL_STATE(298)] = 8704,
  [SMALL_STATE(299)] = 8717,
  [SMALL_STATE(300)] = 8726,
  [SMALL_STATE(301)] = 8739,
  [SMALL_STATE(302)] = 8752,
  [SMALL_STATE(303)] = 8765,
  [SMALL_STATE(304)] = 8774,
  [SMALL_STATE(305)] = 8787,
  [SMALL_STATE(306)] = 8800,
  [SMALL_STATE(307)] = 8813,
  [SMALL_STATE(308)] = 8822,
  [SMALL_STATE(309)] = 8835,
  [SMALL_STATE(310)] = 8848,
  [SMALL_STATE(311)] = 8857,
  [SMALL_STATE(312)] = 8866,
  [SMALL_STATE(313)] = 8875,
  [SMALL_STATE(314)] = 8888,
  [SMALL_STATE(315)] = 8901,
  [SMALL_STATE(316)] = 8914,
  [SMALL_STATE(317)] = 8927,
  [SMALL_STATE(318)] = 8940,
  [SMALL_STATE(319)] = 8953,
  [SMALL_STATE(320)] = 8966,
  [SMALL_STATE(321)] = 8979,
  [SMALL_STATE(322)] = 8988,
  [SMALL_STATE(323)] = 9001,
  [SMALL_STATE(324)] = 9014,
  [SMALL_STATE(325)] = 9027,
  [SMALL_STATE(326)] = 9036,
  [SMALL_STATE(327)] = 9049,
  [SMALL_STATE(328)] = 9062,
  [SMALL_STATE(329)] = 9075,
  [SMALL_STATE(330)] = 9088,
  [SMALL_STATE(331)] = 9101,
  [SMALL_STATE(332)] = 9114,
  [SMALL_STATE(333)] = 9127,
  [SMALL_STATE(334)] = 9140,
  [SMALL_STATE(335)] = 9149,
  [SMALL_STATE(336)] = 9162,
  [SMALL_STATE(337)] = 9175,
  [SMALL_STATE(338)] = 9188,
  [SMALL_STATE(339)] = 9201,
  [SMALL_STATE(340)] = 9214,
  [SMALL_STATE(341)] = 9227,
  [SMALL_STATE(342)] = 9240,
  [SMALL_STATE(343)] = 9253,
  [SMALL_STATE(344)] = 9266,
  [SMALL_STATE(345)] = 9279,
  [SMALL_STATE(346)] = 9292,
  [SMALL_STATE(347)] = 9305,
  [SMALL_STATE(348)] = 9318,
  [SMALL_STATE(349)] = 9331,
  [SMALL_STATE(350)] = 9344,
  [SMALL_STATE(351)] = 9357,
  [SMALL_STATE(352)] = 9370,
  [SMALL_STATE(353)] = 9383,
  [SMALL_STATE(354)] = 9396,
  [SMALL_STATE(355)] = 9409,
  [SMALL_STATE(356)] = 9422,
  [SMALL_STATE(357)] = 9435,
  [SMALL_STATE(358)] = 9443,
  [SMALL_STATE(359)] = 9451,
  [SMALL_STATE(360)] = 9459,
  [SMALL_STATE(361)] = 9467,
  [SMALL_STATE(362)] = 9475,
  [SMALL_STATE(363)] = 9483,
  [SMALL_STATE(364)] = 9491,
  [SMALL_STATE(365)] = 9499,
  [SMALL_STATE(366)] = 9507,
  [SMALL_STATE(367)] = 9517,
  [SMALL_STATE(368)] = 9525,
  [SMALL_STATE(369)] = 9533,
  [SMALL_STATE(370)] = 9541,
  [SMALL_STATE(371)] = 9551,
  [SMALL_STATE(372)] = 9561,
  [SMALL_STATE(373)] = 9569,
  [SMALL_STATE(374)] = 9579,
  [SMALL_STATE(375)] = 9587,
  [SMALL_STATE(376)] = 9595,
  [SMALL_STATE(377)] = 9603,
  [SMALL_STATE(378)] = 9611,
  [SMALL_STATE(379)] = 9621,
  [SMALL_STATE(380)] = 9631,
  [SMALL_STATE(381)] = 9639,
  [SMALL_STATE(382)] = 9647,
  [SMALL_STATE(383)] = 9655,
  [SMALL_STATE(384)] = 9663,
  [SMALL_STATE(385)] = 9671,
  [SMALL_STATE(386)] = 9681,
  [SMALL_STATE(387)] = 9689,
  [SMALL_STATE(388)] = 9697,
  [SMALL_STATE(389)] = 9705,
  [SMALL_STATE(390)] = 9713,
  [SMALL_STATE(391)] = 9721,
  [SMALL_STATE(392)] = 9731,
  [SMALL_STATE(393)] = 9739,
  [SMALL_STATE(394)] = 9747,
  [SMALL_STATE(395)] = 9757,
  [SMALL_STATE(396)] = 9765,
  [SMALL_STATE(397)] = 9775,
  [SMALL_STATE(398)] = 9785,
  [SMALL_STATE(399)] = 9793,
  [SMALL_STATE(400)] = 9801,
  [SMALL_STATE(401)] = 9811,
  [SMALL_STATE(402)] = 9819,
  [SMALL_STATE(403)] = 9827,
  [SMALL_STATE(404)] = 9834,
  [SMALL_STATE(405)] = 9841,
  [SMALL_STATE(406)] = 9848,
  [SMALL_STATE(407)] = 9855,
  [SMALL_STATE(408)] = 9862,
  [SMALL_STATE(409)] = 9869,
  [SMALL_STATE(410)] = 9876,
  [SMALL_STATE(411)] = 9883,
  [SMALL_STATE(412)] = 9890,
  [SMALL_STATE(413)] = 9897,
  [SMALL_STATE(414)] = 9904,
  [SMALL_STATE(415)] = 9911,
  [SMALL_STATE(416)] = 9918,
  [SMALL_STATE(417)] = 9925,
  [SMALL_STATE(418)] = 9932,
  [SMALL_STATE(419)] = 9939,
  [SMALL_STATE(420)] = 9946,
  [SMALL_STATE(421)] = 9953,
  [SMALL_STATE(422)] = 9960,
  [SMALL_STATE(423)] = 9967,
  [SMALL_STATE(424)] = 9974,
  [SMALL_STATE(425)] = 9981,
  [SMALL_STATE(426)] = 9988,
  [SMALL_STATE(427)] = 9995,
  [SMALL_STATE(428)] = 10002,
  [SMALL_STATE(429)] = 10009,
  [SMALL_STATE(430)] = 10016,
  [SMALL_STATE(431)] = 10023,
  [SMALL_STATE(432)] = 10030,
  [SMALL_STATE(433)] = 10037,
  [SMALL_STATE(434)] = 10044,
  [SMALL_STATE(435)] = 10051,
  [SMALL_STATE(436)] = 10058,
  [SMALL_STATE(437)] = 10065,
  [SMALL_STATE(438)] = 10072,
  [SMALL_STATE(439)] = 10079,
  [SMALL_STATE(440)] = 10086,
  [SMALL_STATE(441)] = 10093,
  [SMALL_STATE(442)] = 10100,
  [SMALL_STATE(443)] = 10107,
  [SMALL_STATE(444)] = 10114,
  [SMALL_STATE(445)] = 10121,
  [SMALL_STATE(446)] = 10128,
  [SMALL_STATE(447)] = 10135,
  [SMALL_STATE(448)] = 10142,
  [SMALL_STATE(449)] = 10149,
  [SMALL_STATE(450)] = 10156,
  [SMALL_STATE(451)] = 10163,
  [SMALL_STATE(452)] = 10170,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(391),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(334),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(417),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(409),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(83),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(256),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(391),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(286),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(334),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(279),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(81),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(102),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(165),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(164),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(299),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(271),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(296),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(286),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(380),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(409),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(426),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blk_repeat1, 2), SHIFT_REPEAT(292),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blk_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 2, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 2, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versions_blk, 2, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versions_blk, 2, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4, .production_id = 14),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 2, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 2, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 5, .production_id = 40),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 5, .production_id = 40),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 17),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 18),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 18),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 5, .production_id = 32),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 5, .production_id = 32),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 5, .production_id = 33),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 5, .production_id = 33),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 7, .production_id = 43),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 7, .production_id = 43),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 7, .production_id = 44),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 7, .production_id = 44),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versions_blk, 4, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versions_blk, 4, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 6, .production_id = 38),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 6, .production_id = 38),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 16),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 16),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 22),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 22),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 6, .production_id = 37),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 6, .production_id = 37),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versions_blk, 5, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versions_blk, 5, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_name, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_name, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_lvl, 2, .production_id = 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 2, .production_id = 7),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_name, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_name, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_lvl, 3, .production_id = 14),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 3, .production_id = 14),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, .production_id = 14),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, .production_id = 14),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(282),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(285),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(290),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 1, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(294),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 28),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 28),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 15),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, .production_id = 15),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 11),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 30),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 30),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 36),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 36),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, .production_id = 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_expr, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_expr, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 5, .production_id = 26),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 5, .production_id = 26),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 5, .production_id = 34),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 5, .production_id = 34),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 5),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 11),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 6, .production_id = 35),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 6, .production_id = 35),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 6, .production_id = 41),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 6, .production_id = 41),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 7, .production_id = 42),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 7, .production_id = 42),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_versioned_ref, 4, .production_id = 24),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_versioned_ref, 4, .production_id = 24),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 21),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 2, .production_id = 19),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 29),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2, .production_id = 19),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_namespace, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_namespace, 1),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_versions_blk_repeat1, 2), SHIFT_REPEAT(125),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_versions_blk_repeat1, 2), SHIFT_REPEAT(426),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_versions_blk_repeat1, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_ref, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_ref, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_feature_repeat1, 2), SHIFT_REPEAT(433),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_feature_repeat1, 2), SHIFT_REPEAT(327),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_version_feature_repeat1, 2), SHIFT_REPEAT(392),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_feature_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_major_lvl, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_major_lvl, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lang_lvl_repeat1, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lang_lvl_repeat1, 2), SHIFT_REPEAT(128),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minor_lvl, 1),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_line, 6, .production_id = 52),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_line, 6, .production_id = 52),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_line, 2, .production_id = 46),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_line, 2, .production_id = 46),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_line, 3, .production_id = 49),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_line, 3, .production_id = 49),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_line, 5, .production_id = 51),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_line, 5, .production_id = 51),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_feature, 2, .production_id = 27),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_mode, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_feature, 5, .production_id = 27),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(254),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(283),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3, .production_id = 9),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 5, .production_id = 25),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_feature, 2, .production_id = 8),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 12),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, .production_id = 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_feature, 4, .production_id = 27),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_line_repeat1, 2, .production_id = 50), SHIFT_REPEAT(338),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_line_repeat1, 2, .production_id = 50),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2), SHIFT_REPEAT(100),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(65),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 31), SHIFT_REPEAT(96),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 31),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 4, .production_id = 39),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 6, .production_id = 47),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, .production_id = 23),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4, .production_id = 14),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_line_repeat1, 2, .production_id = 48),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 5, .production_id = 40),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 5, .production_id = 45),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 5, .production_id = 39),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 1, .production_id = 13),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, .production_id = 20),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1082] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_uvl_external_scanner_create(void);
void tree_sitter_uvl_external_scanner_destroy(void *);
bool tree_sitter_uvl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_uvl_external_scanner_serialize(void *, char *);
void tree_sitter_uvl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uvl(void) {
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
    .keyword_capture_token = sym_name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_uvl_external_scanner_create,
      tree_sitter_uvl_external_scanner_destroy,
      tree_sitter_uvl_external_scanner_scan,
      tree_sitter_uvl_external_scanner_serialize,
      tree_sitter_uvl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
