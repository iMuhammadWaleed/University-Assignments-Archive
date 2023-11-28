#include <stdio.h>

void main (void)
{
	float f, c;
	
	//Fahrenheit to Celcius
	printf("Enter the temperature in Fahrenheit\n");
	scanf("%f", &f);
	
	c = ((f-32)*5)/9;
	printf("Temperature in Celcius = %f", c);
	
	//Celcius to Fahrenheit
	printf("\nEnter the temperature in Celcius\n");
	scanf("%f", &c);
	
	c = (f*9/5)+32;
	printf("Temperature in Fahrenheit = %f", f);
}