/*
8: If the total selling price of 15 items and the total profit earned on them is input
through the keyboard, write a program to find the cost price of one item.

ALGORITHM:
1. Take input of the total selling price and total profit and store them in respective variables.
2. Calculate the cost price of one item using the formula: cost price = (total selling price -
total profit) / 15
3. Print the cost price of one item.

*/

// SOURCE CODE:
#include<stdio.h>
int main()
{
float selling_price, profit, cost_price;
printf("Enter the total selling price of 15 items: ");
scanf("%f", &selling_price);
printf("Enter the total profit earned on the 15 items: ");
scanf("%f", &profit);
cost_price = (selling_price - profit) / 15;
printf("The cost price of one item is: %.2f\n", cost_price);
return 0;
}