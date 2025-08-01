//Pogram in C to sort an integer array using functions and pointers 

#include<stdio.h>

void sort(int *p , int n) {   
        int i, j, *q;
        q = p;

        for(i=0;i<n-1;i++) {   
            for(j=0;j<n-i-1;j++) {    
                    if (*p > *(p+1)) {
                            int temp = *p;
                            *p = *(p+1);
                            *(p+1) = temp;
                    }
                    p++;    
            }
            p = q;   //points back to first element of array after one pass 
        }
    }

int main() {
        int arr[50], n, i, *p;  //'n' is size of array

        printf("Enter the size of array: ");
        scanf("%d",&n);

        printf("Enter elements of array: ");
        p = arr;
        for(i = 0; i < n; i++) {
            scanf("%d",p++);
        }
        p = arr;
