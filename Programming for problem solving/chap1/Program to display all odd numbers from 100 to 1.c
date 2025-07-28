//Program in C to display all odd numbers from 100 to 1

#include <stdio.h>
int main() {
   
   int i;

   for (i = 99; i >= 1; i = i - 2) {
    printf("%d\n", i);
   }

   return 0;
}
