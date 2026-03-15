# Exercise 1-15: Temperature Conversion Function

Solution to Exercise 1-15 from *The C Programming Language* (K&R).

**Question:** Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

The program uses a dedicated `fahr_to_celsius` function to handle the Fahrenheit-to-Celsius conversion, abstracting the formula from the main control loop.

## Build & Run

### Compile:
```sh
gcc -o temp_func temp_func.c
```

### Run:
```sh
./temp_func
```

## Expected Output:
```
Fahrenheit      Celcius
-------------------------
  0             -17.78
 20             -6.67
 40             4.44
 60             15.56
 80             26.67
100             37.78
120             48.89
140             60.00
160             71.11
180             82.22
200             93.33
220             104.44
240             115.56
260             126.67
280             137.78
300             148.89
```