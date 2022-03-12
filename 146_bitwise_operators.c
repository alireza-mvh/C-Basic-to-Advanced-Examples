#include <stdio.h>

void main() {
  long int someNUmber = 213404;
  long int someOtherNUmber = 348548;
  long int andResult = someNUmber & someOtherNUmber;
  long int orResult = someNUmber | someOtherNUmber;

  long int shiftRight = andResult >> 2;
  long int NOT = ~someNUmber;
  printf("result of the AND operation is : %d \n", andResult);
  printf("result of the OR operation is : %d \n", orResult);
  printf("result of the SHIFT RIGHT operation is : %d \n", shiftRight);
  printf("result of the NOT operation is : %d", NOT );

}