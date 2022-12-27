// to check largest number using quaternery operator
#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter 2nd num:");
    scanf("%d",&b);
    printf("enter 3rd num:");
    scanf("%d",&c);
    max = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("largest number = %d",max);
    return 1;
}
