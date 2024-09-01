tree-sitter-ini
==================

This grammar implements the [INI format](https://en.wikipedia.org/wiki/INI_file).

Overview
--------

Example INI file:

```ini
[section name]
some_key = some_value
# a comment
another-key=another value

[another section]
# Keys may contain whitespace.
key 1 =
# Value may be empty.
key 2 =
```

See [test/corpus/](./test/corpus/) for more examples.

Notes
-----

- Comments (`;` or `#`) must start at column 1. Trailing comments are not supported yet. [#13](https://github.com/justinmk/tree-sitter-ini/issues/13)
- Equals sign (=) and semicolon (;) are reserved characters and cannot appear in the key. Any whitespace surrounding the key is stripped by the parser. [ref](https://en.wikipedia.org/wiki/INI_file#Key-value_pairs)
- Section name must appear on a line by itself.
- Duplicate names are not checked.
- Line continuations (`\`) are not supported.
- `setting_value` includes whitespace. [#3](https://github.com/justinmk/tree-sitter-ini/issues/3).
  Should values exclude surrounding whitespace?
- [Quoted keys/values](https://en.wikipedia.org/wiki/INI_file#Quoted_values) are not supported yet.
- Escape sequences are not supported.

Reference
---------

- https://en.wikipedia.org/wiki/INI_file
- https://github.com/textmate/ini.tmbundle

Release
-------

Steps to perform a release:

1. Bump and tag the version (choose `patch`/`minor`/`major` as appropriate).
   ```
   npm version patch -m "release %s"
   ```
2. Bump to prerelease, without creating a tag .
   ```
   npm version --no-git-tag-version prerelease --preid dev && git add package*.json && git commit -m bump
   ```
3. Push.
   ```
   git push --follow-tags
   ```
4. Release the tagged commit: https://github.com/justinmk/tree-sitter-ini/releases/new

