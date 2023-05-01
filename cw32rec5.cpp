#include<iostream>
using namespace std;
int pow(int n,int p){
    if(p==1){
        return n;
    }
    return n*pow(n,p-1);
}
int armstrong(int n,int d){
    if(n==0){
        return 0;
    }
    else{
        return pow(n%10,d)+armstrong(n/10,d);
    }
}
int noofdigits(int n){
    if(n>=0&&n<10){
        return 1;
    }
    else{
        return 1+noofdigits(n/10);
    }
}
int main(){
    cout<<"enter a number to check if its armstrong number or not: "<<endl;
    int n;
    cin>>n;
    int d=noofdigits(n);
    int result = armstrong(n,d);
    if(result==n){
        cout<<"Entered numbered is an Armstrong number."<<endl;
    }
    else{
        cout<<"Entered number is not an Armstrong number."<<endl;
    }
    return 0;
}
