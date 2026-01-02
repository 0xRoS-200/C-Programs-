#include <stdio.h>
#define stack_size 5

int stack[stack_size];
int top = -1;

void push(int val)
{
    if (top == stack_size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    int item_deleted;
    if (top == -1)
    {
        printf("Stack Underflow");
        return;
    }
    item_deleted = stack[top--];
    printf("%d deleted\n", item_deleted);
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();
    return 0;
}