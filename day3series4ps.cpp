#include<iostream>
using namespace std;
int main(){
    int i;
    int fact=1;
    int sum=0;
    int power=1;
    int n;
    int x=2;
    int s=1;
    cout<<"enter n: ";
    cin>>n;
    for(i=1;i<=2*n-1;i=i++){
        fact=fact*i;
        power=power*x;
        if(i%2!=0){
        sum=sum+(power/fact)*s;
        s=s*(-1);
        }
    }
    cout<<sum<<endl;
    return 0;
}
