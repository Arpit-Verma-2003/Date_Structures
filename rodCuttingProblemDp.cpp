
int solve(int ind,int n,vector<int>&price,vector<vector<int>>&dp){
	// base case
	if(ind==0){
		return n*price[0];
	}
	// dp check
	if(dp[ind][n]!=-1) return dp[ind][n];
	// 2 cases
	// 1st not take or do not cut
	int notCut = 0 + solve(ind-1, n, price,dp);
	// 2nd take or cut
	int cut = INT_MIN;
	int rodLength = ind+1;
	if(rodLength<=n) cut = price[ind] + solve(ind, n-rodLength, price,dp);
	return dp[ind][n] = max(notCut,cut);
}

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>>dp(n,vector<int>(n+1,-1));
	return solve(n-1,n,price,dp);
}
