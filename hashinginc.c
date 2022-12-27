// hashing table
#include<stdio.h>
int main(){
    int arr[100];
    int hash[100];
    int n,x;
    printf("enter number of values:\n");
    scanf("%d",&n);
    printf("enter the values of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        x=arr[i]%10;
        hash[x]=arr[i];
    }
    printf("after hasing:\n");
    for(int i=0;i<10;i++){
        printf("%d ",hash[i]);
    }
    return 0;
}
