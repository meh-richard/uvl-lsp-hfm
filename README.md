# UVLS - Universal Variability Language Server
[UVL](https://github.com/Universal-Variability-Language) language server based on [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Getting started

### Docs
Basic Documentation for the Codebase: [Docs](https://universal-variability-language.github.io/uvl-lsp/uvls/)
### Build
- Requirements
    - Rust 1.65+
    - Git
```
git clone https://codeberg.org/caradhras/uvls.git
cd  uvls
cargo build --release
```

### VSCode
There are prebuilt binaries for most common platforms so just installing the extension is enough.
```
ext install caradhras.uvls-code
```
### NeoVim

## Features
- Completions
- Syntax highlighting
- Error messages
- Goto definitions and references
- Semantic analysis via [z3](https://github.com/Z3Prover/z3)
- Configuration via json or through an interactive web interface
- Code inlays

## Feature versions
Features can have versions as in the hyper feature models of Seidl et al. (2014, "Capturing variability in space and time with hyper feature models"). The versions of a feature are declared in a `versions` section between `features` and `constraints`:

```
include
	Boolean.versioning

versions
	TurtleBot
		1.0, 1.1
		from 1.0: 2.0, 2.1
	Engine
		1.0, 1.1, Create 1.2
		from 1.1: Kobuki 1.0

constraints
	TurtleBot [>= 2.0] => ?Webservice [>= 1.1]
	TurtleBot [>= 2.0] => Engine [>= Kobuki 1.0]
```

- Each line is a development line: every version succeeds the one before it. The first line starts with the initial version, every further line starts with `from` and a version declared above it.
- A version is a version number such as `1`, `1.0`, `1.0.0` or `v1.0`, optionally preceded by one word, such as `Kobuki 1.0`.
- A constraint restricts a feature with `A [v]`, `A [> v]`, `A [>= v]`, `A [< v]`, `A [<= v]` or the range `A [v - w]`. Comparisons follow the predecessors, so versions on another branch are neither greater nor smaller. A leading `?` applies the restriction only if the feature is selected.
- The language level is `Boolean.versioning`.
- The versions of an imported feature are declared in its own model and can be used as `s.A [>= 1.0]`.
- The editor supports highlighting, folding, error messages, completion, go to definition, references and rename for versions.
- z3 does not analyse versions yet. Constraints with versions are left out of the analysis and the configuration editor.

The whole model from Figure 1 of the paper is in [examples/hyper-feature-model/turtlebot.uvl](examples/hyper-feature-model/turtlebot.uvl).


## Z3 Support
To enable feature analysis, z3 has to be in PATH. Install it via your favorite package manager or directly from [sources](https://github.com/Z3Prover/z3). Find instructions for some popular operating systems below.

### Windows
Download [Chocolatey via Powershell](https://www.liquidweb.com/kb/how-to-install-chocolatey-on-windows/) and run the command below. The PATH will be set automatically after a restart.
```
choco install z3
```

### macOS

```
brew install z3
```

### Debian/Ubuntu

```
sudo apt-get update
sudo apt-get install z3
```

## Configuration Editor
![Short VSCode UVLS Demo](img/show_editor.gif)
## Why tree-sitter
We use tree-sitter as an initial parser to create a loose syntax tree of UVL code fragments.
Because the tree-sitter grammar is more relaxed than the original UVL-grammar and has great error recovery,
we can capture many incorrect expressions and provide decent error messages in most cases.
Tree-sitter queries allow for easy symbol extraction and are used to transform the tree-sitter tree into a more compact graph.
This graph is then used for further analysis.
Queries are also used for syntax highlighting as tree-sitter was originally intended for that.
