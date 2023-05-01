#include<iostream>
using namespace std;
pali(int n,int* temp){
    if(n>=0&&n<10){
        return (n==(*temp)%10);
    }
    else{
        if(n%10==*temp%10){
                *temp=*temp/10;
            return pali(n/10,&temp)
        }
    }
}
int main(){
    int n;
    cout<<"enter a number to check if its palindrome or not: "<<endl;
    cin>>n;
    pali(n);
    return 0;
}
