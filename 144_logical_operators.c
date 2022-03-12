#include <stdio.h>

void main() {
  int notTrue, notFalse, and;
  notTrue = 0;
  notFalse = 1;
  and = notTrue && notFalse;
  printf("notTrue is %d and notFalse is %d, and && is %d", notTrue, notFalse, and);
}