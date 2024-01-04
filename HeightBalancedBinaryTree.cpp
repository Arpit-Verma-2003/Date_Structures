class Solution {
public:
    int heightModified(TreeNode* root){
        if(root==NULL) return 0;
        int lh = heightModified(root->left);
        if(lh==-1) return -1;
        int rh = heightModified(root->right);
        if(rh == -1) return -1;
        if(abs(lh-rh)>1) return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        return heightModified(root)!=-1;
    }
};
