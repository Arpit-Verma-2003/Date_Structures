class Solution{
    // logic - since ordering required , use topological sort
    // hence adj matrix need to be made , for this we go through
    // a loop till N-1 and take 2 strings each time s1 & next s2
    // we compare both strings till thier character mismatch
    // and therefore at mismatch character , s1[i] should be 
    // before s2[i], hence we add in this way in adj list that
    // node s1[i] have direct to s2[i] so that in topo sort , s1[i]
    // comes first. after adj made , do topo sort , reconvert to string
    // and then return
    private:
    // topo sort
    vector<int> topoSort(int V,vector<int> adj[]){
        vector<int> indegree(V,0);
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return topo;
    }
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        // adj matrix
        vector<int> adj[K];
        // loop till n-1 since till i+1
        for(int i=0;i<N-1;i++){
            // 2 strings each time
            string s1 = dict[i];
            string s2 = dict[i+1];
            // compare till whichever has min length
            int len = min(s1.length(),s2.length());
            for(int ptr = 0;ptr<len;ptr++){
                // pt where mismatch
                if(s1[ptr]!=s2[ptr]){
                    // add in adj
                    adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
                    break;
                }
            }
        }
        // do topo sort
        vector<int>topo = topoSort(K,adj);
        string ans = "";
        // convert and add to ans string
        for(auto it:topo){
            ans = ans+char(it+'a');
        }
        // return the ans string
        return ans;
        
    }
};
