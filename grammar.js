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
    setting_value: $ => token(choice(
      /[^\r\n]*[^\r\n\\]/,              // single-line value, length > 0, prohibit trailing '\'
      seq(
        /[^\r\n]*/,                     // single-line value, length >= 0
        repeat1(/\\\r?\n[^\r\n]*/)      // '\' + eol + a new line of text
      )
    )),

    comment: $ => seq(/[;#]/, optional(alias(/[^\r\n]+/, $.text)), $._eol),
    _eol: $ => /\r?\n/,
    _space: $ => /[ \t]/,
  }
});
