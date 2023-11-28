#include <stdio.h>

void main (void)
{
	int first, second, temp;
	
	printf("Enter the fist number: ");
	scanf("%d", &first);
	
	printf("Enter the second number: ");
	scanf("%d", &second);
	
	temp = first;
	first = second;
	
	printf("\nAfter interchanging first number = %d\n", first);
	printf("\nAfter interchanging second number = %d\n", second);
}