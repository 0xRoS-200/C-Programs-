#include <stdio.h>

int main()
{
    char ch[50];
    printf("Enter a string:");
    scanf("%s", ch);
    int len = 0, flag = 1;

    while (ch[len] != '\0')
        len++;

    for (int i = 0; i < (len - 1) / 2; i++)
    {
        if (ch[i] != ch[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
