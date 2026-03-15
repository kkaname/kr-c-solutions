# Exercise 1-2: printf Escape Sequences

Solution to Exercise 1-2 from _The C Programming Language_ (K&R).

**Question:** Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.

The exercise asks what happens when `printf`'s argument string contains `\c`, where `c` is a character that is **not** a recognized escape sequence (e.g. `\n`, `\t`, `\\`).

The program uses `\c` inside a `printf` call. When compiled, GCC emits a warning:

```
warning: unknown escape sequence '\c'
```

The behavior of unrecognized escape sequences is undefined by the C standard — most compilers will either warn and ignore the backslash, or treat it as the literal character.

## Build & Run

### Compile:

```sh
gcc -o printf_argument printf_argument.c
```

### Run:

```sh
./printf_argument
```

## Output:
```
main.c: In function ‘main’:
main.c:4:28: warning: unknown escape sequence: ‘\c’
    4 |     printf("hello, world\c");
      |                         ^
```
