class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // take sum of all no.s till n
        // take sum of all no.s in array
        // subtract n1-n2 = missing no.
        int n = nums.size();
        // sum of n natural numbers
        int sum = (n*(n+1))/2;
        int sum1 = 0;
        // loop to calculate sum of all array no.s
        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }
        // return ans = n1-n2;
        return sum-sum1;
    }
};
