// enter your age in days
// get your age in years, months, week, days
#include <stdio.h>
#include <conio.h>

void main() {
  int ageInDays, remainingDays, years, months, weeks;

  printf("enter your age in days: ");
  scanf("%d", &ageInDays);

  remainingDays = ageInDays % 365;
  years = (ageInDays - remainingDays) / 365;
  months = (remainingDays - (remainingDays % 31)) / 31;
  remainingDays = remainingDays % 31;
  weeks = (remainingDays - (remainingDays % 7)) / 7;
  remainingDays = remainingDays % 7;

  printf("you are %d years, %d months, %d weeks, %d days old.", years, months, weeks, remainingDays);
}
