#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} Node;

Node *first = NULL, *temp, *previous;

// functions
Node *createNode(int ele);
Node *insertBeg(Node *first);
Node *insertEnd(Node *first);
Node *deleteEnd(Node *first);
Node *deleteBeg(Node *first);
void searchItem();
void display();

int main()
{
    printf("||   Welcome to Singly Linked List ||\n");
    while (1)
    {
        int ch;
        printf("\nEnter your Operations:\n1:Insert at Beginning\n2:Insert at End\n3:Delete from Beginning\n4:Display\n5.Delete End\n6.Search Item in LL\n7.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            first = insertBeg(first);
            break;
        case 2:
            first = insertEnd(first);
            break;
        case 3:
            first = deleteBeg(first);
            break;
        case 4:
            display();
            break;
        case 5:
            first = deleteEnd(first);
            break;
        case 6:
            searchItem();
            break;
        case 7:
            printf("Exiting Program.......");
            return 0;
            break;
        default:
            printf("Inavlid Choice! Try Again!");
        }
    }
}

Node *createNode(int ele)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Error!! Cannot Allocate Memory");
        return NULL;
    }
    newNode->data = ele;
    newNode->link = NULL;
    return newNode;
}

Node *insertBeg(Node *first)
{
    int tempData;
    printf("Plese enter data to be inserted: ");
    scanf("%d", &tempData);
    temp = createNode(tempData);

    temp->link = first;
    first = temp;
    return first;
}

Node *insertEnd(Node *first)
{
    int tempData;
    printf("Plese enter data to be inserted: ");
    scanf("%d", &tempData);
    temp = createNode(tempData);
    if (first == NULL)
    {
        temp->link = first;
        first = temp;
        return first;
    }
    previous = first;
    while (previous->link != NULL)
    {
        previous = previous->link;
    }
    previous->link = temp;
    return first;
}

void display()
{
    if (first == NULL)
    {
        printf("Link List is Empty!!");
        return;
    }
    temp = first;
    printf("The Linked List is: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}
Node *deleteBeg(Node *first)
{
    if (first == NULL)
    {
        printf("The Linked List is empty!");
        return NULL;
    }
    temp = first;
    first = first->link;
    printf("Deleted Element is %d", temp->data);
    free(temp);
    return first;
}

Node *deleteEnd(Node *first)
{
    if (first == NULL)
    {
        printf("The Linked List is empty!");
        return NULL;
    }
    if (first->link == NULL)
    {
        printf("The deleted element is %d", first->data);
        free(first);
        return NULL;
    }
    temp = first;
    while (temp->link != NULL)
    {
        previous = temp;
        temp = temp->link;
    }
    previous->link = NULL;
    printf("The deleted element is %d", temp->data);
    free(temp);
    return first;
}

void searchItem()
{
    if (first == NULL)
    {
        printf("Linked List is empty");
        return;
    }
    int item;
    printf("Enter an item to search: ");
    scanf("%d", &item);

    temp = first;
    while (temp->link != NULL)
    {
        if (temp->data == item)
        {
            printf("Item found");
            return;
        }
        temp = temp->link;
    }
    printf("Item Not found!!");
}