class Solution {
public:
// logic - while loop until i =0
// skip all spaces, then intialize j
// go till word i.e until found space
// add substring to ans using j
// i<0 then break so as to not add space in end in some cases
    string reverseWords(string s) {
        string res = "";
        int n = s.size();
        int i = n-1;
        while(i>=0){
            while(i>=0&&s[i]==' ') i--;
            if(i<0) break;
            int j = i;
            while(i>=0&&s[i]!=' ') i--;
            if(res.empty())res+=s.substr(i+1,j-i);
            else{
                res = res+" "+s.substr(i+1,j-i);
            } 
        }
        return res;
    }
};
