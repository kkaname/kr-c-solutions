#include <stdio.h>

#define MAXLEN 1000

int get_line(char s[], unsigned int limit);
void escape(char src[], char dest[]);
void unescape(char src[], char dest[]);

int main(void) {
    int c, n, choice;
    char s[MAXLEN], dest[MAXLEN];

    while ((n = get_line(s, MAXLEN)) > 0) {
        printf("Enter your choice: 1-> escape, 2-> unescape: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                escape(s, dest);
                printf("%s\n", dest);
                break;
            case 2:
                unescape(s, dest);
                printf("%s\n", dest);
                break;
            default:
                printf("wrong choice, try again.\n");
                break;
        }
        printf("\n");
    }

    return 0;
}

int get_line(char s[],  unsigned int limit) {
    int c, i;

    while (getchar() != '\n' && c != EOF);
    // clear the buffer

    printf("Enter a statement: ");
    for (i = 0; i <= limit - 1 && (c = getchar()) != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = '\n';
    }
    s[i] = '\0';

    return i;
}

void escape(char src[], char dest[]) {
    int i, j;

    for (i = 0, j = 0; src[i] != '\0'; i++, j++) {
        switch (src[i]) {
            case '\n':
                dest[j++] = '\\';
                dest[j] = 'n';
                break;
            case '\t':
                dest[j++] = '\\';
                dest[j] = 't';
                break;
            case '\r':
                dest[j++] = '\\';
                dest[j] = 'r';
                break;
            case '\b':
                dest[j++] = '\\';
                dest[j] = 'b';
                break;
            case '\f':
                dest[j++] = '\\';
                dest[j] = 'f';
                break;
            case '\v':
                dest[j++] = '\\';
                dest[j] = 'v';
                break;
            case '\a':
                dest[j++] = '\\';
                dest[j] = 'a';
                break;
            case '\\':
                dest[j++] = '\\';
                dest[j] = '\\';
                break;
            case '\'':
                dest[j++] = '\\';
                dest[j] = '\'';
                break;
            case '\"':
                dest[j++] = '\\';
                dest[j] = '\"';
                break;
            case '\?':
                dest[j++] = '\\';
                dest[j] = '?';
                break;
            default:
                dest[j] = src[i];
                break;
        }
    }
    if (src[i] == '\0') {
        dest[j] = '\0';
    }
}

void unescape(char src[], char dest[]) {
    int i, j;

    for (i = 0, j = 0; src[i] != '\0'; i++, j++) {
        switch (src[i]) {
            case '\\':
                switch (src[++i]) {
                    case 'n':
                        dest[j] = '\n';
                        break;
                    case 't':
                        dest[j] = '\t';
                        break;
                    case 'r':
                        dest[j] = '\r';
                        break;
                    case 'b':
                        dest[j] = '\b';
                        break;
                    case 'f':
                        dest[j] = '\f';
                        break;
                    case 'v':
                        dest[j] = '\v';
                        break;
                    case 'a':
                        dest[j] = '\a';
                        break;
                    case '\\':
                        dest[j] = '\\';
                        break;
                    case '\'':
                        dest[j] = '\'';
                        break;
                    case '\"':
                        dest[j] = '\"';
                        break;
                    case '?':
                        dest[j] = '\?';
                        break;
                    default:
                        dest[j++] = '\\';
                        dest[j] = src[i];
                }
                break;

            default:
                dest[j] = src[i];
                break;
        }
    }

    if (src[i] == '\0') {
        dest[j] = '\0';
    }
}
