//Program in C to swap two numbers using functions (call by reference method)

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("The numbers before swapping are %d and %d\n", x, y); 

    swap(&x, &y);

    printf("The numbers after swapping are %d and %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
