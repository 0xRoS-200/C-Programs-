#include <stdio.h>

int main()
{
    int num;
    int result;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for(int i = 0; i <= 12; i++)
    {
        result = num * i;
        printf("%3d * %3d = %3d", num, i, result);
        printf("\n");
    }
    return 0;
}   