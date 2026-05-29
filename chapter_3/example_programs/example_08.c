#include <stdio.h>

/*
 * Example 3-8: process only non-negative elements in the array and skipp negative
 */

int main(void) {
    int arr[] = {1, -2, 5, -1, 9, -3, 7, -8, 9};
    int i, sum = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] <= 0) {
            continue;
        }
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);

    return 0;
}
