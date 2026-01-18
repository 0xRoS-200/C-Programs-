#include <stdio.h>
#include <process.h>
#define MAX 5

int q[MAX], f = 0, r = -1, i, ch, item;

void main() {
    while(1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\nEnter choice: ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1:
                if (r == MAX - 1) printf("Queue Overflow");
                else {
                    printf("Enter item: ");
                    scanf("%d", &q[++r]);
                }
                break;
            case 2:
                if (f > r) printf("Queue Underflow");
                else {
                    printf("Deleted: %d", q[f++]);
                    if (f > r) f = 0, r = -1;
                }
                break;
            case 3:
                if (f > r) printf("Queue Empty");
                else {
                    printf("Queue: ");
                    for (i = f; i <= r; i++) printf("%d ", q[i]);
                }
                break;
            case 4: exit(0);
            default: printf("Invalid");
        }
    }
}