int heightMax(TreeNode<int> *root,int &maxi){
    if(root==NULL) return 0;
    int lh = heightMax(root->left, maxi);
    int rh = heightMax(root->right, maxi);
    maxi = max(lh+rh,maxi);
    return max(lh,rh)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int maxi = 0;
    heightMax(root,maxi);
    return maxi;
}
