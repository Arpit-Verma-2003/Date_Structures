
bool isSafe(int node,vector<int>&color,vector<vector<int>>&graph,int n, int col){
    for(int k =0;k<n;k++){
        if(k!=node&&graph[k][node]==1&&color[k]==col) return false;
    }
    return true;
}

bool solve(int node,vector<vector<int>> &mat,vector<int>&color,int m , int n ){
    if(node==n) return true;
    for(int i=1;i<=m;i++){
        if(isSafe(node,color,mat,n,i)){
            color[node]=i;
            if(solve(node+1, mat,color, m, n)) return true;
            color[node]=0;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n = mat.size();
    vector<int> color(n,0);
    if(solve(0,mat,color,m,n)) return "YES";
    return "NO";
}
