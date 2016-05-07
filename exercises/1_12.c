#include <stdio.h>

#define FALSE 0
#define TRUE  1

int main(void) {
    int in_word = FALSE;
    for(int c = getchar(); c != EOF; c = getchar()) {
        if(c == ' ' || c == '\t' || c == '\n') {
            if(in_word) {
                putchar('\n');
            }
            in_word = FALSE;
        } else {
            putchar(c);
            in_word = TRUE;
        }
    }
}
