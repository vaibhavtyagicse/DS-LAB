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

// Delete from beginning
void deleteAtBeginning(struct node **head)
{
    struct node *temp;

    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    temp = *head;
    *head = (*head)->next;

    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }

    free(temp);

    printf("Node deleted from beginning.\n");
}

// Delete from end
void deleteAtEnd(struct node **head)
{
    struct node *temp;

    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    temp = *head;

    // Go to last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    if (temp->prev != NULL)
    {
        temp->prev->next = NULL;
    }
    else
    {
        // Only one node
        *head = NULL;
    }

    free(temp);

    printf("Node deleted from end.\n");
}

// Delete from specific position
void deleteAtPosition(struct node **head, int position)
{
    struct node *temp;
    int i;

    if (*head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    if (position <= 0)
    {
        printf("Invalid position!\n");
        return;
    }

    // Delete first node
    if (position == 1)
    {
        deleteAtBeginning(head);
        return;
    }

    temp = *head;

    // Move to required position
    for (i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position does not exist!\n");
        return;
    }

    // Connect previous node to next node
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }

    // Connect next node to previous node
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    free(temp);

    printf("Node deleted from position %d.\n", position);
}

// Insert at end for creating the list
void insertAtEnd(struct node **head, int data)
{
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL)
    {
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

// Main function
int main()
{
    struct node *head = NULL;
    int n, data, choice, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create linked list
    for (int i = 1; i <= n; i++)
    {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        insertAtEnd(&head, data);
    }

    display(head);

    // Deletion menu
    printf("\n----- DOUBLY LL DELETION -----\n");
    printf("1. Delete from Beginning\n");
    printf("2. Delete from End\n");
    printf("3. Delete from Position\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            deleteAtBeginning(&head);
            break;

        case 2:
            deleteAtEnd(&head);
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d", &position);

            deleteAtPosition(&head, position);
            break;

        default:
            printf("Invalid choice!\n");
    }

    display(head);

    return 0;
}
