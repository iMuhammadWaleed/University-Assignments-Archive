#include <stdio.h>

void main() {
  int n=2, i = 1; 
  do
  {
    printf("%d * %d = %d \n", n, i, n * i);
    i++;
  }
  
  while(i <= 10);
  }
