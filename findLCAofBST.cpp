class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* P, TreeNode* Q) {
        if(root==NULL) return NULL;
        int cur = root->val;
        if(cur<P->val&&cur<Q->val) return lowestCommonAncestor(root->right, P, Q);
        if(cur>P->val&&cur>Q->val) return lowestCommonAncestor(root->left, P, Q);
        return root;
    }
};
