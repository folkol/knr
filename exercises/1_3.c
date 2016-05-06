#include <stdio.h>

int main(void) {
    printf("  F     C\n");
    printf("=========\n");
    for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20) {
        float celcius = 5.0/9.0 * (fahrenheit - 32.0);
        printf("%3d%6.1f\n", fahrenheit, celcius);
    }
    return 0;
}
