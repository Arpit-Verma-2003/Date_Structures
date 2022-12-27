#include<iostream>
using namespace std;

int main(){
    int i=0;
    int* p = &i;
    cout<<p<<endlc;
    int *q = p;
    cout<< *q;


    return 0;
}
