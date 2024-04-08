// so basically for kth largest element use min heap , enter 
// elements till k in the heap and then check if the other each
// element is greater the top(basically usme sabse chota) if yes
// then pop and add , hence it will contain the k largest elements
// coz top par toh minimum tha har baar , so agar bada aa rha tha so in
// and hence opposite for the kth smallest element.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }    
        }
        return pq.top();
    }
};
