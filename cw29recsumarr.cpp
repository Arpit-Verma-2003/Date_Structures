#include<iostream>
using namespace std;
int sumarr(int*arr,int n,int i){
    if(i==n-1){
        return arr[i];
    }
    return arr[i]+sumarr(arr,n,i+1);
}
int main(){
    int arr[100];
    int n;
    cout<<"enter the number of elements in the array: "<<endl;
    cin>>n;
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of array elements through recursion : \n"<<sumarr(arr,n,0);
    return 0;
}
