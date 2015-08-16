#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP  20

int main()
{
  printf("C     F\n");
  for(int c = LOWER; c < UPPER; c += STEP) {
    printf("%3d\t%3.1f\n", c, c * 1.8 + 32);
  }
}
