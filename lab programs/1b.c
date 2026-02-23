//program to check armstrong number
#include <stdio.h>
#include <math.h>

void checkArmstrong(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}

void checkArmstrong(int num)
{
    //extract digits
    int count = 0;
    int temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    //check armstrong
    temp = num;
    int sum = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("%d is an Armstrong number", num);
    }
    else
    {
        printf("%d is not an Armstrong number", num);
    }
}

