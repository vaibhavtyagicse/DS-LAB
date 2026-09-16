#include<stdio.h>
int main(){
    int n,i,a[100],key;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the target value: ");
    scanf("%d",&key);
    for (i=0;i<n;i++){
        if (a[i]==key){
            printf("Element found! at location %d",i+1);
            return 0;
        }
    }
    printf("Element not found!");
}
