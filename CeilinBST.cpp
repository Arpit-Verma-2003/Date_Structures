int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    int maxi = INT_MAX;
    while(root!=NULL){
        if(x<=root->data){
            maxi = min(maxi,root->data);
            if(maxi==x) maxi = root->data;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    if(maxi==INT_MAX) return -1;
    return maxi;
}
