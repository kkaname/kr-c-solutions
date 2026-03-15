# Exercise 1-11: Word Counter

Solution to Exercise 1-11 from *The C Programming Language* (K&R).

**Question:** How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?

The program reads characters from standard input and counts words using an IN/OUT state machine. A word is defined as a sequence of non-whitespace characters. When EOF is reached (`Ctrl+D`), the total word count is printed.

## Build & Run

### Compile:
```sh
gcc -o word_count word_count.c
```

### Run:
```sh
./word_count
```

## Expected Output:
### Input:
```
hello    world
this is  a    test
```
### Output:
```
Number of words: 6
```
