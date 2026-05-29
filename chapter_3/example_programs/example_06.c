#include <stdio.h>
#include <string.h>

#define MAXLEN 100

/*
 * Exercise 3-6: program to implement itoa function that
 * converts an integer to a character string which is inverse of atoi.
 */

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void) {
    char s[MAXLEN];
    itoa(12345, s);

    return 0;
}

void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) { // record sign
        n = -n;         // make n positive
    }

    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';

    reverse(s);
}

void reverse(char s[]) {
    int temp, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("reversed string: %s\n", s);
}
