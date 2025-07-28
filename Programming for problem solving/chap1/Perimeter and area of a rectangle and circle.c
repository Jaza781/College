//Progarm in C to print the perimeter and area of a rectangle and circle

#include <stdio.h>

#define PI 3.14
int main() {
   
   int l, b, r;

   printf("Enter the length of the rectangle: ");
   scanf("%d", &l);
   printf("Enter the breadth of the rectangle: ");
   scanf("%d", &b);
   printf("Enter the radius of the circle: ");
   scanf("%d", &r);

   int perimeter = 2 * (l + b);
   int area = l * b;
   float perimeterC = 2 * PI * r;
   float areaC = PI * r * r;

   printf("The perimemter of the rectangle = %d\n", perimeter);
   printf("The area of the rectangle = %d\n", area);
   printf("The perimemter of the circle = %f\n", perimeterC);
   printf("The area of the circle = %f\n", areaC);

    return 0;
}
