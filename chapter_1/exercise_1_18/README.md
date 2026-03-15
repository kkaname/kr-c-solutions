# Exercise 1-18: Remove Trailing Blanks and Tabs

Solution to Exercise 1-18 from *The C Programming Language* (K&R).

**Question:** Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

The program reads lines from standard input, strips trailing blanks and tabs from each line, and removes entirely blank lines. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o trailing_blanks trailing_blanks.c
```

### Run:
```sh
./trailing_blanks
```

## Expected Output:
### Input:
```
hello world      
```

### Output:
```
hello world
```
Removes trailing blanks and tabs from the input line.
