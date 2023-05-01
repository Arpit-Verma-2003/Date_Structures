#include<iostream>
using namespace std;
int main(){
    int a=0;
    cout<<&a<<endl;
    int* ad= &a;
    cout<<ad<<endl;
    cout<<*ad<<endl;
    cout<<&ad<<endl;
    float g = 5.345;
    float* ptr = &g;
    return 0;
}
