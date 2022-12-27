#include<stdio.h>
int main(){
    char op;
    printf("enter operator :");
    scanf("%c",&op);
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    switch(op){
    case '+':
        printf("%d+%d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d/%d = %d",a,b,a/b);
        break;
    default:
        printf("enter a valid operator");
    }

return 0;
}

