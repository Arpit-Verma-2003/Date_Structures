// union program
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("enter array size:-\n");
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter 2nd array size:");
    int n1;
    scanf("%d",&n1);
    int* arr1=malloc(n1*sizeof(int));
    printf("enter 2nd array elements:-\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    int uni[50];
    int k=0,i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            if(uni[j]==arr[i]){
                break;
            }
        }
        if(j==k){
            uni[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<k;j++){
            if(uni[j]==arr1[i]){
                break;
            }
        }
        if(j==k){
            uni[k]=arr1[i];
            k++;
        }
    }
    printf("union:\n");
    for(i =0;i<k;i++){
        printf("%d ",uni[i]);
    }
    return 0;
}
