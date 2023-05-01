#include<iostream>
using namespace std;
int f(int n){
    if(n==1){
        return n;
    }
    else{
        if(n%2==0){
            return f(n-1)-n;
        }
        else{
            return f(n-1)+n;
        }
    }
}
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<f(n);
    return 0;
}
