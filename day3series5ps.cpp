#include<iostream>
using namespace std;
int main(){
    int i;
    int fact=1;
    int sum=1;
    int power=1;
    int x=2,s=-1,n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
        power=power*x;
        sum=sum+(power/fact)*s;
        s=s*(-1);
    }
    cout<<sum<<endl;
    return 0;
}
