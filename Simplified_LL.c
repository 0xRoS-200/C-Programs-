#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *link;
}Node;

// Global pointers
struct Node *first = NULL, *temp, *current;

// Function prototypes
Node *createNode(int ele);
Node *insert_beg(Node *first);
Node *delete_beg(Node *first);
Node *delete_end(Node *first);
Node *delete_given_element(Node *first);
void display();


// Main
int main()
{
    int choice;

    while (1)
    {

        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Delete from Beginning\n");
        printf("3. Delete from End\n");
        printf("4. Display List\n");
        printf("5. Delete given Element\n");
        printf("6. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            first = insert_beg(first);
            break;

        case 2:
            first = delete_beg(first);
            break;

        case 3:
            first = delete_end(first);
            break;

        case 4:
            display();
            break;

        case 5:
            first = delete_given_element(first);
            break;

        case 6:
            printf("Exiting program...\n");
            exit(0);

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Allocate node
Node *createNode(int ele)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory Allocation failed!!\n");
        return NULL;
    }
    newNode->data = ele;
    newNode->link = NULL;
    return newNode;
}

// Insert at beginning
Node *insert_beg(struct Node *first)
{
    int data;
    printf("Please Enter a Data: ");
    scanf("%d", &data);

    temp = createNode(data);
    if (temp == NULL)
        return first;

    temp->link = first;
    first = temp;

    return first;
}

Node *delete_beg(struct Node *first)
{
    if (first == NULL)
    {
        printf("Linked list is empty!!\n");
        return NULL;
    }
    temp = first;
    first = first->link;

    printf("The deleted element is %d\n", temp->data);
    free(temp);
    return first;
}

Node *delete_end(struct Node *first)
{
    if (first == NULL)
    {
        printf("Linked list is empty!!\n");
        return NULL;
    }
    if (first->link == NULL)
    {
        printf("The deleted element is %d\n", first->data);
        free(first);
        return NULL;
    }
    temp = first;
    while (temp->link != NULL)
    {
        current = temp;
        temp = temp->link;
    }
    current->link = NULL;
    printf("The deleted element is %d\n", temp->data);
    free(temp);
    return first;
}

// Display list
void display()
{
    if (first == NULL)
    {
        printf("Linked list is empty!!\n");
        return;
    }

    temp = first;
    printf("The Linked list is: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

Node *delete_given_element(struct Node *first)
{
    if (first == NULL)
    {
        printf("Linked list is empty!!\n");
        return NULL;
    }

    int ele;
    printf("Enter the element to delete: ");
    scanf("%d", &ele);

    temp = first;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            printf("The deleted element is %d\n", temp->data);
            current->link = temp->link;
            free(temp);
            return first;
        }
        current = temp;
        temp = temp->link;
    }
    printf("Element not found in the list!!\n");
    return first;
}
