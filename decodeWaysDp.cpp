#include<bits/stdc++.h>
class Solution {
public:
    int numDecodings(string s) {
        // by memoization method
        int n = s.length();
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = s[0]=='0'?0:1;
        // at each index of dp - represents the no.
        // of ways string of length i can be decoded
        // hence ans = dp[n]
        for(int i=2;i<=n;i++){
            int oneDigit = stoi(s.substr(i-1,1));
            int twoDigit = stoi(s.substr(i-2,2));
            // if 1 digit we can take , add the prev
            // value (ki same no. of choices like prev)
            if(oneDigit >=1){
                dp[i] +=dp[i-1];
            }
            // if 2 digit we can take , add the prev
            // prev value [i-2] also since vaha tak uske baad 
            //  in this case 2 digits taken + single wala jo chlte ara
            if(twoDigit >=10 && twoDigit <=26){
                dp[i] +=dp[i-2];
            }
        }
        return dp[n];
    }
};
