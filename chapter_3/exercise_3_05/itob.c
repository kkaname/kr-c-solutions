#include <stdio.h>

#define MAXLEN 1000

void itob(int n, char s[], int b);

int main(void) {
  int n, b;
  char s[MAXLEN];
  do {
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter base b: ");
    scanf("%d", &b);
    itob(n, s, b);
  } while (n > 0);

    return 0;
}

void itob(int n, char s[], int b) {
  int i, num, k;
  num = 0;
  int rem;

  switch (b) {
    case 2:
      // binary
      for (i = 0; n != 0; i++) {
        s[i] = (n % 2) + '0';
        n /= 2;
      }
      s[i] = '\0';
      printf("Binary Equivalent -> 0b");
      for (--i; i >= 0; i--) {
        printf("%c", s[i]);
      }
      printf("\n");
      break;

    case 8:
      // octal
      for (i = 0; n != 0; i++) {
        s[i] = (n % 8) + '0';
        n /= 8;
      }
      s[i] = '\0';
      printf("Octal Equivalent -> ");
      for (--i; i >= 0; i--) {
        printf("%c", s[i]);
      }
      printf("\n");
      break;

    case 16:
      // hexadecimal
      for (i = 0; n != 0; i++) {
        rem = n % 16;
        if (rem > 9) {
          s[i] = (rem % 10) + 'A';
        }
        else {
          s[i] = rem + '0';
        }
        n = n / 16;
      }
      printf("Hexadecimal Equivalent -> ");
      for (--i; i >= 0; i--) {
        printf("%c", s[i]);
      }
      printf("\n");
      break;

    default:
      printf("Wrong base entered.\n");
      s[0] = '\0';
      return;
  }
}
