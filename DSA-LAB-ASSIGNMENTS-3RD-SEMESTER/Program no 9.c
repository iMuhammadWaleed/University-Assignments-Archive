/*
9: A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard in hundreds, find the total number of currency
notes of each denomination the cashier will have to give to the withdrawer

ALGORITHM
1. Take input of the amount to be withdrawn in hundreds from the keyboard.
2. Initialize variables for each denomination of currency note to zero.
3. Divide the amount by 100 and store the quotient in a variable num_100.
4. Subtract num_100 * 100 from the amount and store the result in a variable temp.
5. Divide temp by 50 and store the quotient in a variable num_50.
6. Subtract num_50 * 50 from temp and store the result in a variable temp1.
7. Divide temp1 by 10 and store the quotient in a variable num_10.
8. Print the values of num_100, num_50, and num_10.
*/

// SOURCE CODE:
#include <stdio.h>
int main() {
int amount, num_100 = 0, num_50 = 0, num_10 = 0, temp, temp1;
printf("Enter the amount to be withdrawn in hundreds: ");
scanf("%d", &amount);
num_100 = amount / 100;
temp = amount - (num_100 * 100);
num_50 = temp / 50;
temp1 = temp - (num_50 * 50);
num_10 = temp1 / 10;
printf("Number of 100s: %d\nNumber of 50s: %d\nNumber of 10s: %d\n", num_100, num_50,
num_10);
return 0;
}