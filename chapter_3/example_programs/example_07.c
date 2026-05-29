#include <stdio.h>
#include <string.h>

/*
 * Exercise 3-7: write a function trim that removes trailing blanks, tabs, and newlines from the end of a string,
 * using a break to exit from a loop when the rightmost non-blank, non-tab, non-newline character is found.
 */

int trim(char s[]);

int main(void) {
    char str[] = "hello world!      ";
    trim(str);

    return 0;
}

int trim(char s[]) {
    int n;
    for (n = strlen(s) - 1; n >= 0; n--) {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
            break;
        }
        s[n + 1] = '\0';
    }

    printf("%s\n", s);
    return n;
}
