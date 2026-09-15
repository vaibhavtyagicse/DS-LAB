#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *temp, *newnode;
    int i,n;

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

    head->next = NULL;

    temp = head;

    // Create remaining nodes
    for ( i = 1; i < n; i++) {

        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return 0;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        temp->next = newnode;
        temp = newnode;
    }

    // Display linked list
    printf("\nLinked List: ");

    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    return 0;
}
