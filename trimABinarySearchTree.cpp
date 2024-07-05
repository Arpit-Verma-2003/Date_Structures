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
    // logic - first go into subtrees , now check if data<lb
    // then return right child, or if data>ub return left child
    // or else simple return root if all well
public:
    TreeNode* solve(TreeNode* root,int lb , int ub){
        if(root==NULL) return NULL;
        if(root->val<lb){
            return solve(root->right,lb,ub);
        } 
        if(root->val>ub){
            return solve(root->left,lb,ub);
        }
        root->left = solve(root->left,lb,ub);
        root->right = solve(root->right,lb,ub);
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return solve(root,low,high);
    }
};
