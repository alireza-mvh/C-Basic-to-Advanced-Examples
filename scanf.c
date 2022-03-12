#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, perimeter, area;
  printf("Enter width and height: ");
  scanf("%d\n%d", &a, &b);
  perimeter = (a + b) * 2;
  area = a * b;
  printf("Area is: %d \n", area);
  printf("Area is: %d", perimeter);
  getch();
  return 0;
}