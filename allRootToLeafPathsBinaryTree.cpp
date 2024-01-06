void getPath(BinaryTreeNode<int>* root,vector<string>& res,vector<int>&ans){
    if(root==NULL) return;
    ans.push_back(root->data);
    if(root->left) getPath(root->left, res, ans);
    if(root->right) getPath(root->right, res, ans);
    if(root->left==NULL&&root->right==NULL){
        string temp = "";
        for(auto it:ans){
            temp+=to_string(it);
            temp+=" ";
        }
        res.push_back(temp);
    }
    ans.pop_back();
}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector<string> res;
    vector<int> ans;
    if(root==NULL) return res;
    getPath(root,res,ans);
    return res;
}
