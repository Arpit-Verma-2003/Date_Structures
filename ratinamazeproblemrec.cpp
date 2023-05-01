#include<iostream>
#include<string>
#include<vector>
using namespace std;
void f(int i,int j,int m,int n,vector<string>& ans,string output,int* visited){
    if(i==m-1&&j==n-1){
        ans.push_back(output);
        return ;
    }
    if(issafe()){
        output.push_back("d");
        f(i+1,j,m,n,ans,output,visited);
        output.pop_back();
    }
    f(i,j+1,m,n,ans,output+"r");
    f(i-1,j,m,n,ans,output+"u");
    f(i,j-1,m,n,ans,output+"l");
}
int main(){
    vector<string> ans;
    string output = "";
    int i=0,j=0,m,n;
    cout<<"enter m,n"<<endl;
    cin>>m>>n;
    int visited[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            visited[i][j] = 0;
        }
    }
    f(i,j,m,n,ans,output,visited);
    for(int i=0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
}
