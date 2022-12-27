#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int ele){
    int low=0;
    int high=n;
    int mid=(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(ele==arr[mid]){
            ans=mid;
            high=mid-1;
        }
        else if(ele<arr[mid]){
            high=mid-1;
        }
        else if(ele>arr[mid]){
            low=mid+1;
        }
        mid=(high-low)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int ele){
    int low=0;
    int high=n;
    int mid=(low+high)/2;
    int ans=-1;
    while(low<=high){
        if(ele==arr[mid]){
            ans=mid;
            low=mid+1;
        }
        else if(ele<arr[mid]){
            high=mid-1;
        }
        else if(ele>arr[mid]){
            low=mid+1;
        }
        mid=(high-low)/2;
    }
    return ans;
}
int main(){
    cout<<"enter size an array"<<endl;
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"enter the ele"<<endl;
    cin>>n;
    int first = firstocc(arr,n,ele);
    int second= lastocc(arr,n,ele);
    cout <<first<<second <<endl;
    return 0;
}
