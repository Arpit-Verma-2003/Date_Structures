// approach 1 - 
int romanToInt(string s) {
    // Write your code here
    int ans=0;
    map<char,int> m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});
    for(int i=0;i<s.length();i++){
        if((s[i]=='V'&&s[i-1]=='I')||(s[i]=='X'&&s[i-1]=='I')||(s[i]=='L'&&s[i-1]=='X')||(s[i]=='D'&&s[i-1]=='C')||
        (s[i]=='M'&&s[i-1]=='D')||(s[i]=='M'&&s[i-1]=='C')||(s[i]=='C'&&s[i-1]=='X')){
            ans+= m[s[i]]-2*m[s[i-1]];
        }
        else ans+=m[s[i]];
    }
    return ans;
}
// approach 2 - 
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        for(int i=0;i<s.length();i++){
            if(m[s[i]]<m[s[i+1]]){
                ans-=m[s[i]];
            }
            else ans+=m[s[i]];
        }
        return ans;
    }
};
