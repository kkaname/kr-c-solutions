#include <stdio.h>

#define SMALL_LETTER 26 //26 alphabets from a to z
#define CAP_LETTER 26 //26 alphabets from a to z
#define NUM 10 //10 decimal digit
#define OTHERS 1

int main(void) {
    int c, freq[SMALL_LETTER + CAP_LETTER + NUM + OTHERS];
    int i;

    for (i = 0; i < (SMALL_LETTER + CAP_LETTER + NUM + OTHERS); i++) {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++freq[c - 97];
        }
        else if (c >= 'A' && c <= 'Z'){
            ++freq[SMALL_LETTER + c - 65];
        }
        else if (c >= '0' && c <= '9') {
            ++freq[SMALL_LETTER + CAP_LETTER + c - '0'];
        }
        else {
           ++freq[SMALL_LETTER + CAP_LETTER + NUM];
        }
    }

    // Now we print the histogram
    printf("Word Frequency Histogram:\n");
    printf("-------------------------\n");
    for (i = 0; i < (SMALL_LETTER + CAP_LETTER + NUM + OTHERS); i++) {
        if (freq[i] > 0) {
            if (i < SMALL_LETTER) {
                printf("%c: ", 'a' + i);
            }
            else if (i < SMALL_LETTER + CAP_LETTER) {
                printf("%c: ", 'A' + (i - SMALL_LETTER));
            }
            else if (i < (SMALL_LETTER + CAP_LETTER + NUM)) {
                printf("%c: ", '0' + (i - SMALL_LETTER - CAP_LETTER));
            }
            else {
                printf("others:");
            }

            for (int j = 0; j < freq[i]; j++) {
                printf("#");
            }
            putchar('\n');
        }
    }

    return 0;
}
