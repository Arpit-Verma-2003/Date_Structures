#include<iostream>
#include<vector>
using namespace std;
void f(int* arr, int n, int i, int sum,vector<int> &result){
    if(i==n){
        result.push_back(sum);
        return;
    }
    else{
        f(arr,n,i+1,sum+arr[i],result);
        f(arr,n,i+1,sum,result);
    }
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> result;
    f(arr,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;

}
