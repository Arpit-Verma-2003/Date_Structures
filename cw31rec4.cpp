#include<iostream>
using namespace std;
void incseq(int n){
    if(n==1){
            cout<<n<<" ";
    }
    else{
        incseq(n-1);
        cout<<n<<" ";
    }
}
int main(){
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    incseq(n);
    return 0;
}
