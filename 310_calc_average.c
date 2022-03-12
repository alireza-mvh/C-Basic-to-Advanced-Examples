#include <stdio.h>
#include <conio.h>

void main() {

  int i;
  float num, sum;
  float ave;

  for (i = 0; i < 5; i++) {
    printf("Enter number %d : ", i + 1);
    scanf("%f", &num);
    sum+= num;
  }
  ave = (float) sum / i;
  printf("\nthe average is : %6.2f", ave);
  getch();
}