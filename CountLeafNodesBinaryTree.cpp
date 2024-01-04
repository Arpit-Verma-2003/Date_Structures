void inOrder(BinaryTreeNode<int> *root, int &count){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL) count++;
    if(root->left){
        inOrder(root->left, count);
    }
    if(root->right){
        inOrder(root->right, count);
    }
}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int cnt = 0;
    inOrder(root,cnt);
    return cnt;
}
