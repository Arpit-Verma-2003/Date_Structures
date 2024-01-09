class Solution {
public:
    TreeNode* fucn(TreeNode*root,int &k){
        if(root==NULL) return NULL;
        TreeNode* left = fucn(root->left, k);
        if(left!=NULL) return left;
        k--;
        if(k==0) return root;
        return fucn(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* ansnode = fucn(root, k);
        return ansnode->val;
    }
};
