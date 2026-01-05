#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <process.h>
#include <conio.h>

char infix_string[20], postfix_string[20];
int stack[20], top = -1;

// prototypes
int pop();
int isEmpty();
int precedence(char symbol);
void push(int symbol);
void infix_to_postfix();
int check_space(char symbol);

int main()
{
    printf("Enter Infix Expression: ");
    gets(infix_string);
    infix_to_postfix();
    printf("Postfix Expression: %s\n", postfix_string);
    getch();
    return 0;
}
void infix_to_postfix()
{
    unsigned int count, temp = 0;
    char next, symbol;

    for (count = 0; count < strlen(infix_string); count++)
    {
        symbol = infix_string[count];
        if (!check_space(symbol))
        {
            switch (symbol)
            {
            case '(':
                push(symbol);
                break;
            case ')':
                while ((next = pop()) != '(')
                {
                    postfix_string[temp++] = next;
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                {
                    postfix_string[temp++] = pop();
                }
                push(symbol);
                break;
            default:
                postfix_string[temp++] = symbol;
            }
        }
    }
    while (!isEmpty())
    {
        postfix_string[temp++] = pop();
    }
    postfix_string[temp] = '\0';
}

int precedence(char symbol)
{
    switch (symbol)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
    case '%':
        return 2;
    case '^':
        return 3;
    default:
        return 0;
    }
}

int check_space(char symbol)
{
    if (symbol == ' ' || symbol == '\t' || symbol == '\n')
        return 1;
    else
        return 0;
}

void push(int symbol)
{
    if (top >= 19)
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = symbol;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}