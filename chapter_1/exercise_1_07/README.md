# Exercise 1-7: Print the Value of EOF

Solution to Exercise 1-7 from *The C Programming Language* (K&R).

**Question:** Write a program to print the value of EOF.

`EOF` is a macro defined in `<stdio.h>` representing the end-of-file indicator. The program prints its integer value using `printf`. On most systems, this value is `-1`.

## Build & Run

### Compile:
```sh
gcc -o value_EOF value_EOF.c
```

### Run:
```sh
./value_EOF
```
```sh
gcc -o value_EOF value_EOF.c
./value_EOF
```

## Output:
```
The value of EOF is -1
```
