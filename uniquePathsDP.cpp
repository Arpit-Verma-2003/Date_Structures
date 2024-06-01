class Solution {
public:
    int solve(int n,int m, int i, int j,vector<vector<int>>&dp){
        // base case
        if(i==n-1&&j==m-1){
            return 1;
        }
        // edge case
        if(i>=n||j>=m) return 0;
        // dp check
        if(dp[i][j]!=-1) return dp[i][j];
        // 2 cases - 
        // either go down
        int a = solve(n,m,i+1,j,dp);
        // either go right
        int b = solve(n,m,i,j+1,dp);
        return dp[i][j] = a+b;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,0,0,dp);
    }
};
