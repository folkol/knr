#include <stdio.h>

int main(void) {
    printf("  C     F\n");
    printf("=========\n");
    for (int celcius = 0; celcius <= 300; celcius += 20) {
        float fahrenheit = 9.0/5.0 * celcius + 32.0;
        printf("%3d%6.1f\n", celcius, fahrenheit);
    }
    return 0;
}
