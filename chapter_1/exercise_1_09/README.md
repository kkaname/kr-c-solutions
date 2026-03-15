# Exercise 1-9: Replace Multiple Blanks with a Single Blank

Solution to Exercise 1-9 from *The C Programming Language* (K&R).

**Question:** Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

The program reads input one character at a time using `getchar()`. It tracks the previous character and skips consecutive spaces, ensuring multiple blanks are replaced by a single blank. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o copy_io copy_io.c
```

### Run:
```sh
./copy_io
```

## Expected Output:
### Input:
```
hello    world
this is  a    test
```
  ### Output:
  ```
  hello world
  this is a test
  ```
