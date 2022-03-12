#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MOLECULSE_IN_WATER (3 * pow(10, -23))
#define ONE_LITRE_TO_GRAMS 950

void main() {

int litresOfWater;
double moleculeCount;
double moleculesInOneLitre;

printf("Enter the amount of water in litres and see how many molecules it has:");
scanf("%d", &litresOfWater);

moleculesInOneLitre = ((double) ONE_LITRE_TO_GRAMS /  MOLECULSE_IN_WATER);
printf("The water has %.0f molecules \n", moleculesInOneLitre);

moleculeCount = litresOfWater * moleculesInOneLitre;

printf("%d of litres The water has %.0f molecules", litresOfWater, moleculeCount);

}