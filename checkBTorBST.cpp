class Solution {
public:
    bool validBst(TreeNode*root,long minVal,long maxVal){
        if(root==NULL) return true;
        if(root->val>=maxVal||root->val<=minVal) return false;
        return validBst(root->left, minVal, root->val)&&
        validBst(root->right, root->val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return validBst(root,LONG_MIN,LONG_MAX);
    }
};
