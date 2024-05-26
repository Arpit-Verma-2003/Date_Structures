class Solution {
public:
    int hammingWeight(int n) {
        int sum =0 ; // ans sum variable
        // loop till n is greater than 0
        while(n){
            // and with 1 everytime to check if its 1 , if yes then add 1 or else add 0 to ans
            sum += n&1;
            // right shift one to check next bit now
            n = n>>1;
        }
        return sum;
    }
};
