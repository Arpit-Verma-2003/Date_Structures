//Write a program in C to implement addition of two 2D arrays
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int arr1[a][b];
    printf("enter the values for 1st array:-\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("enter the value of index %d,%d for array1: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the values for 2nd array:-\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("enter the value of index %d,%d for array2: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    // addition from here
    int sum[a][b];
        for(int i =0;i<a;i++){
            for(int j=0;j<b;j++){
                sum[i][j]=arr[i][j]+arr1[i][j];
            }
        }

    //sum array display
    printf("sum of above two arrays:-\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("Program written by Arpit Verma");
    return 0;
}
