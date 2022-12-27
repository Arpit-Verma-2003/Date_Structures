// array revision programs
/*#include<stdio.h>
int main(){
    int n,m;
    printf("enter no of rows for an array: ");
    scanf("%d",&n);
    printf("enter no of columns for an array: ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the value of index %d , %d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("array you entered:- \n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
//table of a number using array
#include<stdio.h>
int main(){
    int n;
    printf("enter the number you want the table of: ");
    scanf("%d",&n);

    int arr5[10];
    for(int i=0;i<10;i++){
        arr5[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr5[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Enter value at index %d: ",i+1);
    scanf("%d",&arr[i]);
    }
    int rarr[n],j=n-1;
    for(int i=0;i<n;i++){

        rarr[i]=arr[j];
    j--;
    }
    printf("\nArray you entered: ");
    for(int i=0;i<n;i++){
            printf("%d ",arr[i]);}
    printf("\n\nReversed array: ");
    for(int i=0;i<n;i++){
            printf("%d ",rarr[i]);}
printf("\n");
return 0;

}*/
//array of size 3 X 10 containing multiplication table
#include<stdio.h>
int main(){
    int arr[3][10];
    for(int i=1;i<4;i++){
        for(int j=1;j<11;j++){
            if(i==1){
                arr[i][j]=2*j;
            }
            if(i==2){
                arr[i][j]=7*j;
            }
            if(i==3){
                arr[i][j]=9*j;
            }
        }
    }
    for(int i=1;i<4;i++){
        for(int j=1;j<11;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
}

