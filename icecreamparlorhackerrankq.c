//ice cream parlour hackerrank question
#include<stdio.h>

int main(){
    int t,k,m,n,b,j;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&k);
        scanf("%d",&n);
        int arr[n];
        for(int l=0;l<n;l++){
            scanf("%d",&arr[l]);
        }
        for( j=0;j<n-1;j++){
            for( b=j+1;b<n;b++){
                if(arr[j]+arr[b]==k){
                    m=1;
                    break;
                }
            }
            if(m==1){
                break;
            }

        }
        if(b>j){
            printf("%d %d\n",j+1,b+1);
        }
        else{
            printf("%d %d\n",b+1,j+1);
        }
        m=0;
    }
    return 0;
}
