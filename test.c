#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[20];
int top = -1;

void push(int x)
{
    if (top == 19)
    {
        printf("Stack Overflow!!");
        return;
    }
    stack[++top] = x;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!");
        return 0;
    }
    return stack[top--];
}

int main()
{
    char expression[30], *e;
    int n1, n2, number;

    printf("Enter the expression: ");
    scanf("%s", expression);

    e = expression;

    while (*e != '\0')
    {
        if (isdigit(*e))
        {
            number = *e - '0';
            push(number);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
                case '+': push(n2 + n1); break;
                case '-': push(n2 - n1); break;
                case '*': push(n2 * n1); break;
                case '/': push(n2 / n1); break;
            }
        }
        e++;
    }
    printf("\nThe result is: %d", pop());
    return 0;
}