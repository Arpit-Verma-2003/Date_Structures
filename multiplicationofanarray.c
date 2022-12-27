#include<stdio.h>
int main(){
    int r,c,r1,c1;
    printf("enter number of rows and columns for 1st array respectively:\n");
    scanf("%d%d",&r,&c);
    printf("enter number of rows and columns for 2nd array respectively:\n");
    scanf("%d%d",&r1,&c1);
    if(c==r1){
        int arr1[r][c],arr2[r1][c1];
        printf("enter array 1 elements:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("enter array 2 elements:\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        int mul[r][c1];
        int k;
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                mul[i][j]=0;
                for(int k=0;k<r1;k++){
                    mul[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        printf("multiplied array=\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                printf("%d  ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Incompatible for multiplication");
    }
    return 0;
}
