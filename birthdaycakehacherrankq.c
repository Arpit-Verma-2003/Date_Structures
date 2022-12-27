#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int* arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=1000;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-min;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0||arr[i]<0){

        }
    }
    return 0;
}
