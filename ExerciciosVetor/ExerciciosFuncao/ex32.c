#include <stdio.h>

void tabela() {

    float celsius;

    printf("Fahrenheit\tCelsius\n");

    for (int f = 50; f <= 150; f++) {

        celsius = 5.0 * (f - 32) / 9.0;

        printf("%d\t\t%.2f\n", f, celsius);
    }

    
}