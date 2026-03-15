# Exercise 1-4: Celsius–Fahrenheit Table

Solution to Exercise 1-4 from *The C Programming Language* (K&R).

**Question:** Write a program to print the corresponding Celsius to Fahrenheit table.

The program prints a two-column Celsius-to-Fahrenheit conversion table (0–300, step 20) using the formula `F = (9/5) × C + 32`, with a header row and separator line for readability.

## Build & Run

### Compile:
```sh
gcc -o celsius_fahrenheit celsius_fahrenheit.c
```

### Run:
```sh
./celsius_fahrenheit
```

## Output:
```
Celsius         Fahrenheit
--------------------------
  0              32.00
 20              68.00
 40             104.00
 60             140.00
 80             176.00
100             212.00
120             248.00
140             284.00
160             320.00
180             356.00
200             392.00
220             428.00
240             464.00
260             500.00
280             536.00
300             572.00
```
