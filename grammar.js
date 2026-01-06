/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

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
      alias(/[^\[\]]+/, $.text),
      ']',
      $._eol
    ),

    setting: $ => seq(
      $.setting_name,
      '=',
      optional($.setting_value),
      $._eol
    ),

    setting_name: $ => /[^;#=\s\[]+( *[^;#=\s\[])*/,
    setting_value: $ => choice(
      $.setting_text,
      seq(
        optional($.setting_text),
        repeat1($.setting_value_cont)
      )
    ),

    setting_value_cont: $ => seq(
      $._line_cont,
      optional($.setting_text)
    ),
    setting_text: $ => repeat1(choice(/[^\r\n]/, $._esc_bkslsh)),

    _line_cont: $ => token(prec(0, /\\\r?\n/)),
    _esc_bkslsh: $ => token(prec(1, "\\\\")),

    comment: $ => seq(/[;#]/, optional(alias(/[^\r\n]+/, $.text)), $._eol),
    _eol: $ => /\r?\n/,
    _space: $ => /[ \t]/,
  }
});
