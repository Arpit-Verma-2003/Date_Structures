class Solution {
public:
    int myAtoi(string s) {
        long ans = 0;
        int sign = 1;
        int i = 0;
        int n = s.length();
        while(i<n&&s[i]==' ') i++;
        if(i<n&&(s[i]=='-'||s[i]=='+')){
            if(s[i]=='-') sign = -1;
            i++;
        }
        while(i<n&&s[i]<='9'&&s[i]>='0'){
            if (ans > (INT_MAX - (s[i]-'0')) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            ans = ans*10 + s[i]-'0';
            i++;
        }
        return ans*sign;
    }
};
