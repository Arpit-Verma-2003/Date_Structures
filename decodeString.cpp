#include <bits/stdc++.h>
string decodeString(string s)
{
    // write your code here
     string result = "";
        for(int i =0;i<s.length();i++){
            if(s[i]!=']'){
                result.push_back(s[i]);
            }
            else{
                string temp = "";
                // extracting string from result
                while(!result.empty()&&result.back()!='['){
                    temp.push_back(result.back());
                    result.pop_back();
                }
                // reverse the string
                reverse(temp.begin(),temp.end());
                // remove the last character (opening bracket)
                result.pop_back();
                // extract number
                string num="";
                while(!result.empty()&&(result.back()>='0'&&result.back()<='9')){
                    num.push_back(result.back());
                    result.pop_back();
                }
                // reverse the num string
                reverse(num.begin(),num.end());
                // convert num string to int using stoi
                int numb = stoi(num);
                // insert temp to result numb times
                while(numb){
                    result+=temp;
                    numb--;
                }
            }
        }
        return result;
}
