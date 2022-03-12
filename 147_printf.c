#include <stdio.h>

void main() {
  float firstNum, secondNum;
  firstNum = 981241.5569;
  secondNum = 14143.658;

  char firstChar, secondChar;
  secondChar = 'a';
  firstChar = 'b';
  printf("address of firstChar is %p and address of secondChar is %p \n", &firstChar, &secondChar);
  printf("address of firstNum is %5.2f and address of secondNum is %5.3f", firstNum, secondNum);
}