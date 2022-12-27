//linear and binary search
#include<stdio.h>
int linearsearch(int arr[],int size,int ele){
    for(int i=0;i<size;i++){
        if(ele== arr[i]){
                printf("%d",i);
        return i;}
    }
    return -1;
}
int binarysearch(int arr[],int size,int ele){
    int mid,low=0,high=size;
    while(low<=high){
            mid=(low+high)/2;
        if(ele==arr[mid]){
                printf("%d",mid);
            return 0;
        }
        if(ele>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
int main(){
    int arr[]={1,2,3,90,45,33};
    int arr1[]={1,4,7,13,23,56,89,90,99,1001};
    int ele = 23;
    int size = sizeof(arr)/sizeof(int);
    int size1 = sizeof(arr1)/sizeof(int);
    //linearsearch(arr,size,ele);
    binarysearch(arr1,size1,ele);
    return 0;
}
