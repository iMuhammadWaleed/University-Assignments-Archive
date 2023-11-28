#include <stdio.h>

void main (void)
{
	float area, radius;
	
	printf("Enter the value of radius of a circle\n");
	scanf("%f", &radius);
	
	area = 3.142 * sqrt(radius);
	
	printf("Area of circle = %f", area);
}