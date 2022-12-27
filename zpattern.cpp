#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=n-2;i++){
            for(j=n-i-1;j>=1;j--){
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
    for(i=1;i<=n;i++){
        cout<<"*";
    }
    return 0;
}
