//Program to demonstrate the use of string library functions: strlen(), strcpy(), strcat(), strcmp(), etc using examples

#include <stdio.h>
#include<string.h>

int main() {
   
   char str[] = "Hello, world!";
   char a[] = "IU";
   char b[] = "ST";

   //Use of strlen() 
   int length = strlen(str);

   printf("The length of the string is %d\n", length);

   //Use of strcpy()
   strcpy(a, b);

   printf("%s\n", a);

  //Use of strcat()
   char str1[20] = "Hello ";
   char str2[20] = "World!";
   strcat(str1, str2);

   printf("Concatenated string is %s\n", str1);

   //Use of strcmp()
   char st1[] = "ajcd";
   char st2[] = "ajcd";
   int result;
   result = strcmp(st1, st2);
   printf("strcmp(st1, st2) = %d\n", result);


return 0;
}
