#include <stdio.h>
#include <conio.h>

void main() {
  const int farconst = 32;
  float fahrendeg, celsiusdeg;
  printf("Please enter a degree in fahrenheit: ");
  scanf("%f", &fahrendeg);
  celsiusdeg = ((float)5 / 9) * (fahrendeg - 32);
  printf("The celsius degree is : %4.1f", celsiusdeg);
  getch();
}