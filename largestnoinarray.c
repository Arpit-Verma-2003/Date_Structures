// to calculate largest number in an array
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number of students:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter value of %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
printf("highest marks scored = %d",arr[0]);
printf("\nProgram written by Arpit Verma");
return 0;
}
