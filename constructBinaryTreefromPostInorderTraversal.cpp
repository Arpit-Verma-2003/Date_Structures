#include <map>
TreeNode<int> * builtTree(vector<int>&postorder,int postStart, int  postEnd,
    vector<int>&inorder,int inStart,int inEnd,map<int,int>&inMap){
        
        if(postStart>postEnd||inStart>inEnd) return NULL;
        TreeNode<int> * root = new TreeNode<int>(postorder[postEnd]);
        int rootinino = inMap[root->data];
        int numsonleft = rootinino-inStart;
        root->left = builtTree(postorder, postStart, postStart+numsonleft -1
        , inorder, inStart, rootinino-1, inMap);
        root->right = builtTree(postorder, postStart+numsonleft, postEnd -1
        , inorder, rootinino+1, inEnd, inMap);
        return root;
    }
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postorder, vector<int>& inorder){
	// Write your code here.
     map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]] = i;
        }
        return builtTree(postorder,0,postorder.size()-1,
        inorder,0,inorder.size()-1,inMap);
}
