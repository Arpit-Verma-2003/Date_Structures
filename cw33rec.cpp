#include<iostream>
using namespace std;
bool exist(int* arr,int n,int i,int e){
    if(i==n){
        return false;
    }
    else{
        if(arr[i]==e){
            return true;
        }
        return exist(arr,n,i+1,e);
    }
    return 0;
}
int main(){
    int arr[]={2,3,5,67,8,4,21};
    cout<<"enter the element you wanna check if it exists or not: "<<endl;
    int e;
    cin>>e;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<exist(arr,n,0,e);
    return 0;
}
