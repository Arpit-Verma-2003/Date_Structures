// linear search
#include<stdio.h>
int main(){
    printf("enter array size:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the key to search in the array:\n");
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("%d found at index = %d in the array",key,i);
            printf("\nProgram written by Arpit Verma");
            return 0;
        }
    }
    printf("element not found");
    printf("Program written by Arpit Verma");
    return 0;
}
