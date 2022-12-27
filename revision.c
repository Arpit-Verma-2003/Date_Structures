/* to print fibonacci series
#include<stdio.h>
int fibo(int n){
    if(n==1||n==0){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    printf("%d",fibo(0));
    return 0;
}*/
#include<stdio.h>
int main(){
    /*int a=0,b=9;
    int* p=&a;
    printf("%d %u ",&a,p);
    printf("%d %d",a,*p);
    printf(" %u",&p);
    *p =8;
    printf(" %d",a);
    return 0;*/
    int arr[]={1,2,3,4};
    printf("%d",arr[2]);
    return 0;


}
