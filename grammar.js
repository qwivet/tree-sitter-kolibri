module.exports = grammar({
  name: 'kolibri',

  rules: {
    source_file: $ => $._expression,

    _expression: $ => choice(
      $.binary_expression,
      prec.left(2, $.apply_expression),
      $._primary_expression
    ),

    binary_expression: $ => prec.left(seq(
      $._expression,
      field('operator', $.operator),
      $._expression
    )),

    operator: $ => choice(
      prec(1, $.stream_operator),  // Lowest precedence
      prec(2, $.main_operator),
      prec(3, $.other_operator)
    ),

    stream_operator: $ => choice(
      '|>', '->', ':>', '!>', '<!', '<:', '<-', '<|', '>', '<'
    ),

    main_operator: $ => choice(
      '=', ',', '.', ';'
    ),

    other_operator: $ => token(/[^\w(){} \d\t\n\r\f\v]+/u),

    _primary_expression: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.parenthesized_expression,
      $.curly_expression,
      $.opcurry,
      $.apply_expression
    ),

    number: $ => token(choice(
      /[+-]?\d+/,
      /[+-]?\d+\.\d+/
    )),

    string: $ => token(choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    )),

    word: $ => /[\p{L}\p{Nl}][\p{L}\p{Nl}\p{Nd}\p{Mn}\p{Mc}\p{Pc}\p{Cf}']*/u,
    identifier: $ => seq($.word, repeat(seq(' ', $.word))),

    parenthesized_expression: $ => seq(
      '(', $._expression, ')'
    ),

    curly_expression: $ => seq(
      '{', $._expression, '}'
    ),

    opcurry: $ => seq(
      '(',
      field('operator', $.operator),
      repeat(field('argument', $._expression)),
      ')'
    ),

    apply_expression: $ => prec.left(1,seq(
      field('function', $._primary_expression),
      repeat1(field('argument', $._primary_expression))
    )),
  }
});
