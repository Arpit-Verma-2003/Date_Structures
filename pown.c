//to calculate a number's power of power(ex-n^p^q)
#include<stdio.h>
int main(){
    int n,p,q,pow=1,pow1=1;
    printf("enter number: ");
    scanf("%d",&n);
    printf("enter power: ");
    scanf("%d",&p);
    printf("enter 2nd power: ");
    scanf("%d",&q);

    for(int i=0;i<p;i++){
        pow=pow*n;

    }
    for(int j=0;j<q;j++){
        pow1=pow1*pow;
    }
printf("%d",pow1);
return 0;
}
