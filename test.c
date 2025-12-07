#include <stdio.h>
#define x 10

typedef enum {
MONDAY=1, TUESDAY=2, WEDNESDAY=3, THURSDAY=4, FRIDAY=5, SATURDAY=6, SUNDAY=7
}DAYS;

int main()
{
    DAYS weekdays = WEDNESDAY;
    if(weekdays == x)
    {
        printf("Hello World!");
    }
    else
    {
        printf("You're Unlucky");
    }
}