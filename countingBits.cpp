class Solution {
public:
    vector<int> countBits(int n) {
        // there is a pattern for binary representation
        // after offset*2 == i , i.e at position 2,4,8,...
        // the major bit moves to a position left and rest is 
        // repeated , hence accessed as 1+ans[i-offset].
        int offset = 1;
        vector<int> ans(n+1,0);
        for(int i = 1;i<=n;i++){
            if(offset*2==i) offset = i;
            ans[i] = 1 + ans[i-offset];
        }
        return ans;
    }
};
