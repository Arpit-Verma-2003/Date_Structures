//program for insertion and deletion
#include<stdio.h>
int insert(int arr[],int ele,int k,int size){
    for(int i=size;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=ele;
    return 0;
}
void showarr(int arr[],int size){

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int ele,size,k;
    printf("enter the element,postion of it to insert it in array: ");
    scanf("%d%d",&ele,&k);
    size = sizeof(arr)/sizeof(int);
    printf("Array before insertion:\n");
    showarr(arr,size);
    insert(arr,ele,k,size);
    size++;
    printf("\nArray after insertion:\n");
    showarr(arr,size);
    return 0;
}
