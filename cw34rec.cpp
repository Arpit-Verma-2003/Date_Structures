#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string arr,int i,string sum,int n,vector<string> &result){
    if(i==n){
        result.push_back(sum);
        return ;
    }
    else{
        f(arr,i+1,sum+arr[i],n,result);
        f(arr,i+1,sum,n,result);
    }
}
int main(){
    string arr="arp";
    vector<string> result;
    f(arr,0,"",arr.length(),result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
