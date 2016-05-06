#include <stdio.h>

int main(void) {
    long n;
    for(n = 0; getchar() != EOF; n++)
        ;
    printf("%ld\n", n);
}
