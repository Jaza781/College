//Calculator

# include<stdio.h>
# include<math.h>

int main() {
    int num1, num2, result, value;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for remainder: ");
    scanf("%d", &value);

    switch (value)
    {
    case 1:
        result = num1 + num2;
        printf("The sum of %d and %d is %d", num1, num2, result);
        break;

    case 2:
        result = num1 - num2;
        printf("The difference of %d and %d is %d\n", num1, num2, result);
        break;

    case 3:
        result = num1 * num2;
        printf("The product of %d and %d is %d\n", num1, num2, result);
        break;

    case 4:
        result = num1 / num2;
        printf("The quotient of %d and %d is %d\n", num1, num2, result);
        break;

    case 5:
        result = num1 % num2;
        printf("The remainder of %d and %d is %d\n", num1, num2, result);
        break;
    
    default:
    printf("Calculator error\n");
        break;
    }
    

    return 0; 
}
