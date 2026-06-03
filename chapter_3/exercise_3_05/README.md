# Exercise 3-05: itob

Solution to Exercise 3-05 from *The C Programming Language* (K&R).

**Question:** Write the function itob(n, s, b) that converts the integer n into a base b character representation in the string s. In particular, itob(n, s, 16) formats n asa a hexadecimal integer in s.

This question asks us to input a integer from the user and also the base to which he wants the convert that integer, and then converts that integer to the required base and outputs it to the user.

## Build & Run

### Compile:
```sh
gcc -o itob itob.c
```

### Run:
```sh
./itob
```

## Expected Output:
```
Enter n: 13
Enter base b: 2
Binary Equivalent -> 0b1101
Enter n: 83
Enter base b: 8
Octal Equivalent -> 123
Enter n: 255
Enter base b: 16
Hexadecimal Equivalent -> FF
```
