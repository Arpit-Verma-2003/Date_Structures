class Solution {
public:
    int solve(int ind,string s,set<string>&dict,vector<int>&dp){
        // base case
        if(ind==s.size()) return 1;
        // check dp
        if(dp[ind]!=-1) return dp[ind];
        string temp = "";
        for(int i=ind;i<s.size();i++){
            temp+=s[i];
            if(dict.find(temp)!=dict.end()){
                if(solve(i+1,s,dict,dp)) return dp[ind] = 1;
            }
        }
        return dp[ind] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> dict;
        vector<int>dp(301,-1);
        for(auto a:wordDict) dict.insert(a);
        return solve(0,s,dict,dp);
    }
};  
