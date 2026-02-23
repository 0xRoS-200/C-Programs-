#include <stdio.h>

int main()
{
    char name[50];
    int units;
    float bill = 100;

    printf("Enter the name of the user: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
        bill += units * 0.80;
    else if (units <= 300)
        bill += 200 * 0.80 + (units - 200) * 0.90;
    else
        bill += 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;

    if (bill > 400)
        bill += bill * 0.15;

    printf("\nBilling Details:\n");
    printf("Name of User: %s", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount: Rs. %.2f\n", bill);

    return 0;
}
