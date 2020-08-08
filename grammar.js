module.exports = grammar({
  name: 'ini',

  extras: $ => [
    $.comment,
    /[ \t]+\n*/,  // Ignore empty lines.
  ],

  rules: {

    document: $ => seq(
      /[\n]*/,
      repeat(seq(
        $.section,
      )),
    ),

    // Section has:
    // - a title
    // - zero or more settings (name=value pairs)
    section: $ => prec.left(seq(
      $.section_name,
      /[\n]+/,
      repeat(seq(
        $.setting,
        /[\n]+/,
      )),
    )),

    section_name: $ => seq(
      '[',
      /[^\[\]\n]+/,
      ']'
    ),

    setting: $ => seq(
      $.setting_name,
      '=',
      $.setting_value
    ),

    setting_name: $ => /[^#=\s\[]+/,
    setting_value: $ => /[^#\n]+/,

    comment: $ => token(prec(-10, /#.*\n+/)),
  }
});
