#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,t;
    scanf("%d",&t);
    int arr[1000];
      for(int l=0;l<t;t++){
            int sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<1){
            sum++;
        }
    }
    if(sum>=k){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }}
      return 0;
  }

