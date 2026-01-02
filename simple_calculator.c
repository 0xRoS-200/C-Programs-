//Program to implement simple calculator
#include <stdio.h>

int main()
{
    int num1, num2;
    char choice;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
    case '%':
        printf("%d %% %d = %d", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operator");
    }
    return 0;
}