#include <stdio.h>
#include <math.h>

void ArithematicOperations()
{
     printf("Choose the operators (+, - ,*, /");
     scanf("%c", &ch);
     
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
 
 void SquareRoot()
 {
      printf("Enter a number");
      scanf(%f, &num);
      
      squareRoot = sqrt(num);
      
      printf("Square root of %f = %f", num, squareRoot);
 }

void CubeRoot()
 {
      printf("Enter a number");
      scanf(%f, &num);
      
      cubeRoot = cbrt(num);
      
      printf("Square root of %f = %f", num, cubeRoot);
 }

void ExponentialPower()
 {
      printf("Enter a base number");
      scanf(%f, &base);
      
      printf("Enter an exponent");
      scanf(%f, &exp);
      
      result = pow(base, exp);
      
      printf("%f ^ %f = %f", base, exp, result);
 }      
 
 void main void()
 {
      int userInput, num1, num2;
      float num, base, exp, squareRoot, cubeRoot, result;
      char ch;
      
      printf("Enter any number either to perform (1 for Arithematic operations, 2 for Square Root, 3 for Cube Root or 4 for Exponential Power");
      scanf(%d, &userInput);
       if(userInput==1)
       {
         ArithematicOperations();
       }
       else if(userInput==2)
       {
         ArithematicOperations();
       }    
       else if(userInput==3)
       {
         ArithematicOperations();
       }   
       else if(userInput==4)
       {
         ArithematicOperations();
       }   
       else 
       {
         printf("Syntax Error");
       }  
       
  }   