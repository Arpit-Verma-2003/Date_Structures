#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<4-i;j++){
            printf(" ");
        }
        for(int k=i;k<=2*i-1;k++){
            cout<<k;
        }
        for(int l=2*(i-1);l>=i;l--){
            cout<<l;
        }
        cout<<endl;
    }
}
