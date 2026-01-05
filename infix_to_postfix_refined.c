#include <stdio.h>
#include <ctype.h>  // Required for isalnum()

char stack[20];
int top = -1;

void push(char x) { stack[++top] = x; }

char pop() {
    if(top == -1) return -1;
    return stack[top--];
}

int priority(char x) {
    if(x == '(') return 0;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/' || x == '%') return 2;
    if(x == '^') return 3;
    return 0;
}

int main() {
    char exp[100];
    char *e, x;

    printf("Enter expression: ");
    fgets(exp, 100, stdin); 

    e = exp;

    while(*e != '\0') {
        
        // 2. SKIP SPACES HERE
        if(*e == ' ' || *e == '\n') { 
            e++; 
            continue; 
        }

        if(isalnum(*e)) {
            printf("%c", *e);
        }
        else if(*e == '(') {
            push(*e);
        }
        else if(*e == ')') {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else {
            while(top != -1 && priority(stack[top]) >= priority(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }

    while(top != -1) {
        printf("%c", pop());
    }
    return 0;
}