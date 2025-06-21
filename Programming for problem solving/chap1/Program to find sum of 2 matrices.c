//Program in C to find sum of two matrices

#include<stdio.h>

int main() {

    int a[10][10], b[10][10], c[20][20], i, j, r1, c1, r2, c2, sum = 0;
    

    //input dimensions of the matrices
    printf("Enter the number of rows and columns of the first matrix respectively: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the number of rows and columns of the second matrix respectively: ");
    scanf("%d%d", &r2, &c2);

    //ensure matrices can be added
    if (c1 != c2) {
        printf("Error! The number of columns of the first matrix should be equal to the number of columns of the second matrix");
        return -1;
    }
    if (r1 != r2) {
        printf("Error! The number of rows of the first matrix should be equal to the number of rows of the second matrix");
        return -1;
    }

   //input elements of the first matrix
    printf("Enter elements of the first matrix: ");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    //input elements of the second matrix
    printf("Enter elements of the second matrix: ");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
