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
      $._perem,
      //$._var_keyword,
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
      sepBy(',', seq($.parameter)),
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
        $.number
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

    _perem: $ => choice(
      /Перем/iu,
      /var/i
    ),
    
    // Section - Keywords

    _if_keyword: $ => choice(
      seq(
        choice('Е', 'е'),
        choice('С', 'с'),
        choice('Л', 'л'),
        choice('И', 'и'),
      ),
      /(if)/i
    ),

    _then_keyword: $ => choice(
      seq(
        choice('Т', 'т'),
        choice('О', 'о'),
        choice('Г', 'г'),
        choice('Д', 'д'),
        choice('А', 'а'),
      ),
      /(then)/i
    ),

    _elsif_keyword: $ => choice(
      seq(
        choice('И', 'и'),        
        choice('Н', 'н'),
        choice('А', 'а'),
        choice('Ч', 'ч'),
        choice('Е', 'е'),
        choice('Е', 'е'),
        choice('С', 'с'),
        choice('Л', 'л'),
        choice('И', 'и'),
      ),
      /(elsif)/i
    ),

    _else_keyword: $ => choice(
      seq(
        choice('И', 'и'),        
        choice('Н', 'н'),
        choice('А', 'а'),
        choice('Ч', 'ч'),
        choice('Е', 'е'),
      ),
      /(else)/i
    ),

    _endif_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('О', 'о'),
        choice('Н', 'н'),
        choice('Е', 'е'),
        choice('Ц', 'ц'),
        choice('Е', 'е'),
        choice('С', 'с'),
        choice('Л', 'л'),
        choice('И', 'и'),
      ),
      /(endif)/i
    ),

    _for_keyword: $ => choice(
      seq(
        choice('Д', 'д'),        
        choice('Л', 'л'),
        choice('Я', 'я'),
      ),
      /(for)/i
    ),

    _each_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('А', 'а'),
        choice('Ж', 'ж'),
        choice('Д', 'д'),        
        choice('О', 'о'),
        choice('Г', 'г'),
        choice('О', 'о'),        
      ),
      /(each)/i
    ),

    _in_keyword: $ => choice(
      seq(
        choice('И', 'и'),        
        choice('З', 'з'),       
      ),
      /(in)/i
    ),

    _to_keyword: $ => choice(
      seq(
        choice('П', 'п'),        
        choice('О', 'о'),       
      ),
      /(to)/i
    ),

    _while_keyword: $ => choice(
      seq(
        choice('П', 'п'),        
        choice('О', 'о'), 
        choice('К', 'к'),        
        choice('А', 'а'),        
      ),
      /(while)/i
    ),

    _do_keyword: $ => choice(
      seq(
        choice('Ц', 'ц'),        
        choice('И', 'и'), 
        choice('К', 'к'),        
        choice('Л', 'л'),        
      ),
      /(do)/i
    ),

    _enddo_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('О', 'о'),
        choice('Н', 'н'),
        choice('Е', 'е'),
        choice('Ц', 'ц'),        
        choice('Ц', 'ц'),        
        choice('И', 'и'), 
        choice('К', 'к'),        
        choice('Л', 'л'), 
        choice('А', 'а'),                
      ),
      /(enddo)/i
    ),

    _procedure_keyword: $ => choice(
      seq(
        choice('П', 'п'),        
        choice('Р', 'р'),
        choice('О', 'о'),
        choice('Ц', 'ц'),
        choice('Е', 'е'),        
        choice('Д', 'д'),        
        choice('У', 'у'), 
        choice('Р', 'р'),        
        choice('А', 'а'),                
      ),
      /(procedure)/i
    ),

    _function_keyword: $ => choice(
      seq(
        choice('Ф', 'ф'),        
        choice('У', 'у'),
        choice('Н', 'н'),
        choice('К', 'к'),
        choice('Ц', 'ц'),        
        choice('И', 'и'),        
        choice('Я', 'я'),               
      ),
      /(function)/i
    ),

    _endprocedure_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('О', 'о'),
        choice('Н', 'н'),
        choice('Е', 'е'),
        choice('Ц', 'ц'),
        choice('П', 'п'),        
        choice('Р', 'р'),
        choice('О', 'о'),
        choice('Ц', 'ц'),
        choice('Е', 'е'),        
        choice('Д', 'д'),        
        choice('У', 'у'), 
        choice('Р', 'р'),        
        choice('Ы', 'ы'),                
      ),
      /(endprocedure)/i
    ),

    _endfunction_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('О', 'о'),
        choice('Н', 'н'),
        choice('Е', 'е'),
        choice('Ц', 'ц'),
        choice('Ф', 'ф'),        
        choice('У', 'у'),
        choice('Н', 'н'),
        choice('К', 'к'),
        choice('Ц', 'ц'),        
        choice('И', 'и'),        
        choice('И', 'и'),              
      ),
      /(endfunction)/i
    ),

    _var_keyword: $ => choice(
      seq(
        choice('П', 'п'),
        choice('Е', 'е'),
        choice('Р', 'р'),
        choice('Е', 'е'),
        choice('М', 'м'),
      ),
      /(var)/i
    ),

    _goto_keyword: $ => choice(
      seq(
        choice('П', 'п'),
        choice('Е', 'е'),
        choice('Р', 'р'),
        choice('Е', 'е'),
        choice('Й', 'й'),
        choice('Т', 'т'),
        choice('И', 'и'),
      ),
      /(goto)/i
    ),

    _return_keyword: $ => choice(
      seq(
        choice('В', 'в'),
        choice('О', 'о'),
        choice('З', 'з'),
        choice('В', 'в'),
        choice('Р', 'р'),
        choice('А', 'а'),
        choice('Т', 'т'),
      ),
      /(return)/i
    ),

    _continue_keyword: $ => choice(
      seq(
        choice('П', 'п'),
        choice('Р', 'р'),
        choice('О', 'о'),
        choice('Д', 'д'),
        choice('О', 'о'),
        choice('Л', 'л'),
        choice('Ж', 'ж'),
        choice('И', 'и'),
        choice('Т', 'т'),
        choice('Ь', 'ь'),
      ),
      /(continue)/i
    ),

    _break_keyword: $ => choice(
      seq(
        choice('П', 'п'),
        choice('Р', 'р'),
        choice('Е', 'е'),
        choice('Р', 'р'),
        choice('В', 'в'),
        choice('А', 'а'),
        choice('Т', 'т'),
        choice('Ь', 'ь'),
      ),
      /(break)/i
    ),

    _and_keyword: $ => choice(
      choice('И', 'и'),
      /(and)/i
    ),

    _or_keyword: $ => choice(
      seq(
        choice('И', 'и'),
        choice('Л', 'л'),
        choice('И', 'и'),
      ),
      /(or)/i
    ),

    _not_keyword: $ => choice(
      seq(
        choice('Н', 'н'),
        choice('Е', 'е'),
      ),
      /(not)/i
    ),

    _try_keyword: $ => choice(
      seq(
        choice('П', 'п'),
        choice('О', 'о'),
        choice('П', 'п'),
        choice('Ы', 'ы'),
        choice('Т', 'т'),
        choice('К', 'к'),
        choice('А', 'а'),      
      ),
      /(try)/i
    ),

    _except_keyword: $ => choice(
      seq(
        choice('И', 'и'),
        choice('С', 'с'),
        choice('К', 'к'),
        choice('Л', 'л'),
        choice('Ю', 'ю'),
        choice('Ч', 'ч'),
        choice('Е', 'е'),
        choice('Н', 'н'),
        choice('И', 'и'),
        choice('Е', 'е'),
      ),
      /(except)/i
    ),

    _raise_keyword: $ => choice(
      seq(
        choice('В', 'в'),
        choice('Ы', 'ы'),
        choice('З', 'з'),
        choice('В', 'в'),
        choice('А', 'а'),
        choice('Т', 'т'),
        choice('Ь', 'ь'),
        choice('И', 'и'),
        choice('С', 'с'),
        choice('К', 'к'),
        choice('Л', 'л'),
        choice('Ю', 'ю'),
        choice('Ч', 'ч'),
        choice('Е', 'е'),
        choice('Н', 'н'),
        choice('И', 'и'),
        choice('Е', 'е'),
      ),
      /(raise)/i
    ),

    _endtry_keyword: $ => choice(
      seq(
        choice('К', 'к'),        
        choice('О', 'о'),
        choice('Н', 'н'),
        choice('Е', 'е'),
        choice('Ц', 'ц'),
        choice('П', 'п'),
        choice('О', 'о'),
        choice('П', 'п'),
        choice('Ы', 'ы'),
        choice('Т', 'т'),
        choice('К', 'к'),
        choice('И', 'и'),   
      ),
      /(endtry)/i
    ),

    _new_keyword: $ => choice(
      seq(
        choice('Н', 'н'),        
        choice('О', 'о'),
        choice('В', 'в'),
        choice('Ы', 'ы'),
        choice('Й', 'й'), 
      ),
      /(new)/i
    ),

    _execute_keyword: $ => choice(
      seq(
        choice('В', 'в'),        
        choice('Ы', 'ы'),
        choice('П', 'п'),
        choice('О', 'о'),
        choice('Л', 'л'), 
        choice('Н', 'н'),
        choice('И', 'и'),
        choice('Т', 'т'),
        choice('Ь', 'ь'), 
      ),
      /(execute)/i
    ),

    val_keyword: $ => choice(
      seq(
        choice('З', 'з'),        
        choice('Н', 'н'),
        choice('А', 'а'),
        choice('Ч', 'ч'),
      ),
      /(val)/i
    ),

    true: $ => choice(
      seq(
        choice('И', 'и'),        
        choice('С', 'с'),
        choice('Т', 'т'),
        choice('И', 'и'),
        choice('Н', 'н'),
        choice('А', 'а'),
      ),
      /(true)/i
    ),

    false: $ => choice(
      seq(
        choice('Л', 'л'),        
        choice('О', 'о'),
        choice('Ж', 'ж'),
        choice('Ь', 'ь'),
      ),
      /(false)/i
    ),

    null: $ => /(null)/i,

    undefined: $ => choice(
      seq(
        choice('Н', 'н'),        
        choice('Е', 'е'),
        choice('О', 'о'),
        choice('П', 'п'),
        choice('Р', 'р'),        
        choice('Е', 'е'),
        choice('Д', 'д'),
        choice('Е', 'е'),
        choice('Л', 'л'),        
        choice('Е', 'е'),
        choice('Н', 'н'),
        choice('О', 'о'),                
      ),
      /(undefine)/i
    ),

    export_modifier: $ => choice(
      seq(
        choice('Э', 'э'),        
        choice('К', 'к'),
        choice('С', 'с'),
        choice('П', 'п'),
        choice('О', 'о'),
        choice('Р', 'р'),
        choice('Т', 'т'),
      ),
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
