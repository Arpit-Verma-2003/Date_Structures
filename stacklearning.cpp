#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}
