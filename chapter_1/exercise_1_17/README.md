# Exercise 1-17: Lines Longer Than 80 Characters

Solution to Exercise 1-17 from *The C Programming Language* (K&R).

**Question:** Write a program to print all input lines that are longer than 80 characters.

The program reads lines from standard input and only prints those that exceed 80 characters in length. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o longerline_80 longerline_80.c
```

### Run:
```sh
./longerline_80
```

## Expected Output:
### Input:
```
short line
this line is definitely longer that eighty characters and should therefore appear in the output of the program
```

### Output:
```
this line is definitely longer that eighty characters and should therefore appear in the output of the program
```
