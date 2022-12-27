#include<iostream>
using namespace std;
int perfect(int m,int n){
    int sum;
    for(int i=m;i<=n;i++){
        sum=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
int main(){
    perfect(1,100);
}
