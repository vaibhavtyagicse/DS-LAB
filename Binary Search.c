#include<stdio.h>
int main(){
    int a[100],i,n,target;
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the target value: ");
    scanf("%d",&target);
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if (a[mid]==target){
            printf("Element found at location %d",mid+1);
            return 0;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    printf("Element not found!");
}
