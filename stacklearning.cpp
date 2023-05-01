#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int* arr;
    int top;
    int size;
    //constructor-
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top]=ele;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        return;
    }
    void pop(){
        if(top>-1){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
        return;
    }
    int peak(){
        if(top>=0&&top<size){
            return arr[top];
        }
        else{
            cout<<"the stack is empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top<0){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    /*stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;*/
    //stack using array and classes-
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.peak()<<endl;
    cout<<s1.isempty()<<endl;
    s1.pop();
    cout<<s1.peak()<<endl;
    return 0;
}
