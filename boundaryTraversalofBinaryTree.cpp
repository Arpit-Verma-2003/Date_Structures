bool isleaf(TreeNode<int>*root){
    if(root->left==NULL&&root->right==NULL) return true;
    else return false;
}

void leftBoundary(TreeNode<int> *root,vector<int>&res){
    TreeNode<int>* cur = root->left;
    while(cur){
        if(!isleaf(cur)) res.push_back(cur->data);
        if(cur->left) cur= cur->left;
        else cur=cur->right;      
    }
}

void rightBoundary(TreeNode<int> *root,vector<int>&res){
    TreeNode<int>* cur = root->right;
    vector<int>tmp;
    while(cur){
        if(!isleaf(cur)) tmp.push_back(cur->data);
        if(cur->right) cur= cur->right;
        else cur=cur->left;      
    }
    for(int i=tmp.size()-1;i>=0;i--){
        res.push_back(tmp[i]);
    }
}


void addleaf(TreeNode<int>*root,vector<int>&res){
    if(isleaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addleaf(root->left, res);
    if(root->right) addleaf(root->right, res);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> res;
    if(root==NULL) return res;
    if(!isleaf(root)) res.push_back(root->data);
    leftBoundary(root,res);
    addleaf(root,res);
    rightBoundary(root,res);
    return res;
}
