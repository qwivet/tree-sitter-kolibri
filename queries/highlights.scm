; Operator types
(st_op) @keyword.operator
(main_op) @punctuation.delimiter
(op) @operator

; Brackets (different types)
"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.special
"}" @punctuation.special

; Curly block internals
(curly_expression
  (identifier) @variable.member
  (operator_expression (op) @operator)
  (string) @string.special.symbol
)

; Identifiers
(identifier) @variable
(apply (identifier) @function.call)

; Literals
(number) @number
(string) @string

; Special constructs
(opcurry (operator) @keyword.operator)
(apply (expression: (identifier) @function.call))

; Function application args
(apply (expression: (_) @variable.parameter))

; Number subtypes
(number) @number
(number (op) @operator)  ; For numbers with operators

; Type hints
(type_annotation (identifier) @type)
