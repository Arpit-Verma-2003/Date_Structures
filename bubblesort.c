//program for bubble sorting
#include<stdio.h>
int main(){
    int n;
    printf("enter array size :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array before bubble sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nArray after bubble sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
