#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius\t\tFahrenheit\n");
    printf("--------------------------\n");

    celsius = upper;
    while (celsius >= lower) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t\t%6.2f\n", celsius, fahr);
        celsius -= step;
    }

    /*Alternate way to do is by using for loop:
     * >for (celsius = 300; celsius >= 0; celsius -= 20) {
     * >    fahr = (9.0 / 5.0) * celsius - 32.0f;
     * >    printf("%3.0f\t\t%6.2f\n", celsius, fahr);
     * >}
     */

    return 0;
}

