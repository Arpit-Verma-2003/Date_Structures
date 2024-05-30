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
        // use the same logic as robber 1 problem (without loop)
        // just use 2 arrays , 1 with 1st element and not last
        // nd 2nd vice - versa and return max.

        // check if only 1 element present
        if(nums.size()==1) return nums[0];
        // respective dps made - 
        vector<int>dp(nums.size(),-1);
        vector<int>dp2(nums.size(),-1);
        vector<int>nums1 = nums;
        // 2 nums made
        nums1.erase(nums1.begin());
        nums.pop_back();
        int ans = max(solve(nums1,0,dp),solve(nums,0,dp2));
        return ans;
    }
};
