#include <stdio.h>

#define MAXLEN 1000

int get_line(char s[], int limit);
void expand(char s1[], char s2[]);
int is_alpha_num(int c);

int main(void) {
  char str[MAXLEN];
  char expanded_str[MAXLEN];
  int c, n;

  while((n = get_line(str, MAXLEN)) > 0) {
    expand(str, expanded_str);
    printf("expanded string: %s\n", expanded_str);
  }

  return 0;
}

int get_line(char str[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != '\n'; i++) {
    str[i] = c;
  }
  if (c == '\n') {
    str[i++] = '\n';
  }
  str[i] = '\0';

  return i;
}

int is_alpha_num(int c) {
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return 1;
  }
  return 0;
}

void expand(char s1[], char s2[]) {
  /*
   * All posible shorthand notations:
   *  1. a-z
   *  2. a-b-c
   *  3. a-c-g-v
   *  4. 0-9
   *  5. 1-5
   *  6. a-zA-Z
   *  7. 0-9a-zA-Z
   *  8. -a-z
   *  9. a-z-
   * 10. -a-z-
   */

  int i, j;
  int temp;

  for (i = 0, j = 0; s1[i] != '\0' && i < MAXLEN - 1 && j < MAXLEN - 1; i++) {
    if (is_alpha_num(s1[i]) && s1[i + 1] == '-' && is_alpha_num(s1[i + 2]) && s1[i] <= s1[i + 2]) {
      temp = s1[i];
      while (temp <= s1[i + 2]) {
        s2[j++] = temp++;
      }
      i = i + 2;
    }
    else {
      s2[j++] = s1[i];
    }
  }
  s2[j] = '\0';
}
