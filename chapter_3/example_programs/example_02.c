#include <stdio.h>

/*
 * Exampler program to to count the occurance of each
 * digit, white space and all other characters using switch statement
 */

int main(void) {
    int ndigits[10], nwhite, nothers;
    int c, i;

    nwhite = nothers = 0;
    for (i = 0; i < 10; i++) {
        ndigits[i] = i;
    }

    while ((c = getchar()) != EOF) {
        switch (c) {
            default:
                nothers++;
                break;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ndigits[c - '0']++;
                break;
            case ' ': case '\n': case '\t': 
                nwhite++;
                break;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; i++) {
        printf(" '%d' = %d", i, ndigits[i]);
    }
    printf("\n");
    printf("nwhite = %d, nothers = %d.\n", nwhite, nothers);

    return 0;
}
