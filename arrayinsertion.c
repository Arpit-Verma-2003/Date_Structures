//array insertion program
#include<stdio.h>
void show(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int ins(int arr[],int ele,int index,int tindex){
    if(index>=tindex){
        printf("not sufficient space");
        return -1;
    }
    for(int i=tindex;i>=index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=ele;
    return 0;
}
int main(){
    int arr[15]={1,3,6,9,32};
    int ele,index,tindex=15,size=5,a;
    printf("enter the element to be inserted: ");
    scanf("%d",&ele);
    printf("enter the index at which you wanna insert the element");
    scanf("%d",&index);
    show(arr,size);
    a=ins(arr,ele,index,tindex);
    if(a==-1){
        return 0;
    }
    size++;
    show(arr,size);
    return 0;
}
