#include <stdio.h>

int main(void) {
    int c, p = 0;
    while(c = getchar(), c != EOF) {
        if(c != ' ' || p != ' ')
            putchar(c);
        p = c;
    }
}
