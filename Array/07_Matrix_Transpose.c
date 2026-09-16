#include <stdio.h>

int main() {
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transpose[j][i] = a[i][j];

    printf("Original matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("Transpose:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
