class Solution {
public:
// logic - instead of doing bfs/dfs on each cell , do dfs on each boundary cells
// [0][cols],[rows][0] (pacific ocean) & similarly for the atlantic ocean.
// now at each go dfs , mark visited if it can be reached through ocean
// if both from pacific & atlantic a particular cell can be reached , hence
// its one of the answers .
    void dfs(vector<vector<int>>& heights,vector<vector<int>>& visited,int i,int j,int prev){
        // check boundary conditions, visited array , and lastly reverse the 
        // condition that only larger level can we go(since going reverse)
        // if yes , do nothing return
        if(i<0||j<0||i>=heights.size()||j>=heights[0].size()||visited[i][j]==1||heights[i][j]<prev) return;
        // else mark visited and go in all 4 directions
        visited[i][j] = 1;
        dfs(heights,visited,i+1,j,heights[i][j]);
        dfs(heights,visited,i,j+1,heights[i][j]);
        dfs(heights,visited,i-1,j,heights[i][j]);
        dfs(heights,visited,i,j-1,heights[i][j]);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        // visited vectors for both oceans
        vector<vector<int>> pacific(n,vector<int>(m,0));
        vector<vector<int>> atlantic(n,vector<int>(m,0));
        // for col 0 
        for(int row=0;row<n;row++){
            dfs(heights,pacific,row,0,-1);
            dfs(heights,atlantic,row,m-1,-1);
        }
        // for rows 0
        for(int col=0;col<m;col++){
            dfs(heights,pacific,0,col,-1);
            dfs(heights,atlantic,n-1,col,-1);
        }
        vector<vector<int>> ans;
        vector<int> temp;
        // check and add the ones which are marked in both
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j]==1&&atlantic[i][j]==1){
                    temp.clear();
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
