#include <stdio.h>

#define FALSE 0
#define TRUE  1

int main(void) {
    int nc = 0, nw = 0, nl = 0, in_word = 0;

    for(int c = getchar(); c != EOF; c = getchar()) {
        nc++;
        if(c == '\n') {
            nl++;
            in_word = FALSE;
        }
        else if(c == ' ' || c == '\t') {
            in_word = FALSE;
        }
        else if(!in_word) {
            nw++;
            in_word = TRUE;
        }
    }
    printf("%8d%8d%8d\n", nl, nw, nc);
}
