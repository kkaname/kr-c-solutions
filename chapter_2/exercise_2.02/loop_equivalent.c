#include <stdio.h>

/*Exercise 2-02: Write a loop equivalent for the loop given below without using logical operators like && and ||:
 * >for(int = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF){
 * >    s[i] = c;
 * >}
 */

#define LIM 100

int main(void) {
    int c, i = 0;
    char s[LIM];

    while (1) {
        if (i >= LIM - 1) {
            break;
        }

        c = getchar();

        if (c == '\n') {
            break;
        }
        else if (c == EOF) {
            break;
        }
        else  {
            s[i] = c;
        }
        ++i;
    }

    printf("\n%s\n", s);

    return 0;
}
