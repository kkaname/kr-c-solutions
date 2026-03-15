# Exercise 1-5: Reverse-Order Temperature Table

Solution to Exercise 1-5 from *The C Programming Language* (K&R).

**Question:** Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

The program prints a Celsius-to-Fahrenheit table in descending order (300 → 0, step 20). The reversal is achieved by initializing the loop variable to the upper bound and decrementing each iteration.

## Build & Run

### Compile:
```sh
gcc -o reverse_order_temp reverse_order_temp.c
```

### Run:
```sh
./reverse_order_temp
```

## Output:
```
Celsius         Fahrenheit
--------------------------
300             572.00
280             536.00
260             500.00
240             464.00
220             428.00
200             392.00
180             356.00
160             320.00
140             284.00
120             248.00
100             212.00
 80             176.00
 60             140.00
 40             104.00
 20              68.00
  0              32.00
```
