#include <stdio.h>

void main (void)
{
	float len, width, area;
	
	printf("Enter the length of a rectangle\n");
	scanf("%f", &len);
	
	printf("Enter the width of rectangle\n");
	scanf("%f", &width);
	
	area = len * width;
	
	printf("Area of rectangle = %f", area);
}