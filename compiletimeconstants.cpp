#include<iostream>
using namespace std;
int main(){
    // const keyword makes the variable value unchangeble
    const int a {2+5};
    cout<<a;
    a=0;
    cout<<a;
    return 0;
}
