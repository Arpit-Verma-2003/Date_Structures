class Solution {
public:
    int solve(vector<int>&coins,int amount,int i,vector<vector<int>>&dp){
        if(dp[i][amount]!=-1) return dp[i][amount];
        // if at last index i.e 0
        if(i==0){
            // if divisible hence no. of coins = amount/coins[0]
            if(amount%coins[i]==0) return amount/coins[i];
            // or else infinite coins
            return 1e9;
        }
        // 2 cases , either take or not take
        // not take case , hence +0 coins
        int b = 0+solve(coins,amount,i-1,dp);
        int a = 1e9;
        // take coin only if value is less or equal than the required amount
        if(coins[i]<=amount){
            // take case, hence +1 coins
            a = 1+solve(coins,amount-coins[i],i,dp);
        }
        return dp[i][amount] = min(a,b);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans = solve(coins,amount,coins.size()-1,dp);
        // if infinite coins hence no possible ans, so return -1 as expected
        // by the question
        if(ans>= 1e9) return -1;
        return ans;
    }
};
