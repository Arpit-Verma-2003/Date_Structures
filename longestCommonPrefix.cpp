#include <bits/stdc++.h>
string longestCommonPrefix(vector<string> &strs, int n)
{
    // Write your code here
    sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        string ans = "";
        int i=0,j=0;
        while(i<s1.length()&&j<s2.length()){
            if(s1[i]==s2[j]){
                ans+= s1[i];
                i++;
                j++;
            }
            else break;
        }
        return ans;
}


