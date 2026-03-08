#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *first = NULL, *n1, *n2;
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));

    if (n1 == NULL || n2 == NULL)
    {
        printf("Allocation failed!\n");
        return 1;
    }
    n1->data = 10;
    n2->data = 20;

    first = n1;
    n1->next = n2;
    n2->next = NULL;

    struct Node *temp = first;
    while (temp != NULL)
    {
        printf("%d->", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
    return 0;
}