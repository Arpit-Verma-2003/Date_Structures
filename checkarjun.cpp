#include<iostream>
using namespace std;

class Stack{
    int data =3;
    public:
    int next =1;
};

int main(){
    Stack s1;
    cout<<s1.next;
    cout << s1.data;
    return 0;
}
