class Solution {
public:
    TreeNode* build(vector<int>&A,int &i , int bound){
        if(i==A.size()||A[i]>bound) return NULL;
        TreeNode* root = new TreeNode(A[i++]);
        root->left = build(A,i,root->val);
        root->right = build(A,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return build(preorder,index,INT_MAX);
    }
};
