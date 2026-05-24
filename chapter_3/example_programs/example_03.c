#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * example program or atoi, for converting
 * a string to its numeric equivalent
 */

#define MAXLEN 100  

int atoi(char s[]);

int main() {
    char s[] = "-1234";

    int num = atoi(s);
    printf("Equivalent numberic value is %d.\n", num);

    return 0;
}

int atoi(char s[]) {
    int sign = +1;
    int i, n;

    for (i = 0; isspace(s[i]); i++)
        ;

    // to find whether there is a minus sign or not
    sign = (s[i] == '-')? -1: +1;
    // now we have to skip the sign if there is one
    if (s[i] == '-' || s[i] == '+') {
        i++;
    }
    
    for (n = 0; isdigit(s[i]); i++) {
        n = (n * 10) + (s[i] - '0');
    }
    return sign * n;    
}
