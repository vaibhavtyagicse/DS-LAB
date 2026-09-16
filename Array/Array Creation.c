#include<stdio.h>
int main(){
    int a1[100][100], a2[100][100],sum[100][100];
    int rows, cols;
    printf("Enter number of rows (max 100) :");
    scanf("%d",&rows);
    printf("Enter number of columns (max 100) :");
    scanf("%d",&cols);
    printf("Enter element of frist array: \n");
    for(int i=0;i<rows;i++){
       for (int j=0;j<cols;j++){
            scanf("%d",&a1[i][j]);
    }}
    printf("First array: \n");
    for( int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of array a1: \n");
    for (int i=0;i<cols;i++){
        for (int j=0;j<rows;j++){
            printf("%d ",a1[j][i]);
        }
        printf("\n");
    }
    printf("\nEnter elements of second array: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            scanf("%d",&a2[i][j]);
            
        }
    }
    printf("\nSecond array: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            sum[i][j]=a1[i][j]+a2[i][j];
        }
    }
    printf("\nSum of two arrays: \n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
}
