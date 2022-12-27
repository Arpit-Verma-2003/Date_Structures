#include<iostream>
using namespace std;
int main(){
    int i=0;
    int fact=1;
    int sum=0;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact =fact*i;
        sum=sum+(fact/i);
    }
    cout<<sum<<endl;
    return 0;
}
