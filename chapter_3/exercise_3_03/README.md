# Exercise 3-03: expand function

Solution to Exercise 3-03 from *The C Programming Language* (K&R).

  **Question:** Write a functoin expand(s1, s2) that expands shorthand noations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.

This question as

## Build & Run

### Compile:
```sh
gcc -o expand expand.c
```

### Run:
```sh
./expand
```

## Expected Output:
```
-0-9a-zA-Z-
expanded string: -0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-
```
