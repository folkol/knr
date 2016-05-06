#include <stdio.h>

int main(void) {
    long bc = 0, tc = 0, nc = 0, c;
    while(c = getchar(), c != EOF)
        if(c == ' ')
            ++bc;
        else if (c == '\t')
            ++tc;
        else if(c == '\n')
            ++nc;
    printf("%ld %ld %ld\n", bc, tc, nc);
}
