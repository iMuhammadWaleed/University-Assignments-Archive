/*
1: Ahad’s basic salary is input through the keyboard. His dearness allowance is 40% of
basic salary, and house rent allowance is 20% of basic salary. Write a program to
calculate his gross salary.

ALGORITHM:
1. Input the basic salary.
2. Calculate the dearness allowance (DA) by multiplying basic salary by 0.4.
3. Calculate the house rent allowance (HRA) by multiplying basic salary by 0.2.
4. Add basic salary, DA, and HRA to get gross salary.
5. Print gross salary.

*/

// SOURCE CODE:
#include <stdio.h>
int main() {
float basic_salary, da, hra, gross_salary;
printf("Enter basic salary: ");
scanf("%f", &basic_salary);
da = 0.4 * basic_salary;
hra = 0.2 * basic_salary;
gross_salary = basic_salary + da + hra;
printf("Gross salary: %.2f\n", gross_salary);
return 0;
}

