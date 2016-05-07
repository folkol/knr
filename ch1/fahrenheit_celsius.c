#include <stdio.h>

main()
{
  int l = 0, h = 300, s = 20;
  int f = l;
  float c;

  printf("F     C\n");
  while(f <= h) {
    c = (f - 32) / 1.8;
    printf("%3d\t%3.1f\n", f, c);
    f += s;
  }
}
