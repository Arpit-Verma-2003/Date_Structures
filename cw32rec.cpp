#include<iostream>
using namespace std;
int f(int n1,int n2){
    if(n2>n1)return f(n2,n1);
    if(n2==0){
        return n1;
    }
    return f(n1%n2,n2);
}
int main(){
    int n1,n2;
    cout<<"enter the 2 no.s:"<<endl;
    cin>>n1>>n2;
    cout<<"HCF: "<<f(n1,n2);
    return 0;
}
