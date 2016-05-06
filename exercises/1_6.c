#include <stdio.h>

int main(void) {
    int c = getchar() != EOF;
    putchar('0' + c);
    return 0;
}
