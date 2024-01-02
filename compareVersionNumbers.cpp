class Solution {
public:
    int compareVersion(string a, string b) {
        int n1 = a.size();
        int n2 = b.size();
        int i = 0,j=0;
        while(i<n1||j<n2){
            long num1 = 0;
            long num2 = 0;
            while(i<n1&&a[i]!='.'){
                num1 = num1*10+(a[i]-'0');
                i++;
            }
            while(j<n2&&b[j]!='.'){
                num2 = num2*10+(b[j]-'0');
                j++;
            }
            if(num1>num2) return 1;
            if(num2>num1) return -1;
            i++;
            j++;
        }
        return 0;
    }
};
