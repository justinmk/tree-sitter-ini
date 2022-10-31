tree-sitter-vimdoc
==================

This grammar implements the INI format.

Overview
--------

todo

Known issues
------------

todo


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
4. Release the tagged commit: https://github.com/neovim/tree-sitter-vimdoc/releases/new

