#include <stdio.h>
#include <conio.h>

int main() {
  int x, y;
  printf("Enter X: \n");
  scanf("%d", &x);
  printf("Enter Y: \n");
  scanf("%d",&y);
  x = x + y;
  y = x - y;
  x = x - y;
  printf("x is: %d \ny is: %d", x, y);

  getch();
  return 0;
}