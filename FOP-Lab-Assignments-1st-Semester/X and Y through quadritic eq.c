#include <stdio.h>
#include <math.h>

void main (void)
{
	double a, b, c, b2, Dicriminant, x, y, realPart, imaginaryPart;
	
	printf("Enter coefficients of a,b,c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	b2 = pow(b,2);
	Dicriminant = b2 - 4 * a * c;
	
	if(Dicriminant > 0)
	{
		x = (-b + sqrt(Dicriminant))/(2*a);
		y = (-b + sqrt(Dicriminant))/(2*a);
		
		printf("x = %lf , y = %lf", x, y);
	}
	
	else if(Dicriminant == 0)
	{
		x = y = -b/(2*a);
		printf("x = %lf , y = %lf", x, y);
	}
	else
	{
		realPart = -b/(2*a);
		imaginaryPart = sqrt(Dicriminant)/(2*a);
		
		printf("x = %lf + %lf , y = %lf - %lf", realPart, imaginaryPart, realPart, imaginaryPart);
	}	
}