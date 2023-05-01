#include<iostream>
using namespace std;
int maxarrele(int * arr,int n,int i){
    if(i==n-1){
        return arr[i];
    }
    else{
        return max(arr[i],maxarrele(arr,n,i+1));
    }
}
int main(){
    int arr[100];
    cout<<"enter number of array elements: "<<endl;
    int n;
    cin>> n;
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"largest element in array is : "<< maxarrele(arr,n,0);
    return 0;
}
