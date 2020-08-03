module.exports = grammar({
  name: 'ini',

  extras: $ => [
    $.comment,
    /[ \t]+/,
  ],

  rules: {
    document: $ => repeat(seq(
      choice(
        $.section_name,
        $.setting,
        $.comment,
      ),
      optional(/\n+/),
    )),

    // sections: $ => prec(1, seq(
    //   repeat(seq(
    //     $.section,
    //     '\n'
    //   )),
    //   $.section,
    //   optional('\n')
    // )),

    // section: $ => prec.left(seq(
    //   /[\n]*/,
    //   // Section must have a name.
    //   $.section_name,
    //   // Zero or more settings (name=value pairs).
    //   // TODO: how to make this optional?
    //   repeat1(seq(
    //     /[\n]+/,
    //     $.setting)),
    // )),

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

    comment: $ => token(prec(-10, /#.*/)),
  }
});

function linesep1(rule) {
  return seq(rule, repeat(seq('\n', rule)))
}

function linesep(rule) {
  return optional(linesep1(rule))
  // return linesep1(rule)
}
