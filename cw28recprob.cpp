#include<iostream>
using namespace std;
int sum(int n){
    if(n>=0&&n<10){
        return n;
    }
    else{
        return sum(n/10)+n%10;
    }
}
int main(){
    int n;
    cout<<"enter the number of whose you want sum of the digits"<<endl;
    cin>> n;
    cout<< sum(n);
    return 0;
}
