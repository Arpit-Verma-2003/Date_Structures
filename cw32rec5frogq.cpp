#include<iostream>
using namespace std;
int frog(int* arr,int n,int i){
        if(i==n-1){
            return 0;
        }
        if(i==n-2){
            return frog(arr,n,i+1)+abs(arr[i]-arr[i+1]);
        }
        else{
            return min(frog(arr,n,i+1)+abs(arr[i]-arr[i+1]),frog(arr,n,i+2)+abs(arr[i]-arr[i+2]));
        }
}
int main(){
    int arr[100];
    cout<<"enter the number of stones: "<<endl;
    int n;
    cin>>n;
    cout<<"enter the cost of each stone: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<frog(arr,n,0);
    return 0;
}
