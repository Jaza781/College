//Program in C to check whether a year is leap or not

#include<stdio.h>
#include<math.h>

int main() {

    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("You have entered a leap year.\n");
    } else {
        printf("You have not entered a leap year.\n");
    };

    return 0;
}
