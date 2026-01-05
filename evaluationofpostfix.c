#include <stdio.h>
#include <ctype.h> // Needed for isdigit()

int stack[20];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char exp[20];
    char *e;
    int n1, n2, num;

    printf("Enter Postfix Expression: ");
    scanf("%s", exp);

    e = exp;
    while (*e != '\0') {
        // 1. If Digit, Push it (Convert char '5' to int 5)
        if (isdigit(*e)) {
            num = *e - '0'; // The Magic Trick
            push(num);
        }
        // 2. If Operator, Pop two and Calculate
        else {
            n1 = pop(); // Top element
            n2 = pop(); // Second element
            
            switch (*e) {
                case '+': push(n2 + n1); break;
                case '-': push(n2 - n1); break;
                case '*': push(n2 * n1); break;
                case '/': push(n2 / n1); break;
            }
        }
        e++;
    }
    printf("Result: %d\n", pop());
    return 0;
}