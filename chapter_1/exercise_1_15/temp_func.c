#include <stdio.h>

void fahr_to_celsius(float fahr) {
    float celsius;
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f\t\t%.2f\n", fahr, celsius);
    return;
}


int main(void) {
    int lower, upper, step;
    float fahr;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelsius\n-------------------------\n");
    fahr = lower;
    while (fahr <= upper) {
        fahr_to_celsius(fahr);
        fahr += step;
    }

    return 0;
}
