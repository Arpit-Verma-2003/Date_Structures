class Solution {
  public:
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis){
        vis[node] = 1;
        for(int it = 0;it<adj[node].size();it++){
            if(!vis[it]&&adj[node][it]==1){
                dfs(it,adj,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int cnt = 0;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adj,vis);
            }
        }
        return cnt;
    }
};
