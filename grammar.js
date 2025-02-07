const PREC = {
  OP_CURRY: 2,
  APPLY: 1
};

module.exports = grammar({
  name: 'kolibri',

  extras: $ => [
    /\s/,
  ],

  rules: {
    program: $ => $.expression,

    expression: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.operator_expression,
      $.parenthesized_expression,
      $.curly_expression,
      $.opcurry,
      $.apply_expression
    ),

    operator_expression: $ => prec.left(PREC.APPLY, seq(
      $.expression,
      field('operator', $.operator),
      $.expression
    )),

    parenthesized_expression: $ => seq('(', $.expression, ')'),
    curly_expression: $ => seq('{', $.expression, '}'),

    opcurry: $ => prec.left(PREC.OP_CURRY, seq(
      '(',
      field('operator', $.operator),
      repeat($.expression),
      ')'
    )),

    apply_expression: $ => prec.left(PREC.APPLY, seq(
      $.expression,
      repeat1($.expression)
    )),

    identifier: $ => /[^\W0-9_]+/,

    operator: $ => choice(
      $.st_op,
      $.main_op,
      $.op
    ),

    st_op: $ => choice(
      '|>', '->', ':>', '!>', '<!', '<:', '<-', '<|', '>', '<'
    ),

    main_op: $ => choice(
      '=', ',', '.', ';'
    ),

    op: $ => token(/[^\w(){} \d\t\n\r\f\v]+/),

    number: $ => /-?\d+/,

    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),
  }
});
