/*
4: If a five-digit number is input through the keyboard, write a program to
calculate the sum of its digits.

ALGORITHM
1. Read a five-digit number from the keyboard.
2. Initialize a variable sum to zero.
3. Extract the last digit of the number using the modulus operator and add it to sum.
4. Divide the number by 10 to remove the last digit.
5. Repeat steps 3-4 until all digits have been extracted.
6. Print the sum of the digits

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
int num, sum = 0;
printf("Enter a five-digit number: ");
scanf("%d", &num);
while (num > 0) {
int digit = num % 10;
sum += digit;
num /= 10;
}
printf("The sum of the digits is: %d", sum);
return 0;
}

