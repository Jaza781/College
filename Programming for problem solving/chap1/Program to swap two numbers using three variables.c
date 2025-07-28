//Program in C to swap two numbers using three variables

#include <stdio.h>
int main() {
   
   int a, b, c;

   printf("Enter value of a: ");
   scanf("%d", &a);
   printf("Enter value of b: ");
   scanf("%d", &b);

   printf("Numbers before swapping are %d and %d\n", a, b);
   
   c = a;
   a = b;
   b = c;

   printf("Numbers after swapping are %d and %d\n", a, b);

   return 0;
}
