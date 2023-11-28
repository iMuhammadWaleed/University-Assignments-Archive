#include <stdio.h>
#include <math.h>

void ArithmeticOperations()
{
     int num1,num2;
     char ch;
     
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Choose the operator (+, -, *, /): ");
    scanf(" %c", &ch);
     
     switch(ch)
     {
               case'+':
               printf("%d+%d=\t%d\n",num1,num2,num1+num2);
               break;
               
               case'-':
               printf("%d-%d=\t%d\n",num1,num2,num1-num2);
               break;
               
               case'*':
               printf("%d*%d=\t%d\n",num1,num2,num1*num2);
               break;
               
               case'/':
               printf("%d/%d=\t%d\n",num1,num2,num1/num2);
               break;
               }
 }
 
 void SquareRoot() {
    double number, squareRoot;
    printf("Enter a number: ");
    scanf("%lf", &number);
   
   squareRoot = sqrt(number);
      
   printf("Square root of %lf = %lf", number, squareRoot);
 }

void CubeRoot() {
    double num, cubeRoot;
    printf("Enter a number: ");
    scanf("%lf", &num);

    cubeRoot = cbrt(num);      
      printf("Cube root of %lf = %lf", num, cubeRoot);
 }

void ExponentialPower() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("%lf ^ %lf = %lf", base, exp, result);
}
 
 int main() {
    int userInput;
    printf("Enter a number to perform:\n1 for Arithmetic Operations\n2 for Square Root\n3 for Cube Root\n4 for Exponential Power\n");
    scanf("%d", &userInput);

    switch (userInput) {
        case 1:
            ArithmeticOperations();
            break;
        case 2:
            SquareRoot();
            break;
        case 3:
            CubeRoot();
            break;
        case 4:
            ExponentialPower();
            break;
        default:
            printf("Syntax Error: Invalid choice\n");
    }

    return 0;
}
