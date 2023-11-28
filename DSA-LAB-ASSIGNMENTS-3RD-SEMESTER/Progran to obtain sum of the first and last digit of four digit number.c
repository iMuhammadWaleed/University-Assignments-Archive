/*
6: If a four-digit number is input through the keyboard, write a program to obtain
the sum of the first and last digit of this number.

ALGORITHM
1. Read a four-digit number from the keyboard.
2. Extract the first digit of the number by dividing it by 1000 and store it in a variable
first_digit.
3. Extract the last digit of the number using the modulus operator and store it in a variable
last_digit.
4. Add first_digit and last_digit and store the result in a variable sum.
5. Print the sum of the first and last digit.

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
int num, first_digit, last_digit, sum;
printf("Enter a four-digit number: ");
scanf("%d", &num);
first_digit = num / 1000;
last_digit = num % 10;
sum = first_digit + last_digit;
printf("The sum of the first and last digit is: %d", sum);
return 0;
}
