# Exercise 1-8: Count Blanks, Tabs, and Newlines

Solution to Exercise 1-8 from *The C Programming Language* (K&R).

**Question:** Write a program to count blanks, tabs, and newlines.

The program reads characters one at a time from standard input using `getchar()`, counting blanks, tabs, and newlines. When EOF is reached (`Ctrl+D`), the totals are printed.

## Build & Run

### Compile:
```sh
gcc -o count_b_t_n count_b_t_n.c
```

### Run:
```sh
./count_b_t_n
```

## Expected Output:
### Input:
```
hello world
this  is a  test
```
### Output:
```
blanks  : 3
tabs    : 2
newlines: 1
```
