bool isParentSum(Node *root){
    // Write your code here.
    if(root==NULL) return true;
    int child = 0;
    if(root->left) child+= root->left->data;
    if(root->right) child+= root->right->data;
    if(child!=root->data&&child!=0) return false;
    return isParentSum(root->left)&&isParentSum(root->right);
}
