#include <stdio.h>
#include <math.h>

int main()
{
    int num, result;
    printf("Enter a Number: ");
    scanf("%d", &num);

    result = pow(num, 3);
    printf("%d ^ %d = %d", num, 3, result);
    return 0;
}