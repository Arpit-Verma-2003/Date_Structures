// program to convert binary number to decimal using for loop
#include<stdio.h>
#include<math.h>
int main(){
    int n,r,sum=0;
    printf("enter number in binary: ");
    scanf("%d",&n);
    for(int i=0;n>0;n=n/10){
        r=n%10;
        sum= sum+(r*pow(2,i));
        i++;
    }
    printf("The entered binary number value in decimal = %d",sum);
return 0;

}
