//powerset program practical
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter number of elements in the array:-\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    printf("power set-\n");
    printf("{");
    for(int i=0;i<pow(2,n);i++){
        temp=i;
        printf("(");
        for(int j=0;j<n;j++){
            if(temp%2==1){
                printf("%d ",arr[j]);
            }
            temp=temp/2;
        }
        printf(")");
        printf(",");
    }
    printf("}");
    return 0;
}
