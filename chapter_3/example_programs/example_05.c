#include <stdio.h>
#include <string.h>

/*
 * Example program 5: program to reverse string s.
 */

void reverse(char s[]);

int main(void) {
    char s[] = "hello world!";
    reverse(s);

    return 0;
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
