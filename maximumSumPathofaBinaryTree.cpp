class Solution {
public:
    int maxiPath(TreeNode* root,int& maxi){
        if(root==NULL) return 0;
        int leftm = max(0,maxiPath(root->left,maxi));
        int rightm = max(0,maxiPath(root->right,maxi));
        maxi = max(maxi,leftm+rightm+root->val);
        return max(leftm,rightm)+root->val;
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxiPath(root,maxi);
        return maxi;
    }
};
