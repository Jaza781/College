//Program in C to display the following patterns


#include <stdio.h>
int main() {
   
   int i, j, space;
//PATTERN 5
//    *
//   **
//  ***
// ****

printf("\n");

printf("Pattern 5: \n");

for (i = 1; i <= 4; i++) {
   for (space = 3; space >= i; space --) {
      printf(" ");
   }
   for (j = 1; j <= i; j++) {
      printf("*");
   }
   printf("\n");
}

  return 0;
}
