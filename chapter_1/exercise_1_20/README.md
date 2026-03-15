# Exercise 1-20: Detab

Solution to Exercise 1-20 from *The C Programming Language* (K&R).

**Question:** Write a program `detab` that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every `n` columns. Should `n` be a variable or a symbolic parameter?

The program replaces each tab character with the appropriate number of spaces to reach the next tab stop (defined as every 8 columns via `TAB_WIDTH`). Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o detab detab.c
```

### Run:
```sh
./detab
```

## Expected Output:
### Input:
```
hello    world
//   ^
//   `- actual tab character
```
### Output:
```
hello    world
```
