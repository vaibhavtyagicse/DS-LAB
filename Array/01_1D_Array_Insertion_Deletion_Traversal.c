#include <stdio.h>

int main() {
    int a[100], n, i, pos, value, delPos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    /* Insertion */
    printf("Enter insertion position (1 to %d) and value: ", n + 1);
    scanf("%d %d", &pos, &value);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid insertion position.\n");
        return 1;
    }

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("After insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    /* Deletion */
    printf("\nEnter deletion position (1 to %d): ", n);
    scanf("%d", &delPos);

    if (delPos < 1 || delPos > n) {
        printf("Invalid deletion position.\n");
        return 1;
    }

    for (i = delPos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("After deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nTraversal: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
