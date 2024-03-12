#include <bits/stdc++.h>
long solve(int ind,int v,int *arr,vector<vector<long>>&dp){
    // base case
    if(ind==0){
        return (v%arr[ind]==0);
    }
    // dp check
    if(dp[ind][v]!=-1) return dp[ind][v];
    // not take
    long notTake = solve(ind-1, v, arr,dp);
    long take = 0;
    if(v>=arr[ind]){
        take = solve(ind, v-arr[ind], arr,dp);
    }
    return dp[ind][v]=take+notTake;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>>dp(n,vector<long>(value+1,-1));
    return solve(n-1, value, denominations,dp);
}
