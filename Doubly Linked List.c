#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head, *temp, *newnode;
    int n;

    printf("Enter number of nodes you want: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    // Create first node
    head = (struct node *)malloc(sizeof(struct node));

    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter data for node 1: ");
    scanf("%d", &head->data);

    head->prev = NULL;
    head->next = NULL;

    temp = head;

    // Create remaining nodes
    for (int i = 1; i < n; i++) {

        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return 0;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->prev = temp;
        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }

    // Display from left to right
    printf("\nDoubly Linked List:\n");

    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
