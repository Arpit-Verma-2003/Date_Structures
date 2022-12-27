#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i;
    for(i=n;i>=0;i=i-5){
            cout<<i<<" ";
        }
    for(;i<=n;i=i+5){
            cout<<i<<" ";
        }
    return 0;
}
