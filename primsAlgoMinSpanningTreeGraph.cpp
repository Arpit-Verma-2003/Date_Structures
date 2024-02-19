class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        // min_heap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        // visited array
        vector<int> vis(V,0);
        // wt,node
        pq.push({0,0});
        int sum = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;
            if(vis[node]==1) continue;
            // else add to mst . so add sum and mark visited
            vis[node] = 1;
            sum+=wt;
            for(auto it:adj[node]){
                int adjnode = it[0];
                int adjwt = it[1];
                if(!vis[adjnode]){
                    pq.push({adjwt,adjnode});
                }
            }
        }
        return sum;
    }
};
