#include <stdio.h>

int main() {
   int num;
   
   printf("Enter any number: ");
   scanf("%i",&num);
   
   if(num%2 == 0)
   {
       printf("It's even number");
   }
   
   else
   
   {
       printf("It's odd number");
   }
    return 0;
}