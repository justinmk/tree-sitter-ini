tree-sitter-ini
==================

This grammar implements the INI format.

Overview
--------

Example INI file:

    [section name]
    some_key = some_value
    another-key = another value

    [another section]
    # a comment
    some_key = some_value
    another-key = another value

See [test/corpus/](./test/corpus/) for more examples.

### Notes

- Comments must start at column 1. Trailing comments are not supported. (Should they be?)

Known issues
------------

- `setting_value` [includes whitespace](https://github.com/justinmk/tree-sitter-ini/issues/3).
  Should values exclude surrounding whitespace?

Reference
---------

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

