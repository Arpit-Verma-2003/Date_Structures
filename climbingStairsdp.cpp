class Solution {
public:
    int solve(int n,vector<int>&dp){
        // 2 cases either take step 1 or 2
        // base condition
        if(dp[n]!=-1) return dp[n];
        // if 0 or 1 steps left - 1 solution found return 1;
        if(n==0||n==1) return 1;
        // case 1 - if taken on only 1 step
        int a = solve(n-1,dp);
        // case 2 - if taken on 2 steps
        int b = solve(n-2,dp);
        // add the total solutions found by a and b
        return dp[n] = a+b;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
