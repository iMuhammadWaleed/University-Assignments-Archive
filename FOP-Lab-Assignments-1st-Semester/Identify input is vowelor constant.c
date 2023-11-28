#include <stdio.h>

int main() {
   char ch;
   
   printf("Enter any character: ");
   scanf("%c",&ch);
   
   if(ch==97||ch==101||ch==111||ch==117||ch==65||ch==65||ch==69||ch==73||ch==79||ch==85)
   {
       printf("The enetered character is a vowel");
   }

else if((ch>=97&&ch<=122)||(ch>=65&&ch<=90))
   
   {
       printf("The enetered character is a constant character");
   }
   
   else
   
   {
       printf("Invalid character");
   }
    return 0;
}