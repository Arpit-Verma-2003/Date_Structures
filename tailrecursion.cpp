#include<iostream>
using namespace std;

int fact(int x){
    if(x==0||x==1){
        return 1;
    }
    else {
        return (x*fact(x-1));
    }
}
//tail recursion
int facttail(int x,int y){
    if(y==0||y==1){
        return x;
    }
    else {
        facttail(x*y,y-1);
    }
}
int main(){
    cout<<fact(3)<<endl;
    cout<<facttail(1,4);
    return 0;
}
