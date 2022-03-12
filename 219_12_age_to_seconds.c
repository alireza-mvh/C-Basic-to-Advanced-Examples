#include <stdio.h>
#include <stdint.h>
#include <conio.h>
#include <math.h>
#define NUMBER_OF_SECONDS_IN_A_YEAR (3.156 * pow(10, 7));

void main() {
  unsigned long long ageInSeconds;
  int age;
  
  printf("enter your age to see how old you are in (seconds):");
  scanf("%d", &age);
  ageInSeconds = age * NUMBER_OF_SECONDS_IN_A_YEAR;

  printf("you are %llu (seconds) old.", ageInSeconds);
}