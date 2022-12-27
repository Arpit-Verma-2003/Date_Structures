// address calc of 1d array
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<2*n;i++){
        scanf("%c",&arr[i]);
    }
    int ba,ii,w,l;
    printf("enter index for address:\n");
    scanf("%d",&ii);
    ba= &arr[0];
    w=sizeof(arr[0]);
    int add= ba+(w*(ii-l));
    printf("%d",add);
    return 0;
}
