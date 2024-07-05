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
    // logic = consider a BST , now current root value 
// would be addition of all right nodes&itself, so go to right
// when reach right null , return , then return to rightmost
// node , add root value into sum , update root value with sum
// now go left and do same.

public:
    void solve(TreeNode* root,int& count){
        if(root==NULL) return;
        solve(root->right,count);
        count+=root->val;
        root->val = count;
        solve(root->left,count);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int count = 0;
        solve(root,count);
        return root;

    }
};
