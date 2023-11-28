#include <stdio.h>

int main() {
   int year;
   
   printf("Enter a year: ");
   scanf("%i", &year);
   
   if(year% 400 == 0 || year% 4 == 0)
   {
       printf("It's leap year");
   }

else if(year% 100 == 0)
   
   {
       printf("It's not leap year");
   }
   
   else
   
   {
       printf("It's not leap year");
   }
    return 0;
}