void solve(int row,int col,int n ,vector<string>&ans,string move ,vector<vector<int>>&vis,vector<vector<int>> &mat,int di[],int dj[]){
    // base condition
    if(row==n-1&&col==n-1){
        ans.push_back(move);
        return;
    }
    // dlru(priority in which directions are)
    // approach 1 - 
    // downward
    // if(row+1<n&&!vis[row+1][col]&&mat[row+1][col]==1){
    //     vis[row][col]=1;
    //     solve(row+1, col, n, ans, move+'D', vis, mat);
    //     vis[row][col]=0;
    // }
    // // left direction
    // if(col-1>=0&&!vis[row][col-1]&&mat[row][col-1]==1){
    //     vis[row][col]=1;
    //     solve(row, col-1, n, ans, move+'L', vis, mat);
    //     vis[row][col]=0;
    // }
    // // rightwards
    // if(col+1<n&&!vis[row][col+1]&&mat[row][col+1]==1){
    //     vis[row][col]=1;
    //     solve(row, col+1, n, ans, move+'R', vis, mat);
    //     vis[row][col]=0;
    // }
    // // upwards
    // if(row-1>=0&&!vis[row-1][col]&&mat[row-1][col]==1){
    //     vis[row][col]=1;
    //     solve(row-1, col, n, ans, move+'U', vis, mat);
    //     vis[row][col]=0;
    // } 
    // approach 2 - 
    string dir = "DLRU";
    for(int ind = 0;ind<4;ind++){
        int nexti = row+di[ind];
        int nextj = col+dj[ind];
        if(nexti<n&&nextj<n&&nexti>=0&&nextj>=0&&!vis[nexti][nextj]&&mat[nexti][nextj]==1){
            vis[row][col] = 1;
            solve(nexti, nextj, n, ans, move+dir[ind], vis, mat, di, dj);
            vis[row][col] = 0;
        }
    }  
}
