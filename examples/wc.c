#include <printf.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("%d", argc);
    if (argc < 3) {
        printf("usage: %s file buf_size\n", argv[0]);
        exit(1);
    }

    int in_word = 0, word_count = 0, buf_size = atoi(argv[2]);
    char buf[buf_size];

    size_t i;
    FILE *file = fopen(argv[1], "rb");
    while ((i = fread(buf, 1, sizeof buf, file))) {
        int c;
        for (int n = 0; n < i; n++) {
            c = buf[n];
            if (isspace(c)) {
                in_word = 0;
            } else if (!in_word) {
                word_count++;
                in_word = 1;
            }
        }
    }

    printf(" %d %s\n", word_count, argv[1]);
}
