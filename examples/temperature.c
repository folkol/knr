#include <stdio.h>

int main(void) {
    for (int fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20) {
        int celcius = (int)(5/9.*(fahrenheit - 32));
        printf("%-4d%d\n", fahrenheit, celcius);
    }
    return 0;
}
