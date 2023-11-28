#include <stdio.h>
// Another Example ;)
void Asterick()
{
  printf("*");  
}
int main(void) {
    
  for (int i = 1; i <= 5; ++i) {
   for (int j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
  }
  // Another Example ;) output
  Asterick(); printf("\n");
  Asterick(); Asterick(); printf("\n");
  Asterick(); Asterick(); Asterick(); printf("\n");
  Asterick(); Asterick(); Asterick(); Asterick();printf("\n");
  Asterick(); Asterick(); Asterick(); Asterick(); Asterick(); printf("\n");
  return (0);
}