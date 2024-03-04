#include <bits/stdc++.h>
int func(int ind ,int wt,vector<int> &values,vector<int> &weights,vector<vector<int>>&dp){
	// base case
	if(ind==0){
		if(wt>=weights[0]) return values[0];
		else return 0;
	}
	if(dp[ind][wt]!=-1) return dp[ind][wt];
	// not take case
	int notTake = func(ind-1, wt, values,weights,dp);
	// take case
	int take = 0;
	if(wt>=weights[ind]){
		take = values[ind] + func(ind-1, wt-weights[ind], values,weights,dp);
	}
	return dp[ind][wt] = max(notTake,take);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>>dp(n,vector<int>(w+1,-1));
	return func(n-1, w, values,weights,dp);
}
