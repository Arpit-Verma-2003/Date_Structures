#include<iostream>
using namespace std;
void parr(int* arr,int n,int i){
    if(i<n){
        cout<<arr[i]<<" ";
        return parr(arr,n,i+1);
    }
}
int main(){
    int arr[100];
    cout<<"enter array size: "<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"printing array through recursion:"<<endl;
    parr(arr,n,0);
    return 0;
}
