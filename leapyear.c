#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
    {
        printf("Leap Year!");
    }
    else
    {
        printf("Not a Leap year!");
    }
    return 0;
}

bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}