module.exports = grammar({
  name: 'ini',

  extras: $ => [
    $.comment,
    $._blank,
    /[\t ]/
  ],

  rules: {
    document: $ => seq(
      repeat($._blank),  // Eat blank lines at top of file.
      repeat($.section),
    ),

    // Section has:
    // - a title
    // - zero or more settings (name=value pairs)
    // - comments (optional)
    section: $ => prec.left(seq(
      $.section_name,
      repeat(seq(
        $.setting,
      )),
    )),

    section_name: $ => seq(
      '[',
      alias(/[^\[\]]+/, $.text),
      ']',
      /\r?\n/,
    ),

    setting: $ => seq(
      alias(/[^;#=\s\[]+( *[^;#=\s\[])*/, $.setting_name),
      '=',
      optional(alias(/.+/, $.setting_value)),
      /\r?\n/,
    ),

    comment: $ => seq(/[;#]/, alias(/[^\r\n]*/, $.text), /\r?\n/),

    _blank: () => field('blank', /\r?\n/),
  }
});
