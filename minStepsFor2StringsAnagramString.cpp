class Solution {
    // logic - similiar logic to k anagrams
    // first map the freq of each char of string 1
    // reduce the freq of each char by string 2
    // if freq>0 , hence changes needed, so count no. of changes 
public:
    int minSteps(string str1, string str2) {
        // initialize counter k
        int k = 0;
        unordered_map<char,int> mp;
        // first mark freq of each char of string 1
        for(char c:str1){
            mp[c]++;
        }
        // reduce freq by char of string 2 
        for(char c:str2){
            if(mp[c]>0) mp[c]--;
            // if less than 0 , increase count
            else k++;
        }
        // return count
        return k;
    }
};
