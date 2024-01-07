class Solution {
public:
        TreeNode * builtTree(vector<int>&preorder,int preStart, int  preEnd,
    vector<int>&inorder,int inStart,int inEnd,map<int,int>&inMap){
        
        if(preStart>preEnd||inStart>inEnd) return NULL;
        TreeNode * root = new TreeNode(preorder[preStart]);
        int rootinino = inMap[root->val];
        int numsonleft = rootinino-inStart;
        root->left = builtTree(preorder, preStart+1, preStart+numsonleft
        , inorder, inStart, rootinino-1, inMap);
        root->right = builtTree(preorder, preStart+numsonleft+1, preEnd
        , inorder, rootinino+1, inEnd, inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]] = i;
        }
        TreeNode* root = builtTree(preorder,0,preorder.size()-1,
        inorder,0,inorder.size()-1,inMap);
        return root;
    }
};
