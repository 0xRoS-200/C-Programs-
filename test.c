#include <stdio.h>
int main()
{
   int a;
   char b;
   printf("Enter a number:");
   scanf("%d", &a);
   printf("Enter a character:");
   scanf("%c", &b);
   printf("You entered: %d and %c", a, b);
}