class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        if(n==1) return 10;
        int curr = 9;
        int ans = 10;
        for(int i=0;i<n-1;i++){
            curr = curr*(9-i);
            ans+=curr;
        }
        return ans;
    }
};
