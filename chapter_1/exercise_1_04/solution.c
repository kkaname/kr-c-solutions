#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    // lower limit of the temperature scale
  upper = 300;  // upper limit of the temperature scale
  step = 20;    // step size

  printf("Celsius\t\tFahrenheit\n");
  printf("--------------------------\n");

  for (celsius = lower; celsius <= upper; celsius += step) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f\t\t%6.2f\n", celsius, fahr);
  }

  /*
  * Alternate way by using while loop
  *
  * celsius = lower;
  * while (celsius <= upper) {
  *   fahr = (9.0 / 5.0) * celsius + 32.0;
  *   printf("%3.0f\t\t%6.2f\n", celsius, fahr);
  *   celsius += step;
  *}
  */

  return 0;
}
