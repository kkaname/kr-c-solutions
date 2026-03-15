# Exercise 1-13: Word Length Histogram

Solution to Exercise 1-13 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

The program reads input from standard input and prints both a horizontal and vertical histogram of word lengths. Word length frequencies are stored in an array and displayed as `#` bars. Press `Ctrl+D` (EOF) to see the result.

## Build & Run

### Compile:
```sh
gcc -o word_length_histogram word_length_histogram.c
```

### Run:
```sh
./word_length_histogram
```

## Expected Output:
### Input:
```
hello    world
this is  a    test
```
### Output:
```
Horizontal Histogram
---------------------
  1:    #
  2:    #
  3:
  4:    ##
  5:    ##

Vertical Histogram
-------------------
           #  #
  #  #     #  #
  1  2  3  4  5
---------------
```
