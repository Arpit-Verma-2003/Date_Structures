#include<stdio.h>
int stack[100];
int n;
int top=0;
int pop(){
    if(top==0){
        printf("stack underflow,nothing to pop\n");
        return 0;
    }
    for(int i=1;i<top;i++){
        stack[top-i]=stack[i];
    }
    top--;
    printf("top element is popped sucessfully.\n");

    return 0;
}
int display(){
    printf("your stack contains the following:\n");
    for(int i=0;i<top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
    return 0;
}
int push(){
    if(n<top+1){
        printf("stack overflow, can't insert an element.\n");
        return 0;
    }
    printf("enter the element you wanna push in the array:\n");
    scanf("%d",&stack[top]);
    top++;
    return 0;
}
int main(){
    // stack using array
    printf("enter the size of the stack:\n");
    scanf("%d",&n);
    for(int i=0;i<1000;i++){
    printf("enter: 1 to push 2 to display 3 to pop 4 to peak 5 to exit\n");
    int ch;
    scanf("%d",&ch);
    switch(ch){
    case 1:
        push();
        break;
    case 2:
        display();
        break;
    case 3:
        pop();
        break;
    case 4:
        printf("top element: %d",stack[top-1]);
        printf("\n");
        break;
    case 5:
        goto last;
    }
    }
    last:
    return 0;
}
