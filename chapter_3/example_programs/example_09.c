#include <stdio.h>

/*
 * Exercise 3-9: program of determining whether two arrays a and b have an element in common.
 */

int main(void) {
    int i, j;
    int n, m;

    found:
        /*got one: a[i] == b[j], do something*/
        goto done;

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 5, 30, 50};
    n = sizeof(a) / sizeof(a[0]);
    m = sizeof(b) / sizeof(b[0]);

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            if (a[i] == a[j]) {
                goto found;
            }
        }
    }
    /* didn't find any comman element, so do something */

    done:

    return 0;
}
