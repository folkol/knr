#include <stdio.h>

#define FALSE 0
#define TRUE  1

int main(void) {
    int wc = 0, in_word = 0;
    int c;
    while(c = getchar(), c != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') {
            in_word = FALSE;
        }
        else if(!in_word) {
            wc++;
            in_word = TRUE;
        }
    }
    printf("%d\n", wc);
}
