#include<iostream>
using namespace std;
int main(){
    int i;
    int fact=1;
    int sum=1;
    int power=1;
    int x;
    cout<<"enter x"<<endl;
    cin>>x;
    for(i=1;i<=x;i++){
        fact=fact*i;
        power=power*x;
        sum=sum+power/fact;
    }
    cout<<sum<<endl;
    return 0;
}
