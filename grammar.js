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


    declaration_definition: $ => seq(
      commaSep1(field('variable', $.identifier)),
      ':',
      optional('shared'),
      choice(
        $.elementary_type,
        $.set_type,
        $.range_type,
        $.list_type,
        $.array_type
      )
    ),

    elementary_type: $ => seq(
      choice(
        $.basic_type,
        $.mp_type,
        $.user_or_external_type
      )
    ),

    set_type: $ => seq(
      optional('dynamic'),
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

    array_type: $ => seq(
      optional(choice("dynamic", "hashmap")),
      "array",
      "(",
      commaSep1($.set_declaration_or_expression),
      ")",
      "of",
      $.elementary_type
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
        $.elementary_type
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
