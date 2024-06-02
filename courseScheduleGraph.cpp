class Solution {
public:
// logic - all tasks/courses can only be accomplished if no loop
// exist i.e interdependent , hence we make a graph connect the nodes as
// as [0,1] so node (0)-> node(1) since 0 is dependent on 1 and then do topo
//  sort , as it only works for the graphs which doesn't have a loop/cycle  
    bool canFinish(int V, vector<vector<int>>& prerequisites) {
        // step 0 - make adj matrix
        vector<int>adj[V];
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        // topological sort (to check their lies no loop)
        // through bfs
        // step 1 - make indegree matrix
        vector<int> indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        // step 2 - make queue & make topo sort vector
        queue<int>q;
        vector<int>topo;
        // insert i in q which have 0 indegree
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        // start topo sort
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        // last step - check if topo size == V
        // if yes then no cycle else cycle so false
        if(topo.size()!=V) return false;
        return true;
    }
};
