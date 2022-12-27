// program to reverse a number
#include<stdio.h>
int main(){
    int a,r;
    printf("enter a number to reverse");
    scanf("%d",&a);
    for( r=0;a>0;a=a/10){
        r=r*10;
            r=r+a%10;


    }
    printf("%d",r);
return 0;

}
