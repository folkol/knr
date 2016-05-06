#include <stdio.h>

int main(void) {
    long n = 0, c;

    while(c = getchar(), c != EOF) {
        ++n;
    }

    printf("%ld", n);

    return 0;
}
