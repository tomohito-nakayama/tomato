# Copilot Instructions

## Build Commands

```bash
make          # Build the TomatoVeggie binary (gcc with -Wall -Wextra -O2)
make clean    # Remove the compiled binary
./TomatoVeggie  # Run the program
```

## Architecture

Single-file C project (`TomatoVeggie.c`). The program is a parody story written as C code — each "scene" is a void function that prints narrative output. The `party[]` struct array defines the vegetable characters; `main()` calls each scene in order.

## Conventions

- Characters are defined in a `VEGETABLE` struct array (`party[]`) at the top of the file, terminated with a `{NULL, NULL}` sentinel.
- Each narrative scene is its own `void` function with a Japanese comment block header describing its purpose.
- Scene functions are forward-declared as prototypes before `main()`.
- Comments use Japanese for business logic descriptions; English for C/code-level annotations.
