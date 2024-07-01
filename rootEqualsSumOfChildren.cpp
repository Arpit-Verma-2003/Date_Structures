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
    bool check(TreeNode* root){
        if(root==NULL) return true;
        if(root->left==NULL&&root->right==NULL) return true;
        if(root->left==NULL){
            if(root->right->val!=root->val) return false;
            return check(root->right);
        } 
        if(root->right==NULL){
          if(root->left->val!=root->val) return false;
          return check(root->left);
        } 
        if(root->left->val+root->right->val != root->val) return false;
        bool a = check(root->left);
        bool b = check(root->right);
        return a&b;
    }
    bool checkTree(TreeNode* root) {
        return check(root);
    }
};
