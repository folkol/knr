#include <stdio.h>

int main(void) {
    long n = 0, c;
    while(c = getchar(), c != EOF)
        if(c == '\n')
            ++n;
    printf("%ld\n", n);
}
