#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void stringcompare(char s1[], char s2[])
{
    int l1 = 0, l2 = 0, i, p = 0;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (l1 != l2)
    {
        p = 1;
    }
    else
    {
        for (i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != s2[i])
                p = 1;
                break;
        }
    }
    if (p == 1)
        printf("strings are different\n");
    else
        printf("Strings are same\n");
}
void stringlength(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    printf("Length of the string is %d\n", i);
}
void stringconcatinate(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
    }
    for (j = 0; s2[j] != '\0'; j++)
    {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    printf("Concatenated string is:");
    printf("%s\n", s1);
}
void main()
{
    char s1[50], s2[50];
    int choice;
    printf("Enter a string\n");
    scanf("%s", &s1);
    printf("Enter another string\n");
    scanf("%s", &s2);
    printf("Enter\n1 forcomparing,\n2 forlength,\n3 forconcatenation\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Stringscompared\n");
        stringcompare(s1, s2);
        break;
    case 2:
        printf("Strings length\n");
        printf("For first string\n");
        stringlength(s1);
        printf("For second string\n");
        stringlength(s2);
        break;
    case 3:
        printf("Stringconcatenation\n");
        stringconcatinate(s1, s2);
        break;
    default:
        printf("Invalidinput\n");
    }
}