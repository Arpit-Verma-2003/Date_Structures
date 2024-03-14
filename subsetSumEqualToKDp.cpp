#include <bits/stdc++.h> 
bool solve(int ind,int n,int sum ,int k,vector<int>&arr,vector<vector<int>>&dp){
    // base case
    if(ind==n) return (k==sum);
    if(sum>k) return false;
    // dp check
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    // not take case
    bool notTake = solve(ind+1,n,sum,k,arr,dp);
    // take case
    bool take = false;
    if(sum+arr[ind]==k||sum+arr[ind]<k) take = solve(ind+1,n,sum+arr[ind],k,arr,dp);
    return dp[ind][sum] = take||notTake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    // dp
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return solve(0, n, 0, k, arr,dp);
}
