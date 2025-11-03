#include <stdio.h>
int main() {
  int x = 5;
  printf("%d\n", x & 3);
  printf("%d\n", x | 3);
  printf("%d\n", x ^ 3);
  printf("%d\n", x << 1);
  printf("%d\n", x >> 1);
  return 0;
}
