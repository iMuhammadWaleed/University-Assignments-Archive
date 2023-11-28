/*
5: If a five-digit number is input through the keyboard, write a program to reverse
the number.

ALGORITHM
1. Read a five-digit number from the keyboard.
2. Initialize a variable reversed_num to zero.
3. Extract the last digit of the number using the modulus operator and add it to the
reversed_num multiplied by 10.
4. Divide the number by 10 to remove the last digit.
5. Repeat steps 3-4 until all digits have been extracted.
6. Print the reversed number.

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
int num, reversed_num = 0;
printf("Enter a five-digit number: ");
scanf("%d", &num);
while (num > 0) {
int digit = num % 10;
reversed_num = (reversed_num * 10) + digit;
num /= 10;
}
printf("The reversed number is: %d", reversed_num);
return 0;
}

