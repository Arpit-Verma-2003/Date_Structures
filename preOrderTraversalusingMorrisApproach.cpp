vector<int> getPreOrderTraversal(TreeNode *root)
{
    // morris approach - 
    vector<int> preorder;
        TreeNode* cur = root;
        while(cur!=NULL){
            if(cur->left==NULL){
                preorder.push_back(cur->data);
                cur=cur->right;
            }
            else{
                TreeNode* prev = cur->left;
                while(prev->right&&prev->right!=cur) prev= prev->right;
                if(prev->right==NULL){
                    prev->right=cur;
                    preorder.push_back(cur->data);
                    cur=cur->left;
                }
                else{
                    prev->right=NULL;
                    cur=cur->right;
                }
            }
        }
        return preorder;
}
