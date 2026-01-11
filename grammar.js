/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// generate regexp for ini names, that is:
// - accept escape sequences excluding line-cont
// - accept arbitary spaces within, but not leading or trailing
// exp_chars expression should disallow spaces and backslashes
function regexp_names(exp_chars, exp_space = "[ \\t]") {
  let exp_chars_esc = `(${exp_chars})|(\\\\[^\\r\\n])`;
  let exp = `(${exp_chars_esc})+((${exp_space})+(${exp_chars_esc})+)*`;
  return new RegExp(exp);
}

module.exports = grammar({
  name: 'ini',

  extras: $ => [
    $.comment,
    $._eol,    //blank lines
    $._space,
  ],

  rules: {
    document: $ => seq(
      optional($.unnamed_section),
      repeat($.section)
    ),

    // Unnamed Section has:
    // - no title
    // - one or more settings (name=value pairs)
    unnamed_section: $ => repeat1($.setting),

    // Section has:
    // - a title
    // - zero or more settings
    section: $ => seq(
      $.section_name,
      repeat($.setting)
    ),

    section_name: $ => seq(
      '[',
      alias(regexp_names("[^\\s\\[\\]\\\\]"), $.text), //allows ";#", but should we?
      ']',
      $._eol,
    ),

    setting: $ => seq(
      $.setting_name,
      '=',
      optional($.setting_value),
      $._eol
    ),

    setting_name: $ => regexp_names("[^\\s\\[\\]\\\\;#=]"),
    setting_value: $ => choice(
      alias($.setting_text, $.text),
      seq(
        optional(alias($.setting_text, $.text)),
        repeat1($.setting_value_cont)
      )
    ),
    setting_value_cont: $ => seq(
      /\\\r?\n/,
      optional(alias($.setting_text_cont, $.text)),
    ),

    // setting text (non-continued) includes:
    // - all non-LF non-line-cont chars
    // and is equal to:
    // - all non-LF non-backslash chars,
    // - or all 2-char escape sequences omitting line-cont
    setting_text: $ => /(([^\r\n\\])|(\\[^\r\n]))+/,

    // setting text (continued) inclcudes:
    // - exactly the same as setting_text,
    // - and requires the 1st non-space char not being ";#" (comments)
    // transformed to:
    // 1. consume all leading spaces
    // 2. match one setting_text char that is also not space or ";#",
    // 3. match zero or more setting_text char
    // NOTE: tree-sitter treats "\s" as " \t\r\n"
    setting_text_cont: $ => /[ \t]*(([^\s\\;#])|(\\[^\r\n]))(([^\r\n\\])|(\\[^\r\n]))*/,

    comment: $ => seq(/[;#]/, optional(alias(/[^\r\n]+/, $.text)), $._eol),
    _eol: $ => /\r?\n/,
    _space: $ => /[ \t]/,
  }
});
