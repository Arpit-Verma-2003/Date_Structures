#include <bitset>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        // so basically ham n me right shift krte rahenge har baar
        // so that ones place hat ti jaaye for next iteration
        // we use & to know the bit and do | with bit and result
        // to know result bit and result left shift aage badane ke liye
        for(int i=0;i<32;i++){
            ans = ans<<1;
            int bit = n&1;
            ans = ans|bit;
            n = n>>1;
        }
        return ans;
    }
};
