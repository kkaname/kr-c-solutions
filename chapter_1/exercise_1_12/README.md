# Exercise 1-12: Word Splitter

Solution to Exercise 1-12 from *The C Programming Language* (K&R).

**Question:** Write a program that prints its input one word per line.

The program reads input from standard input and prints each word on a separate line. It uses an IN/OUT state machine to detect transitions between words and whitespace (spaces, tabs, newlines). Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o copy_ip_nl copy_ip_nl.c
```

### Run:
```sh
./copy_ip_nl
```

## Expected Output:
### Input:
```
hello    world
this is  a    test
```
### Output:
```
hello
world
this
is
a
test
```
