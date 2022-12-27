#include<iostream>
using namespace std;
int main(){
    int i=0;
    int fact=1;
    int sum=1;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact =fact*i;
        sum=sum+fact;
    }
    cout<<fact<<" "<<sum<<endl;
    return 0;
}
