# Exercise 3-01: Rewrite Binary Search

Solution to Exercise 3-01 from *The C Programming Language* (K&R).

**Question:** Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside), Write a version with only one test inside the loop and measure the difference in run-time.

The program asks us to rewrite the binary search algorithm to use only one test inside the loop and compare the run-time with the original two-test version.

## Build & Run

### Compile:
```sh
gcc -o binary_search binary_search.c
```

### Run:
```sh
./binary_search
```

## Expected Output:
```
Binary Search with if-else if: 4 clock_count (0.000004 seconds)
Binary Search with only one if: 3 clock_count (0.000003 seconds)
```
