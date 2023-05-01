// pascal triangle
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> vec (n);
    for(int i=0;i<n;i++){
            vec[i].resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0||j==i){
                vec[i][j]=1;
            }
            else{
                vec[i][j]=vec[i-1][j]+vec[i-1][j-1];
            }
        }
    }
    return vec;
}
int main(){
    /*vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    vector<int> v3 = {7,8,9};
    vector<vector<int>> v = {v1,v2,v3};
    vector<vector<int>> vec = (n,vector<int>(m));*/
    int n;
    cin>>n;
    vector<vector<int>> vec;
    vec = pascaltriangle(n);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<< vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
