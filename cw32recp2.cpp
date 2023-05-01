#include<iostream>
using namespace std;
void f(int n,int k){
    if(k==1){
        cout<<n<<" ";
    }
    else{
        f(n,k-1);
        cout<<n*k<<" ";
    }
}

int main(){
    cout<<"enter the number and no of multiples of it"<<endl;
    int k,n;
    cin>>n>>k;
    f(n,k);
    return 0;
}
