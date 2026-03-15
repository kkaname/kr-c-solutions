# Exercise 1-10: Character Replacement

Solution to Exercise 1-10 from *The C Programming Language* (K&R).

**Question:** Write a program to copy its input to its output, replacing each tab by `\t`, each backspace by `\b`, and each backslash by `\\`. This makes tabs and backspaces visible in an unambiguous way.

The program reads input one character at a time using `getchar()`. Special characters (tab, backspace, backslash) are replaced with their visible escape sequences; all other characters are printed unchanged. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o char_replacement char_replacement.c
```

### Run:
```sh
./char_replacement
```

## Expected Output:
### Input:
```
hello    world
this\is    a\    test
```
### Output:
```
hello\tworld
this\\is\ta\\\ttest
```
