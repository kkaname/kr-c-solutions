# Exercise 1-6: Verify getchar() != EOF

Solution to Exercise 1-6 from *The C Programming Language* (K&R).

**Question:** Verify that the expression `getchar() != EOF` is 0 or 1.

The program reads a single character from standard input and prints the result of `getchar() != EOF`. Entering any character prints `1` (true); signaling EOF with `Ctrl+D` prints `0` (false).

## Build & Run

### Compile:
```sh
gcc -o verify_expression verify_expression.c
```

### Run:
```sh
./verify_expression
```

## Output:
```
The expression getchar() != EOF gives: 1
```
