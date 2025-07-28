//Program to check whether a number is prime or not

#include<stdio.h>

int main() {

    int num, i;
    int isPrime = 1; //Assume the number is prime

    printf("Enter number: ");
    scanf("%d", &num);

    
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
    }

    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
