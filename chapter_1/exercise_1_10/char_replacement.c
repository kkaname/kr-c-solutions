#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            default:
                putchar(c);
        }
    }
    /*
     * The reason I have prefered switch statement is that
     * it is faster then if - else if ladder and better readability.
     */

    /* -> Alternate way to solve:
     *
     * while ((c = getchar()) != EOF) {
     *   if (c == '\t') {
     *       putchar('\\');
     *       putchar('t');
     *   }
     *   else if (c == '\\') {
     *       putchar('\\');
     *       putchar('\\');
     *   }
     *   else if (c == '\b') {
     *       putchar('\\');
     *       putchar('b');
     *   }
     *   else {
     *       putchar(c);
     *   }
     *}
     */

    return 0;
}
