# Exercise 1-19: Reverse String

Solution to Exercise 1-19 from *The C Programming Language* (K&R).

**Question:** Write a function `reverse(s)` that reverses the character string `s`. Use it to write a program that reverses its input a line at a time.

The program reads lines from standard input and reverses each line using a `reverse` function that swaps characters in place. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o reverse_string reverse_string.c
```

### Run:
```sh
./reverse_string
```

## Expected Output:
### Input:
```
hello world from c
```
### Output:
```
c morf drlow olleh
```
