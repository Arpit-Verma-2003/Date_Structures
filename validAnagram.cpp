#include<vector>
#include<string>
class Solution {
public:

    bool checkanagram(string s,string t){
        vector <int> freq (26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }

    bool isAnagram(string s, string t) {
        if(checkanagram(s,t)) return true;
        return false;
    }
};
