
#include<stack>
void revdfs(int node,vector<int>&vis,vector<int>transpose[],vector<int>&ans){
    ans.push_back(node);
    vis[node]=1;
    for(auto it:transpose[node]){
        if(!vis[it]){
            revdfs(it,vis,transpose,ans);
        }
    }
}

void topo(int node,vector<int>&vis,stack<int>&st,vector<vector<int>> &adj){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            topo(it,vis,st,adj);
        }
    }
    st.push(node);
}

vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &adj)
{
    // Write your code here.
    // step 1
    stack<int>st;
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            topo(i,vis,st,adj);
        }
    }
    // step 2
    vector<int>transpose[n];
    for(int i=0;i<n;i++){
        vis[i]=0;
        for(auto it:adj[i]){
            transpose[it].push_back(i);
        }
    }
    vector<vector<int>> aans;
    while(!st.empty()){
        vector<int> ans;
        int node = st.top();
        st.pop();
        if(!vis[node]){
            revdfs(node,vis,transpose,ans);
            aans.push_back(ans);
        }
    }
    return aans;
}
