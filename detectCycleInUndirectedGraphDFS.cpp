bool dfsfunc(vector<int>adj[],int vis[],int node,int parent){
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfsfunc(adj,vis,it,node)==true) return true;
            }
            else if(it!=parent) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfsfunc(adj,vis,i,-1)) return true;
            }
        }
        return false;
    }
