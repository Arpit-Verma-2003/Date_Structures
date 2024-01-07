bool symmetricMirror(TreeNode<int> *leftroot,TreeNode<int>*rightroot){
    if(leftroot==NULL||rightroot==NULL) return leftroot==rightroot;
    if(leftroot->data!=rightroot->data) return false;
    return symmetricMirror(leftroot->left, rightroot->right)&&
    symmetricMirror(leftroot->right, rightroot->left);
}
bool isSymmetric(TreeNode<int> *root)
{
    return root==NULL||symmetricMirror(root->left,root->right);
}
