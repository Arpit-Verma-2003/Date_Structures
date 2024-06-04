#include <bits/stdc++.h> 
// logic - a tree is graph which is not cyclic and no distributed
// components, hence to check no cycle and distributed com.. we do 
// dfs/bfs traversal , if after 1 single traversal all nodes visited
// hence all connected ✅ and each time check if visited is already 
// marked and if not parent , hence loop , so return false or else true
bool dfs(int node,vector<vector<int>>&adj,int n,int parent , vector<int>&vis){
    vis[node] = 1;
    for(auto it:adj[node]){
        // if not marked visited traverse
        if(!vis[it]){
            if(!dfs(it,adj,n,node,vis)) return false;
        }
        // if already marked , also not parent loop exist -> return false
        else if(it!=parent) return false;
    }
    return true;
}
bool checkgraph(vector<vector<int>> edges, int n, int m)
{
    // write your code here
    vector<vector<int>> adj(n);
    // make adj vector first from gives edges for traversal
    for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    vector<int> vis(n,0);
    if(!dfs(0,adj,n,-1,vis)) return false;
    // check if all nodes visited(connected)
    for(int i=0;i<n;i++){
        if(vis[i]!=1) return false;
    }
    return true;
}
