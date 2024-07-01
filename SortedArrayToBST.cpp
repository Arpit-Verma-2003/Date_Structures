/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    // logic - mid wale element ko node bnate raho, now go to left , 
    // mid uthao from left array , make node and similarly from the right.
public:
    TreeNode* constructBst(vector<int>&nums,int start,int end){
        if(start>end) return NULL;
        int mid = (start+end)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = constructBst(nums,start,mid-1);
        node->right = constructBst(nums,mid+1,end);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBst(nums,0,nums.size()-1);
    }
};
