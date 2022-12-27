// to calculate the avg marks of n students using arrays
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
        sum=sum+arr[i];
    }
int avg = sum/n;
printf("Average = %d",avg);
printf("\nProgram written by Arpit Verma");
return 0;
}
