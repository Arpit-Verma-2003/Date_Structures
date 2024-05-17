class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxi = INT_MIN;
        while(left<right){
            int cur = (right-left)*min(height[left],height[right]);
            maxi = max(maxi,cur);
            if(height[left]>height[right]) right--;
            else left++;
        }
        return maxi;
    }
};
