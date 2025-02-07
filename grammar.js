module.exports = grammar({
  name: 'kolibri',
  conflicts: $ => [],
  precedences: $ => [
    [$.apply, $.opcurry],
    [$._term]
  ],

  rules: {
    source_file: $ => $.expression,

    expression: $ => choice(
      $._term,
      $.operator_expression,
      $.apply,
      $.opcurry
    ),

    _term: $ => choice(
      $.number,
      $.string,
      $.identifier,
      $.parenthetical_expression,
      $.curly_expression
    ),

    operator_expression: $ => prec.left(seq(
      $.expression,
      choice($.st_op, $.main_op, $.op),
      $.expression
    )),

    parenthetical_expression: $ => seq('(', $.expression, ')'),
    curly_expression: $ => seq('{', $.expression, '}'),

    opcurry: $ => prec.left(2, seq(
      '(',
      choice($.st_op, $.main_op, $.op),
      repeat1($.expression),
      ')'
    )),

    apply: $ => prec.left(1, seq(
      $._term,
      repeat1($._term)
    )),

    identifier: $ => /[a-zA-Z_]+/,
    number: $ => /\d+/,
    string: $ => /"([^"\\]|\\.)*"/,

    st_op: $ => choice(
      '|>', '->', ':>', '!>', '<!', '<:', '<-', '<|', '>', '<'
    ),
    main_op: $ => choice('=', ',', '.', ';'),
    op: $ => token(/[^\w\s(){}]/),
  }
});
