//Program in C to display the following patterns


#include <stdio.h>
int main() {
   
   int i, j, space;
 

//PATTERN 4
//****
//***
//**
//*
printf("\n");

printf("Pattern 4: \n");
for (i = 4; i >= 1; i--) {
   for (j = 1; j <= i; j++) {
    printf("*");
   }
   printf("\n");
}

  return 0;
}
