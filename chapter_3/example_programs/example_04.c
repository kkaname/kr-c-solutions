#include <stdio.h>

/*
 * Example program 4: Shell sort program to sort an array of integers,
 * here in increasing order
 */

void shellsort(int v[], int n);

int main(void) {
    int arr[] = {2, 5, 1, 30, 15, 7, 20, 3, 8, 4, 10, 17, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    shellsort(arr, n);

    return 0;
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >=0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }

    printf("sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
