long func(int n,vector<long>c,int i,vector<vector<long long>>& dp){
    if(i==0) return n%c[0]==0;
    if(dp[i][n]!=0)return dp[i][n];
    
    long long take = 0;
    long long nottake = func(n,c,i-1,dp);
    if(c[i]<=n){
        take = func(n-c[i],c,i,dp);
    }
    return dp[i][n]=take+nottake;
}

long getWays(int n, vector<long> c) {
    int l = c.size();
    vector<vector<long long>> dp(l,vector<long long>(n+1,0));
    long int ans = func(n,c,c.size()-1,dp);
    return ans;
}
