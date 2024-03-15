class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int solve(int n,int k,vector<vector<int>>&dp){
         // base cases
        // 1 - if only 1 egg left so jitne floor utna ans coz har floor par jaake check
        // 2 - if floor zero toh ans zero
        // 3 - if floor ek toh ans ek
        if(n==1||k==0||k==1) return k;
        // dp check
        if(dp[n][k]!=-1) return dp[n][k];
        int mini;
        int ans =INT_MAX;
        // har floor par jaake find and apply same analogy and minimum jisme aaye vo ans.
        for(int i = 1;i<=k;i++){
            // 2 cases , either break or not break , we will take the max of them
            // 1st case - it doesn't break , so n remains same and upar jana toh niche ke 
            // floor neglect , hence bache hue = total(k) - i coz i se upar wale hi chaiye
            //  2nd case - it breaks , so n(eggs) same amount bus ek floor niche and fir check
            mini = max(solve(n,k-i,dp),solve(n-1,i-1,dp));
            ans = min(mini,ans);
        }
        return dp[n][k] = ans + 1;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        // applying dp
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return solve(n,k,dp);
       
    }
};
