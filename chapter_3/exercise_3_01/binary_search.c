#include <stdio.h>
#include <time.h>

#define MAXLEN 100
#define ITERATIONS 100

long test_binary_search(int (*binarysearch)(int v[], int n, int x), int v[], int n, int x);
int actual_binary_search(int v[], int n, int x);
int binary_search(int v[], int n, int x);

int main(void) {
    int v[MAXLEN];
    int ele;

    for (int i = 0; i < MAXLEN; i++) {
        v[i] = i + 1;
    }

    ele = -1;

    long clock_count;

    // first we test the Binary Search with the if-else if inside the loop
    clock_count = test_binary_search(actual_binary_search, v, MAXLEN, ele);
    printf("Binary Search with if-else if: %lu clock_count (%f seconds)\n", clock_count, (double)clock_count / CLOCKS_PER_SEC);


    // then we test the Binary Search with only one test inside 
    clock_count = test_binary_search(binary_search, v, MAXLEN, ele);
    printf("Binary Search with only one if: %lu clock_count (%f seconds)\n", clock_count, (double)clock_count / CLOCKS_PER_SEC);

    return 0;
}

int actual_binary_search(int v[], int n, int x) {
    int low, high, mid; 
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (v[mid] == x) {
            return mid;
        }
        else if (x < v[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int binary_search(int v[], int n, int x) {
    int low, high, mid; 
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (high >= 0 && x == v[high - 1]) {
        return high;
    }
}

long test_binary_search(int (*binarysearch)(int v[], int n, int x), int v[], int n, int x) {
    long clock_count = clock();

    for (int i = 0; i < ITERATIONS; i++) {
        binarysearch(v, n, x);
    }
    
    return clock() - clock_count;
}

