# Exercise 1-11: Data Type Ranges

Solution to Exercise 2-1 from *The C Programming Language* (K&R).

**Question:** Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.


## Description:

This program systematically prints the minimum and maximum values of all fundamental C data types — integer and floating-point — using the standard headers <limits.h> and <float.h>.


|    Header     |     Purpose                                                 |
|---------------|-------------------------------------------------------------|
|  <limits.h>   |   Defines min/max constants for all integer types           |
|  <float.h>    |   Defines min/max constants for all floating-point types    |

### Types Covered
***Integer Types (via <limits.h>):***
 - char — signed, unsigned, and platform default
 - short int — signed and unsigned
 - int — signed and unsigned
 - long int — signed and unsigned
 - long long int — signed and unsigned


***Floating-Point Types (via <float.h>):***
 - float
 - double
 - long double


### Key Constants Reference
|       Constant           |            Description                                         |
|--------------------------|----------------------------------------------------------------|
|  CHAR_BIT                |  Number of bits in a char (typically 8)                        |
|  CHAR_MIN / CHAR_MAX     |   Range of default char (platform-dependent sign)              |
|  SCHAR_MIN / SCHAR_MAX   |   Range of signed char                                         |
|  UCHAR_MAX               |   Max of unsigned char                                         |
|  SHRT_MIN / SHRT_MAX     |   Range of short                                               |
|  INT_MIN / INT_MAX       |   Range of int                                                 |
|  LONG_MIN / LONG_MAX     |   Range of long                                                |
|  LLONG_MIN / LLONG_MAX   |   Range of long long                                           |
|  FLT_MIN / FLT_MAX       |   Range of float (smallest positive normalized value / max)    |
|  DBL_MIN / DBL_MAX       |   Range of double                                              |
|  LDBL_MIN / LDBL_MAX     |   Range of long doublea                                        |



## Build and Run:
### Compile: 
```sh
gcc -o type_ranges type_ranges.c
```
### Run: 
```sh
./type_ranges
```

## Expected Output
```
########## CHAR ##########
bits: 8
Minimum value of char: -128
Maximum value of char: 127
Minimum value of signed char: -128
Maximum value of signed char: 127
Maximum value of unsigned char: 255

########## SHORT INT ##########
Minimum value of short: -32768
Maximum value of short: 32767
Maximum value of unsigned short: 65535

########## INT ##########
Minimum value of int: -2147483648
Maximum value of int: 2147483647
Maximum value of unsigned int: 4294967295

########## LONG INT ##########
Minimum value of long: -9223372036854775808
Maximum value of long: 9223372036854775807
Maximum value of unsigned long: 18446744073709551615

################ LONG LONG INT #################
Minimum value of signed long long int: -9223372036854775808
Maximum value of signed long long int: 9223372036854775807
Maximum value of unsigned long long int max: 18446744073709551615

################ FLOAT PRECISION NUMBERS #################
Minimum value of float: 1.175494e-38
Maximum value of float: 3.402823e+38
Minimum value Double: 2.225074e-308
Maximum value of Double: 1.797693e+308
Minimum value of Long Double: 3.362103e-4932
Maximum Long Double: 1.189731e+4932
```
