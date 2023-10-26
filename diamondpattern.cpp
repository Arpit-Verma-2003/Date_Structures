#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 5;
    int ch = 65;
    for(int i=1;i<(n+1);i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        int k=0;
        for(int j =0;j<(2*i-1);j++){
            cout<<char(ch+k);
            k++;
        }
        cout<< "\n";
    }
    for(int i=n+1;i<=(n*2-1);i++){
        for(int j=0;j<(i-n);j++){
            cout<<" ";
        }
        int k=0;
        for(int j=0;j<(2*(2*n-i)-1);j++){
            cout<<char(ch+k);
            k++;
        }
        cout<<"\n";
    }
    return 0;
}
