#include<iostream>
using namespace std;
int palin(int m,int r,int n){
    if((m==r)&&(n==0)){
        return 1;
    }
    if((m!=r)&&(n==0)){
        return 0;
    }
    palin(m,r*10+n%10,n/10);
}
int main(){
    int n;
    cout<<"enter a  no"<<endl;
    cin>>n;
    cout<<palin(n,0,n);
    return 0;
}

