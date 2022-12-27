#include<iostream>
using namespace std;
void inparr(int arr[],int n){
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void outarr(int arr[],int n){
    cout<<"output array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[100];
    inparr(arr,n);
    outarr(arr,n);
    int a=6;
    int b=7;
    swap(a,b);
    cout<<a<<b;
    return 0;
}
