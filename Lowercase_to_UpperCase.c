#include <stdio.h>

int main()
{
    char ch[20];
    printf("Enter Lower Case String:");
    scanf("%s", ch);
    int i = 0;

    while (ch[i] != '\0')
    {
        ch[i] = ch[i] - 32;
        i++;
    }
    printf("%s", ch);
    return 0;
}