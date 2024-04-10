class Solution {
public:
    int solve(vector<int>&nums,int ind,vector<int>&dp){
        // base condition - size full
        if(ind>=nums.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];
        if(ind==nums.size()-1){
            return nums[nums.size()-1];
        }
        // 2 cases , take and not take
        // not take
        int notTake = solve(nums,ind+1,dp);
        int take = nums[ind] + solve(nums,ind+2,dp);
        return dp[ind] = max(notTake,take);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int ans = solve(nums,0,dp);
        return ans;
    }
};
