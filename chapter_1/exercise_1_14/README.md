# Exercise 1-14: Character Frequency Histogram

Solution to Exercise 1-14 from *The C Programming Language* (K&R).

**Question:** Write a program to print a histogram of the frequencies of different characters in its input.

The program reads input from standard input and prints a horizontal histogram showing the frequency of lowercase letters, digits, and all other characters. Each category is displayed with `#` bars representing its count. Press `Ctrl+D` (EOF) to see the result.

## Build & Run

### Compile:
```sh
gcc -o char_freq_histogram char_freq_histogram.c
```

### Run:
```sh
./char_freq_histogram
```

## Expected Output:
### Input:
```
hello    world
this is  a    test
```
### Output:
```
Word Frequency Histogram:
-------------------------
a: #
d: #
e: ##
h: ##
i: ##
l: ###
o: ##
r: #
s: ###
t: ###
w: #
others:#####
```
