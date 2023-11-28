// Online C compiler to run C program online
#include <stdio.h>

int eng, isl, itc, fop, basEl, total;
    float  marksObt, per;
    
void CalculatePercentage()
{
    marksObt = eng+isl+itc+fop+basEl;
    per = ((marksObt/total)*100);
}

void TakeUserInput()
{
    printf("Enter English Marks\n");
    scanf("%d", &eng);
    
    printf("Enter Islamiat Marks\n");
    scanf("%d", &isl);
    
    printf("Enter ITC Marks\n");
    scanf("%d", &itc);
    
    printf("Enter FOP Marks\n");
    scanf("%d", &fop);
    
    printf("Enter Basic Electronics Marks\n");
    scanf("%d", &basEl);
    
    printf("Enter Total All Subjects Marks\n");
    scanf("%d", &total);
}

void main(void) {
    TakeUserInput();
    CalculatePercentage();
    printf("Percentage = %.2f", per);
}