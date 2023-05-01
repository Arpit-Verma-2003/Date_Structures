//stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack <int> s;
    s.push(5);
    s.push(8);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    return 0;
}
