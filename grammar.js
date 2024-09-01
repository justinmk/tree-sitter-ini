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
      alias(/.+/, $.setting_value),
      /\r?\n/,
    ),

    // setting_name: () => /[^#=\s\[]+/,
    // setting_value: () => /[^#\n]+/,
    comment: $ => seq(/[;#]/, alias(/.*/, $.text), /\r?\n/),

    _blank: () => field('blank', /\r?\n/),
  }
});
