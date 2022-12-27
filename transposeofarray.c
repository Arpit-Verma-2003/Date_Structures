// transpose of array
#include<stdio.h>
int main(){
    int r,c,temp;
    printf("enter the array dimensions:-\n");
    scanf("%d%d",&r,&c);
    int arr[10][10];
    int arr1[10][10];
    printf("enter array elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                arr1[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Program written by Arpit Verma");
    return 0;
}
