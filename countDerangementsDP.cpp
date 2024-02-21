#define MOD 1000000007
#include <vector>
long long int der(int n,vector<long long>&dp){
    // base case - 
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n] = (((n-1)%MOD)*((der(n-2,dp)%MOD)+(der(n-1,dp)%MOD)))%MOD;
    return dp[n];
}

long long int countDerangements(int n) {
    // Write your code here.
    vector<long long>dp(n+1,-1);
    int ans = der(n,dp);
    return ans;
}
