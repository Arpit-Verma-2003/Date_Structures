class Solution {
public:
    int getSum(int a, int b) {
        // convert it into binary , let say 2+3
        // 2 = 0010 and 3 = 0011 , do xor operator(^)
        // for xor only 11 , 00 = 0 else 1 (which we want)
        // but for 11 we also want a carry , so we calculate carry
        // by & operator (gives 1 in case of 11) and left shift
        // ex - 2&3 xor = 0001 , & = 0010 , <<& = 0100 and now xor same
        // until carry (b) = 0
        while(b!=0){ // till carry 0
            int temp = (a&b)<<1;
            a = a^b; // xor
            b = temp; // b updated to carry
        }
        return a;
    }
};
