#include<iostream>
using namespace std;
char stack [100];
int top = -1;
void push(char c){
    top++;
    stack[top]= c;
}
char pop(){
    if(top==-1){
        return -1;
    }
    else{
        top--;
        return stack[top];
    }
}
int priority(char c){
    if(c=='('){
        return 0;
    }
    if(c=='+' || c=='-'){
        return 1;
    }
    if(c=='*' || c=='/'){
        return 2;
    }
    return 0;
}
int main(){
    // infix to postfix
    cout<<"enter the expression"<<endl;
    char inf[100];
    cin>>inf;
    char *i;
    i = inf;
    char x;
    for(;*i!='\0';i++){
        if(isalnum(*i)){
            cout<<*i;
        }
        else if(*i=='('){
            push(*i);
        }
        else if(*i==')'){
            while((x=pop())!='('){
                    cout<<x;
                  }
        }
        else{
            while(priority(stack[top])>=priority(*i)){
                cout<<pop();
                push(*i);
            }
        }
    }
    while(top != -1)
    {
        cout<<pop()<<" ";
    }
    return 0;
}
