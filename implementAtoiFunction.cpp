#include <limits>
int createAtoi(string s) {
    // Write your code here.
    int res=0;
    string ans="";
    int sign = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ') continue;
        else if(i==0&&(s[i]=='-')) sign = 1;
        else if(i==0&&(s[i]=='+')) sign= 0;
        else if(s[i]>='0'&&s[i]<='9') ans+=s[i];
        else break;
    }
    if(ans!=""){
        try{
            res = stoi(ans);
        }
        catch(const out_of_range& e){
            if(sign==0) return INT_MAX;
            else return INT_MIN;
        }
    }
    return(sign==0)? res:-res;
}
