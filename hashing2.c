#include<stdio.h>
int main(){
    int arr[100];
    int hash[100];
    int n,x,temp2,temp1;
    printf("enter number of values:\n");
    scanf("%d",&n);
    printf("enter the values of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        temp1=arr[i]/10;
        temp2=arr[i]%10;
        x=temp2*temp2;
        hash[x]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",hash[i]);
    }
    return 0;
}
