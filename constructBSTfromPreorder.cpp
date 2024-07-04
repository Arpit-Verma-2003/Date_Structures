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
    TreeNode* bst(vector<int>& pre,int& i,int n,int ub){
        // base condition
        if(i==n||pre[i]>ub) return NULL;
        TreeNode* root = new TreeNode(pre[i++]);
        root->left = bst(pre,i,n,root->val);
        root->right = bst(pre,i,n,ub);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        int n = preorder.size();
        TreeNode* root = bst(preorder,i,n,INT_MAX);
        return root;
    }
};
