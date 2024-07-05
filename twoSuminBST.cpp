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
public:
// logic - find inorder (in sorted order)
    // we got sorted array , simple 2 sum problem
    // 2 pointer , add if found return true.
    void inOrder(TreeNode* root,vector<int>&inorder){
        if(root==NULL) return;
        inOrder(root->left,inorder);
        inorder.push_back(root->val);
        inOrder(root->right,inorder);
    }
    bool findTarget(TreeNode* root, int target) {
        vector<int> inorder;
        inOrder(root,inorder);
        int i = 0;
        int j = inorder.size()-1;
        while(i<j){
            if(inorder[i]+inorder[j]==target) return true;
            if(inorder[i]+inorder[j]>target) j--;
            else i++;
        }
        return false;
    }
};
