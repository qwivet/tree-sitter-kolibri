module.exports = grammar({
  name: 'kolibri',
  extras: $ => [/\s/],

  conflicts: $ => [[$.full_expression,$.partial_expression],[$.op_expression,$.partial_expression],[$.identifier],[$.binary_expression],[$.parenthesized_expression],[$.curly_expression],[$.apply_expression]],
  rules: {

    source_file: $ => $._expression,

    spaces: $ => choice(/\s/, /\n/, /\r/),

    _expression: $ => choice(
      $.binary_expression,
      prec.left(2, $.apply_expression),
      $._primary_expression
    ),

    binary_expression: $ => choice(
      prec(4,$.op_expression),
      prec(5,$.partial_expression),
      prec(6,$.full_expression)
    ),

    op_expression: $ => seq(
      field('operator', $.operator),
    ),

    partial_expression: $ => choice(seq(
      field('operator', $.operator),
      $._expression,
    ),seq(
      $._expression,
      field('operator', $.operator),
    )),

    full_expression: $ => seq(
      $._expression,
      field('operator', $.operator),
      $._expression,
    ),

    operator: $ => choice(
      prec(3, $.main_operator),
      prec(2, $.stream_operator),  // Lowest precedence
      prec(1, $.other_operator)
    ),

    stream_operator: $ => choice(
      '|>', '->', ':>', '!>', '<!', '<:', '<-', '<|', '>', '<'
    ),

    main_operator: $ => choice(
      '=', ',', '.', ';'
    ),

    other_operator: $ => token(/[^\w(){} \d\t\n\r\f\v]+/u),

    _primary_expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.parenthesized_expression,
      $.curly_expression,
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

    identifier: $ => /([\p{L}\p{Nl}][\p{L}\p{Nl}\p{Nd}\p{Mn}\p{Mc}\p{Pc}\p{Cf}']*)( +[\p{L}\p{Nl}][\p{L}\p{Nl}\p{Nd}\p{Mn}\p{Mc}\p{Pc}\p{Cf}']*)*/u,
//      identifier: $ => seq($.word, repeat(seq(repeat1(/\s/),  $.word))),

      parenthesized_expression: $ => seq(
        '(', 
        $._expression, 
        ')',
      ),

      curly_expression: $ => seq(
        '{', 
        $._expression, 
        '}',
      ),

      apply_expression: $ => prec.left(1,seq(
        field('function', $._primary_expression),
        repeat1(field('argument', $._primary_expression,optional($.spaces)))
        ))

  },
});
