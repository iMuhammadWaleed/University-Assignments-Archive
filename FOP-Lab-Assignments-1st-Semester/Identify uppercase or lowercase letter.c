#include <stdio.h>

int main() {
   char ch;
   
   printf("Enter any alphabet: ");
   scanf("%c",&ch);
   
   if((ch>=97&&ch<=122))
   {
       printf("Lowercase letter");
   }

else if((ch>=65&&ch<=90))
   
   {
       printf("Uppercase letter");
   }
   
   else
   
   {
       printf("Invalid character");
   }
    return 0;
}