class Solution{
public:
    bool isPalindrome(int st,int en,string s){
        while(st<en){
            if(s[st]!=s[en]) return false;
            st++;
            en--;
        }
        return true;
    }
    int solve(int ind,string& s,vector<int>&dp){
        // base condition
        if(ind==s.size()) return 0;
        // check dp
        if(dp[ind]!=-1) return dp[ind];
        int mini =  INT_MAX;
        for(int j=ind;j<s.size();j++){
            // check if palindrome then apply partition
            if(isPalindrome(ind,j,s)){
                int cost = 1 + solve(j+1,s,dp);
                // if yaha krke minimum partitions are hai toh ans me daldo
                mini = min(cost,mini);
            }
        }
        return dp[ind] = mini;
    }
    int palindromicPartition(string str)
    {
        // code here 
        // dp
        vector<int> dp(str.size(),-1);
        return solve(0,str,dp) - 1 ; // -1 coz end me ek extra partition lagra hai after end of s.
    }
};
