#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",n);
    while(n!=1){
    int min=1000;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-min;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<1){
            for(int j=i;j<n;j++){
                arr[j]=arr[j+1];
            }
            i--;
            n--;
        }
    }
    printf("\n%d",n);}
    return 0;
}
