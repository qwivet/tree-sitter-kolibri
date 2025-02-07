; Operators
(main_op) @punctuation.delimiter
(st_op) @operator
(op) @punctuation.special

; Brackets
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.special
"}" @punctuation.special

; Identifiers
(identifier) @variable

; Numbers
(number) @number

; Strings
(string) @string

; Function calls
(apply_expression
  (expression) @function.call
  . (expression)* @variable.parameter
)

; Operator currying
(opcurry
  (operator) @operator
  (expression)* @variable.parameter
)

; Function application arguments
(operator_expression
  operator: (operator) @operator
)
