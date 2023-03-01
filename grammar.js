module.exports = grammar({
  name : "mosel",

  extras: $ => [
    $.comment,
    $.include,
    /\s/
  ],

  rules : {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.model_definition
    ),

    model_definition: $ => seq(
      'model',
      field('name', $.identifier),
      repeat($._directive),
      optional($._parameters),
      optional($._declarations),
      // $._body,
      'end-model'
    ),

    _directive: $ => instruction(choice(
      $.directive_use,
      $.directive_import,
      $.directive_option,
      $.directive_version,
    )),

    directive_use: $ => seq(
      'uses',
      commaSep1($.quoted_string),
    ),

    directive_import: $ => seq(
      'imports',
      commaSep1($.quoted_string),
    ),

    directive_option: $ => seq(
      'options',
      commaSep1($.option),
    ),

    directive_version: $ => seq(
      'version',
      field("major", $.integer),
      optional(seq(
        '.',
        field("minor", $.integer),
        optional(seq(
          '.',
          field("release", $.integer),
        ))
      ))
    ),

    option: $ => choice(
      'explterm',
      'noimplicit',
      'noautofinal',
      'keepassert',
      'xbim',
      'fctasproc',
      'tagpriv',
      'dynonly',
    ),

    _parameters: $ => seq(
      'parameters',
      repeat1($.parameter_definition),
      'end-parameters',
    ),

    parameter_definition: $ => seq(
      field('name', $.identifier),
      '=',
      field('default_value', $.value)
    ),

    _declarations: $ => seq(
      'declarations',
      repeat($.declaration_definition),
      'end-declarations'
    ),


    declaration_definition: $ => choice(
      seq(
        commaSep1(field('variable', $.identifier)),
        ':',
        choice(
          seq(
            optional('shared'),
            choice(
              seq(
                $.elementary_type,
                optional($.unioned_types)
              ),
              $.set_type,
              $.range_type,
              $.list_type,
              $.array_type,
            )
          ),
          $.record_type,
          $.subroutine_type,
        )
      ),
      seq(
        field('user_type', $.identifier),
        '=',
        choice(
          seq(
            $.elementary_type,
            optional($.unioned_types)
          ),
          $.simple_set_type,
          $.simple_range_type,
          $.list_type,
          $.simple_array_type,
        ),
      )
    ),

    simple_type: $ => choice(
      $.elementary_type,
      $.simple_set_type,
      $.simple_range_type,
      $.list_type,
      $.simple_array_type,
    ),

    elementary_type: $ => seq(
      choice(
        $.basic_type,
        $.mp_type,
        $.user_or_external_type
      )
    ),

    set_type: $ => choice(
      $.simple_set_type,
      $.dynamic_set_type
    ),

    dynamic_set_type: $ => seq(
      'dynamic',
      choice(
        $.simple_set_type,
      ),
    ),

    simple_set_type: $ => seq(
      'set',
      'of',
      optional('constant'),
      $.elementary_type
    ),

    range_type: $ => choice(
      $.simple_range_type,
      $.dynamic_range_type
    ),

    dynamic_range_type: $ => seq(
      'dynamic',
      'range',
      optional($.range)
    ),

    simple_range_type: $ => seq(
      'range',
      optional($.range)
    ),

    list_type: $ => seq(
      'list of',
      $.elementary_type
    ),

    array_type: $ => choice(
      $.dynamic_array_type,
      $.hashmap_array_type,
      $.simple_array_type,
    ),

    dynamic_array_type: $ => seq(
      "dynamic",
      $.simple_array_type
    ),

    hashmap_array_type: $ => seq(
      "hashmap",
      $.simple_array_type
    ),

    simple_array_type: $ => seq(
      "array",
      "(",
      commaSep1($.set_declaration_or_expression),
      ")",
      "of",
      $.simple_type
    ),

    record_type: $ => seq(
      "record",
      repeat($.declaration_definition),
      "end-record"
    ),

    subroutine_type: $ => choice(
      $.function_type,
      $.procedure_type,
    ),

    function_type: $ => seq(
      "function",
      optional(
        seq(
          "(",
          optional(field('param_type', $.simple_type)),
          ")",
        )
      ),
      ":",
      field("return_type", $.simple_type)
    ),

    procedure_type: $ => seq(
      "procedure",
      optional(
        seq(
          "(",
          optional(field('param_type', $.simple_type)),
          ")",
        )
      ),
    ),

    unioned_types: $ => seq(
      "or",
      sep1(
        "or",
        choice(
          $.basic_type,
          $.user_or_external_type,
          "any"
        )
      )
    ),

    basic_type: $ => choice(
      "integer",
      "real",
      "string",
      "boolean"),

    mp_type: $ => choice(
      "mpvar",
      "linctr"
    ),

    user_or_external_type: $ => $.identifier,

    set_declaration_or_expression: $ => seq(
      optional(
        seq(
          field('name', $.identifier),
          ':',
        )
      ),
      choice(
        $.set_type,
        $.simple_range_type,
        $.elementary_type,
        $.range
      )
    ),

    value: $ => choice(
      $.integer,
      $.bool,
      $.real,
      $.quoted_string,
    ),

    identifier: $ => /[A-Za-z_][A-Za-z_0-9]*/,

    integer: $ => /\d+/,
    real: $ => /\d+\.\d+/,
    bool: $ => choice('true', 'false'),
    range: $ => seq(field('min', $.integer), '..', field('max', $.integer)),

    quoted_string: $ => choice(
      /"[^"]*"/,
      /'[^']*'/,
    ),

    include: $ => seq(
      'include',
      $.quoted_string,
    ),

    comment: $ => token(
      seq('!', /.*/),
    )
  },
});

function instruction(rule) {
  return seq(rule, optional(';'));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}

function sep(separator, rule) {
  return optional(sep1(separator, rule))
}
