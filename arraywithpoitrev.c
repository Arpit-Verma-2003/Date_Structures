#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};

    int* ptr = &arr[0];
    printf("%d ",*ptr);
    printf("%d",*ptr+8);
    return 0;
}
