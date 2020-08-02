module.exports = grammar({
  name: 'ini',
  extras: $ => [
    $.comment,
    /\s/,
  ],
  rules: {
    document: $ => repeat(
      $.section,
    ),

    section: $ => seq(
      // Section must have a name.
      $.section_name,
      // Section name must be on its own line.
      '\n',
      // Section has zero or more settings (name=value pairs).
      repeat($.setting),
    ),
    section_name: $ => seq(
      '[',
      /[^\[\]]+/,
      ']',
    ),
    setting: $ => seq(
      $.setting_name,
      '=',
      $.setting_value,
      '\n',     // Only one setting per line.
    ),
    setting_name: $ => /[^=]+/,
    setting_value: $ => /[^\n]+/,

    comment: $ => token(
      seq('#', /.*/),
    ),
  }
});
