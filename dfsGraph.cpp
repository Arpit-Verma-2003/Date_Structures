class Solution {
    private:
    void dfsfunc(vector<int>adj[],vector<int>&dfs,vector<int>&vis,int node){
        vis[node]=1;
        dfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]){
                dfsfunc(adj,dfs,vis,it);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector <int> dfs;
        dfsfunc(adj,dfs,vis,0/*node*/);
        return dfs;
    }
};
