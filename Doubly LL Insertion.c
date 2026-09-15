#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// Display function
void display(struct node *head)
{
    struct node *temp = head;

    printf("\nDoubly Linked List: ");

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Insert at beginning
void insertAtBeginning(struct node **head, int data)
{
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = *head;

    if (*head != NULL)
    {
        (*head)->prev = newnode;
    }

    *head = newnode;
}

// Insert at end
void insertAtEnd(struct node **head, int data)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
    {
        newnode->prev = NULL;
        *head = newnode;
        return;
    }

    temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

// Insert at specific position
void insertAtPosition(struct node **head, int data, int position)
{
    struct node *newnode, *temp;
    int i;

    if (position <= 0)
    {
        printf("Invalid position!\n");
        return;
    }

    // Position 1 means beginning
    if (position == 1)
    {
        insertAtBeginning(head, data);
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;

    temp = *head;

    // Move to node before required position
    for (i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position does not exist!\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }

    temp->next = newnode;
}

// Main function
int main()
{
    struct node *head = NULL;
    struct node *temp;
    int n, data, choice, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create initial linked list
    for (int i = 1; i <= n; i++)
    {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        insertAtEnd(&head, data);
    }

    display(head);

    // Insertion menu
    printf("\n----- DOUBLY LL INSERTION -----\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Insert at Position\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter data: ");
    scanf("%d", &data);

    switch (choice)
    {
        case 1:
            insertAtBeginning(&head, data);
            break;

        case 2:
            insertAtEnd(&head, data);
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d", &position);

            insertAtPosition(&head, data, position);
            break;

        default:
            printf("Invalid choice!\n");
    }

    display(head);

    return 0;
}
