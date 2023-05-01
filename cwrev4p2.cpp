#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"enter number of values:"<<endl;
    int n;
    cin>> n;
    int a;
    cout<<"enter the values in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    int temp=0;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<< "yes";
                temp =1;
                break;
            }
            else{
                continue;
            }
        }
    }
    if(temp==0){
        cout<<"no";
    }
    return 0;
}
