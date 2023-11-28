/*
7: A cashier has currency notes of denominations 10, 50 and 100. If the amount to
be withdrawn is input through the keyboard in hundreds, find the total number of
currency notes of each denomination the cashier will have to give to the
withdrawer.
ALGORITHM
1. Read the amount to be withdrawn in hundreds from the keyboard.
2. Calculate the total amount in rupees by multiplying the amount in hundreds by 100.
3. Calculate the number of 100 rupee notes by dividing the total amount by 100 and store it
in a variable hundred_notes.
4. Calculate the remaining amount by subtracting the total amount by the number of 100
rupee notes multiplied by 100.
5. Calculate the number of 50 rupee notes by dividing the remaining amount by 50 and
store it in a variable fifty_notes.
6. Calculate the remaining amount by subtracting the number of 50 rupee notes multiplied
by 50 from the remaining amount.
7. Calculate the number of 10 rupee notes by dividing the remaining amount by 10 and
store it in a variable ten_notes.
8. Print the number of 100, 50, and 10 rupee notes.

*/

// SOURCE CODE:
#include<stdio.h>
int main()
{
int amount, n100=0, n50=0, n10=0;
printf("Enter the amount to be withdrawn in hundreds: ");
scanf("%d", &amount);
n100 = amount / 100;
amount = amount % 100;
n50 = amount / 50;
amount = amount % 50;
n10 = amount / 10;
printf("Number of 100s: %d\n", n100);
printf("Number of 50s: %d\n", n50);
printf("Number of 10s: %d\n", n10);

return 0;
}
