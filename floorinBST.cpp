int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int mini = -1;
    while(root!=NULL){
        if(X>=root->val){
            mini = max(mini,root->val);
            if(mini==X) mini = root->val;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return mini;
}
