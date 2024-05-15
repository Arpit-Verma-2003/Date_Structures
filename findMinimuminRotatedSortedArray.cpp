class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int mini = INT_MAX;
        while(left<=right){
            int mid = (left+right)/2;
            // agar poora sorted to direct min lo then exit
            if(nums[left]<=nums[right]){
                mini = min(mini,nums[left]);
                break;
            }
            // if left part sorted so min lo fir go to right part
            if(nums[left]<=nums[mid]){
                mini = min(mini,nums[left]);
                left = mid+1;
            }
            // if right part sorted to min lo usme se then go to left part
            else{
                mini = min(mini,nums[mid]);
                right = mid-1;
            }
        }
        return mini;
    }
};
