#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Khushi", str2[] = "Topper!";
    char temp[50];
    // strlen
    printf("The length of str1 is %d\n", strlen(str1)); // 6
    printf("The length of str2 is %d\n", strlen(str2)); // 7
    // strcpy
    printf("The string after copy is %s\n", strcpy(temp, str1)); // khushi
    // strncpy
    printf("The string after copying till n is %s\n", strncpy(str1, str2, 3)); // topshi
    // strcat
    printf("The string after Concatination is %s\n", strcat(str1, str2)); // topshitopper
    // strcmp
    printf("Are the strings exactly the same? %s\n", (strcmp(str1, str2) == 0) ? "Yes" : "No");
    // strchr
    printf("The elemnts after occurence of h is %s\n", strchr(str1, 'h'));
    return 0;
}