class Solution {
public:
    void inOrder(TreeNode* root, int &count){
        if(root==NULL) return;
        count++;
        // if(root->left==NULL&&root->right==NULL) count++;
        if(root->left){
            inOrder(root->left, count);
        }
        if(root->right){
            inOrder(root->right, count);
        }
    }
    int countNodes(TreeNode* root) {
        int cnt = 0;
        inOrder(root,cnt);
        return cnt;
    }
};
