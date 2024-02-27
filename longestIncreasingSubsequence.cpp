
// using dp but this method occurs tle 

class Solution {
public:
    int f(int i , int prev , int n , vector<int>&arr,vector<vector<int>>&dp ){
        // base case 
        if(i==n) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        // not take
        int len = f(i+1,prev,n,arr,dp);
        // take
        if(prev==-1||arr[i]>arr[prev]){
            prev = i;
            len = max(len,1+f(i+1,prev,n,arr,dp));
        }
        return dp[i][prev+1] = len;
    }
    int lengthOfLIS(vector<int>& arr) {
        // to fix tle use memoization
        vector<vector<int>>dp(arr.size(),vector<int>(arr.size()+1,-1));
        return f(0,-1,arr.size(),arr,dp);
    }
};
