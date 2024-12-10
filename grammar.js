/**
 * @file Tree sitter parser for bsl
 * @author Dmitrii Liubanevich <dlyubanevich@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// https://its.1c.ru/db/v838doc#bookmark:dev:TI000000139
const TOKEN_TREE_NON_SPECIAL_PUNCTUATION = [
  '+', '-', '*', '/', '%', '^',
  '<>', '=', '>', '<', '>=', '<=', 
  '.', ',', ';', ':', '?', '~', 
  '|', '&', '#'
];

module.exports = grammar({
  name: "bsl",

  extras: $ => [
    /\s/,
    $.line_comment
  ],

  supertypes: $ => [
    
  ],

  inline: $ => [
    $._non_special_token,
  ],

  conflicts: $ => [
    
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.var_definition,
      //$.region_definition,
      $._method_definition,
    ),

    _method_definition: $ => choice(
      $.procedure_definition,
      $.function_definition,
    ),

    var_definition: $ => seq(
      $._var_keyword,
      sepBy(',', $.identifier),
      optional($.export_modifier),
      ';',
    ),

    procedure_definition: $ => seq(
      $._procedure_keyword,
      field('name', $.identifier),
      $.parameters,
      optional($.export_modifier),
      optional($.body),
      $._endprocedure_keyword
    ),

    function_definition: $ => seq(
      $._function_keyword,
      field('name', $.identifier),
      $.parameters,
      optional($.export_modifier),
      optional($.body),
      $._endfunction_keyword
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', optional($.parameter)),
      ')'
    ),

    parameter: $ => seq(
      field('val', optional($.val_keyword)),
      $.identifier,
      optional($.def_value)
    ),

    def_value: $ => seq(
      '=',
      choice(
        $.number,
        $.string,
        $.boolean,
        $.undefined,
        //TODO Date
      ),
    ),

    body: $ => seq(
      $._statement,
    ),

    _statement: $ => choice(
      $.return_statement,
      // TODO: other kinds of statements
    ),

    return_statement: $ => choice(
      prec.left(seq($._return_keyword, $._expression)),
      seq($._return_keyword, ';'),
    ),

    _expression: $ => seq(
      choice(
        $.identifier,
        $.number,
        $.undefined,
        // TODO: other kinds of expressions
      ),
      optional(';'),
    ),

    line_comment: $ => seq(
      '//',
      /.*/,  
    ),

    // Section - Types

    _type: $ => choice(

    ),
    
    // Section - Keywords

    _if_keyword: $ => choice(
      /(Если)/i,
      /(if)/i
    ),

    _then_keyword: $ => choice(
      /(Тогда)/i,
      /(then)/i
    ),

    _elsif_keyword: $ => choice(
      /(ИначеЕсли)/i,
      /(elsif)/i
    ),

    _else_keyword: $ => choice(
      /(Иначе)/i,
      /(else)/i
    ),

    _endif_keyword: $ => choice(
      /(КонецЕсли)/i,
      /(endif)/i
    ),

    _for_keyword: $ => choice(
      /(Для)/i,
      /(for)/i
    ),

    _each_keyword: $ => choice(
      /(Каждого)/i,
      /(each)/i
    ),

    _in_keyword: $ => choice(
      /(Из)/i,
      /(in)/i
    ),

    _to_keyword: $ => choice(
      /(По)/i,
      /(to)/i
    ),

    _while_keyword: $ => choice(
      /(Пока)/i,
      /(while)/i
    ),

    _do_keyword: $ => choice(
      /(Цикл)/i,
      /(do)/i
    ),

    _enddo_keyword: $ => choice(
      /(КонецЦикла)/i,
      /(enddo)/i
    ),

    _procedure_keyword: $ => choice(
      /(Процедура)/i,
      /(procedure)/i
    ),

    _function_keyword: $ => choice(
      /(Функция)/i,
      /(function)/i
    ),

    _endprocedure_keyword: $ => choice(
      /(КонецПроцедуры)/i,
      /(endprocedure)/i
    ),

    _endfunction_keyword: $ => choice(
      /(КонецФункции)/i,
      /(endfunction)/i
    ),

    _var_keyword: $ => choice(
      /Перем/iu,
      /var/i
    ),

    _goto_keyword: $ => choice(
      /(Перейти)/i,
      /(goto)/i
    ),

    _return_keyword: $ => choice(
      /(Возврат)/i,
      /(return)/i
    ),

    _continue_keyword: $ => choice(
      /(Продолжить)/i,
      /(continue)/i
    ),

    _break_keyword: $ => choice(
      /(Прервать)/i,
      /(break)/i
    ),

    _and_keyword: $ => choice(
      /(И)/i,
      /(and)/i
    ),

    _or_keyword: $ => choice(
      /(Или)/i,
      /(or)/i
    ),

    _not_keyword: $ => choice(
      /(Не)/i,
      /(not)/i
    ),

    _try_keyword: $ => choice(
      /(Попытка)/i,
      /(try)/i
    ),

    _except_keyword: $ => choice(
      /(Исключение)/i,
      /(except)/i
    ),

    _raise_keyword: $ => choice(
      /(ВызватьИсключение)/i,
      /(raise)/i
    ),

    _endtry_keyword: $ => choice(
      /(КонецПопытки)/i,
      /(endtry)/i
    ),

    _new_keyword: $ => choice(
      /(Новый)/i,
      /(new)/i
    ),

    _execute_keyword: $ => choice(
      /(Выполнить)/i,
      /(execute)/i
    ),

    val_keyword: $ => choice(
      /(Знач)/i,
      /(val)/i
    ),

    true: $ => choice(
      /(Истина)/i,
      /(true)/i
    ),

    false: $ => choice(
      /(Ложь)/i,
      /(false)/i
    ),

    null: $ => /(null)/i,

    undefined: $ => choice(
      /(Неопределено)/i,
      /(undefine)/i
    ),

    export_modifier: $ => choice(
      /(Экспорт)/i,
      /(export)/i
    ),

    identifier: $ => /[a-zA-Z\u0410-\u044F_][a-zA-Z\u0410-\u044F_0-9]+/,
    number: $ => /\d*\.\d+([eE][\-+]?\d+)?/,
    string: $ => seq(
      '\"',
      //repeat(optional('|')),
      '.*',
      '\"',
    ),
    boolean: $ => choice(
      $.true,
      $.false,
    ),

    _non_special_token: $ => choice(
      prec.right(repeat1(choice(...TOKEN_TREE_NON_SPECIAL_PUNCTUATION))),

    ),

  }


});

function sepBy(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}
