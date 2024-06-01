class Solution {
public:
    bool canJump(vector<int>& nums) {
        // logic , looping from last index(final goal)
        // check at each index if addition of nums[index]+index
        // >= goal i.e whether it can reach to goal or not , if yes
        // then set the new goal to i since waha se toh hum ultimately
        // pahoch hi sakte hai .
        // in end it goal ==0 , hence 0 se pahoch sakte hai return true
        // or else return false

      // can be done by dp but TLE
        int newGoal = nums.size()-1;
        for(int i= newGoal;i>=0;i--){
            if(i+nums[i]>=newGoal) newGoal = i;
        }
        if(newGoal==0) return true;
        return false;
    }
};
