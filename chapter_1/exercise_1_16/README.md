# Exercise 1-16: Longest Line

Solution to Exercise 1-16 from *The C Programming Language* (K&R).

**Question:** Revise the main routine of the longest-line program so that it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.

The program reads lines from standard input and tracks the longest one. It uses a `getLine` function to read each line and a `copy` function to save the current longest. After EOF is reached (`Ctrl+D`), it prints the longest line and its length.

## Build & Run

### Compile:
```sh
gcc -o longest_line longest_line.c
```

### Run:
```sh
./longest_line
```

## Expected Output:
### Input:
```
Hello world
C is a programming language
hello world from c
```
### Output:
```
The longest string with a length of 29 is "c is a programming language"
```
