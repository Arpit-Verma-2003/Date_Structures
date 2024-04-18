class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        int prod = 1;
        // max products are becoming when taking factors/multiples of 3
        // in every number, hence first take all possible 3 factors
        // and at end multiply with the number left;
        while(n>4){
            n=n-3;
            prod=prod*3;
        }
        return prod*n;
    }
};
