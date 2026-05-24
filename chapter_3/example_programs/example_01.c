#include <stdio.h>

/*
 * Example program of binary search that finds and 
 * returns the position of a element from a sorted 
 * array
 */

#define MAXLEN 100

int binary_search(int v[], int x, int n);

int main(void) {
    int v[MAXLEN];
    int x, pos;

    for (int i = 0; i < MAXLEN; i++) {
        v[i] = i + 1;
    }
    
    pos = -1;

    x = 2;
    // to search the element 2 from the sorted array

    pos = binary_search(v, x, MAXLEN);

    if (pos == -1) {
        printf("Element not found in the array.\n");
    }
    else {
        printf("Element found in the position = %d.\n", pos);
    }

}

int binary_search(int v[], int x, int n) {
    int low, high, mid;

    low = 0; 
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (x == v[mid]) {
            return mid;
        }
        else if (x < v[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return 0;
}
