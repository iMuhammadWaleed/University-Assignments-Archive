#include <stdio.h>

void main (void)
{
	float year, age, ageInMonths, ageInDays, ageInMin, ageInSec;
	
	printf("\nEnter your birth year: ");
	scanf("%f", &year);
	
	age = 2023 - year;
	ageInMonths = age * 12;
	ageInDays = age * 365.24;
	ageInMin = age * 525949.2;
	ageInSec = age * 31556926;
	
	
	printf("\nYour age is  %f years, %f months, %f days, %f minutes and %f seconds", age, ageInMonths, ageInDays, ageInMin, ageInSec);
}