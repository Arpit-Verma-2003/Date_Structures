class Solution {
public:
    int f(int n,int m,string&s,string&t,vector<vector<int>>&dp){
        if(n<0||m<0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n]==t[m]) return dp[n][m] = 1+f(n-1,m-1,s,t,dp);
        return dp[n][m] = max(f(n-1,m,s,t,dp),f(n,m-1,s,t,dp));
    }
    int longestCommonSubsequence(string s, string t) {
        int n = s.size()-1;
        int m = t.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(n,m,s,t,dp);
    }
};
