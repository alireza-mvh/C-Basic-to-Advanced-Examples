#include <stdio.h>

void main() {
  int x = 1, y;
  y = x++;
  y = x++ + x / 2 * 6; // (x / 2) * 6 + x
  printf("x is %d and y is %d", x, y);
}