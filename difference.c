//difference program
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("enter size of array:-");
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    printf("enter array elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter 2nd array size:");
    int n1;
    scanf("%d",&n1);
    int* arr1=malloc(n1*sizeof(int));
    printf("enter 2nd array elements:-");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    int sub[50];
    int k=0,i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            if(arr[i]==arr1[j]){
                break;
            }
        }
        if(j==n1){
            sub[k]=arr[i];
            k++;
        }
    }
    printf("differenced array:-\n");
    for( i=0;i<k;i++){
            printf("%d ",sub[i]);
    }
    return 0;
}
