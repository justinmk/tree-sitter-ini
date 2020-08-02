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

file contents

    module.exports = grammar({
      name: 'YOUR_LANGUAGE_NAME',

      rules: {
        // TODO: add the actual grammar rules
        source_file: $ => 'hello'
      }
    });

Generate the parser
-------------------

    $ ./node_modules/.bin/tree-sitter generate

That generates `src/parser.c` from the `grammar.js` that we defined. Typically,
tree-sitter projects put this in their `npm run build` script in `package.json`.

