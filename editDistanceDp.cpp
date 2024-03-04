class Solution {
public:
    int func(int i,int j,string& a,string& b,vector<vector<int>>&dp){
        // base case
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        // if found equal
        if(a[i]==b[j]) return dp[i][j] =  func(i-1, j-1, a, b, dp);
        // if doesn't match then 3 possibilities 
        return dp[i][j] = 1 + min(func(i-1, j, a, b, dp),min(func(i, j-1, a, b, dp),func(i-1, j-1, a, b, dp)));
    }
    int minDistance(string a, string b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(n-1,m-1,a,b,dp); 
    }
};
