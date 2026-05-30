# Exercise 3-02: escape function

Solution to Exercise 3-02 from *The C Programming Language* (K&R).

**Question:** Write a function escape(s, t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well converting escape sequences into the real characters.

  This program asks us to write two functions, one is escape(s, t) that takes a string and converts the actual escape sequences to visible escape character sequence and another function that is complete opposite of escape(s, t) that takes a input string and converts the visible escape character sequence to actual escape sequence.

## Build & Run

### Compile:
```sh
gcc -o escape escape.c
```

### Run:
```sh
./escape
```

## Expected Output:
```
Enter a statement: hello	world
Enter your choice: 1-> escape, 2-> unescape: 1
hello\tworld\n

Enter a statement: hello\tworld\n
Enter your choice: 1-> escape, 2-> unescape: 2
hello	world

```
