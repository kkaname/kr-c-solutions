# Exercise 1-21: Entab

Solution to Exercise 1-21 from *The C Programming Language* (K&R).

**Question:** Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for `detab`. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?

The program replaces consecutive blanks with the minimum number of tabs and blanks to preserve the same spacing, using a tab width of 8 columns. Tabs are given preference when they suffice to reach a tab stop. Press `Ctrl+D` (EOF) to finish input.

## Build & Run

### Compile:
```sh
gcc -o entab entab.c
```

### Run:
```sh
./entab
```

## Expected Output: 
### Input: 
```
hello          world    from  c
```
### Output:
```
hello          world    from  c
```
