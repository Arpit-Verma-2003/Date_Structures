#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("enter n");
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter 2nd array:");
    int n1;
    scanf("%d",&n1);
    int* arr1=malloc(n1*sizeof(int));
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    int inter[50];
            int k=0;
        for(int i=0;i<n;i++){
                for(int j=0;j<n1;j++){
            if(arr1[i]==arr[j]){
                inter[k]=arr1[i];
                k++;
            }}
        }

    for(int i=0;i<k;i++){
        printf("%d ",inter[i]);
    }
    return 0;
}
