
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

(line_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

"::" @punctuation.delimiter
":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

; Control flow

(IF_KEYWORD) @keyword
(THEN_KEYWORD) @keyword
(ELSE_KEYWORD) @keyword
(ELSEIF_KEYWORD) @keyword
(ENDIF_KEYWORD) @keyword
(FOR_KEYWORD) @keyword
(EACH_KEYWORD) @keyword
(IN_KEYWORD) @keyword
(TO_KEYWORD) @keyword
(WHILE_KEYWORD) @keyword
(DO_KEYWORD) @keyword
(ENDDO_KEYWORD) @keyword
(GOTO_KEYWORD) @keyword
(RETURN_KEYWORD) @keyword
(BREAK_KEYWORD) @keyword
(CONTINUE_KEYWORD) @keyword

;Declarations

(PROCEDURE_KEYWORD) @keyword
(FUNCTION_KEYWORD) @keyword
(ENDPROCEDURE_KEYWORD) @keyword
(VAR_KEYWORD) @keyword
(EXPORT_KEYWORD) @keyword
(VAL_KEYWORD) @keyword

;Values

(TRUE_KEYWORD) @keyword
(FALSE_KEYWORD) @keyword
(UNDEFINED_KEYWORD) @keyword
(NULL_KEYWORD) @keyword

;Exceptions

(TRY_KEYWORD) @keyword
(EXCEPT_KEYWORD) @keyword
(RAISE_KEYWORD) @keyword
(ENDTRY_KEYWORD) @keyword

;Async/await

(ASYNC_KEYWORD) @keyword
(AWAIT_KEYWORD) @keyword

;New

(NEW_KEYWORD) @keyword

;Handlers

(ADDHANDLER_KEYWORD) @keyword
(REMOVEHANDLER_KEYWORD) @keyword

;Operators

(AND_KEYWORD) @keyword
(OR_KEYWORD) @keyword
(NOT_KEYWORD) @keyword

;Preprocessor

(REGION_KEYWORD) @keyword
(ENDREGION_KEYWORD) @keyword
(PREPROC_IF_KEYWORD) @keyword
(PREPROC_ELSE_KEYWORD) @keyword
(PREPROC_ELSEIF_KEYWORD) @keyword
(PREPROC_ENDIF_KEYWORD) @keyword

;Annotations

(annotation) @keyword
(preproc) @keyword

(string) @string
(number) @number
(multiline_string) @string
(date) @date

"*" @operator
"/" @operator
"%" @operator
"'" @operator
"&" @operator
"<" @operator
"<>" @operator
">" @operator
"=" @operator
">=" @operator
"<=" @operator
"+" @operator
"-" @operator
