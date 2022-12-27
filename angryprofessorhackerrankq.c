#include<stdio.h>
int arr[1000];
char* return_string_using_dynamic_allocation(int t) {
    int n,k;
      char* s = malloc(100 * sizeof(char));
      char* s1= malloc(100 * sizeof(char));
      s = "YES";
      s1= "NO";
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
        return s;
    }
    else{
        return s1;
    }}
      return s;
  }

int main(){
    int t,n,k;

    scanf("%d",&t);
    printf("%c",return_string_using_dynamic_allocation(t));
    return 0;
}
