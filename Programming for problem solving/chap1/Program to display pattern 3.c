//Program in C to display the following patterns

//PATTERN 3
// **
// ***
// ****
// *
// **
printf("\n");

printf("Pattern 3: \n");
for (i = 1; i <= 5; i++) {
   for (j = 1; j <= i + 1; j++) {
    printf("*");
   }
   printf("\n");
}

  return 0;
}
