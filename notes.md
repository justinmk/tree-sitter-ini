treesitter ini, aws-config

tree-sitter has nice docs to walk-through this.
https://tree-sitter.github.io/tree-sitter/creating-parsers

Creating a new parser for the INI file type
-------------------------------------------

    $ npm init

    # Install a small module that lets your parser be used from Node.
    $ npm install --save nan

    # Install (and depend-on) the Tree-sitter CLI.
    $ npm install --save-dev tree-sitter-cli

Create the grammar.js stub
--------------------------

`grammar.js`:

    module.exports = grammar({
      name: 'ini',
      rules: {
        // TODO: add the actual grammar rules
        source_file: $ => 'hello'
      }
    });

Generate the parser
-------------------

    $ ./node_modules/.bin/tree-sitter generate

That generates `src/parser.c` from the `grammar.js` that we defined (typically
tree-sitter projects put this in their `npm run build` script in
`package.json`). The parser can be tested now:

    $ echo hello > test
    $ ./node_modules/.bin/tree-sitter parse test
    (source_file [0, 0] - [1, 0])

It also generates some glue files to compile the parser's C source a library
and load it as a Node.js module. Cool!

- `binding.gyp` tells Node.js how to compile the parser's C source.
- `index.js` is the entrypoint for Node.js to load the compiled C module.
- `src/binding.cc` wraps your parser in a JavaScript object for Node.js
- `src/tree_sitter/parser.h` is a C header by `parser.c`.

Tree-sitter will detect ambiguity during parser generation and throw an error:
