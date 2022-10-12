module.exports = grammar({
  name : "Mosel",

  extras: $ => [
    $.comment,
    $.include,
    /\s/
  ],

  rules : {
    souce_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.model_definition
    ),

    model_definition: $ => seq(
      'model',
      field('name', $.identifier),
      repeat($._directive),
      optional($._parameters),
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
