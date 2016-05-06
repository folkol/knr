#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

int main(void) {
    printf("  C     F\n");
    printf("=========\n");
    for (int celcius = UPPER; celcius >= LOWER; celcius -= STEP) {
        float fahrenheit = 9.0/5.0 * celcius + 32.0;
        printf("%3d%6.1f\n", celcius, fahrenheit);
    }
    return 0;
}
