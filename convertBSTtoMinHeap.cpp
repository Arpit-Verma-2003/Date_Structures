#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

	class BinaryTreeNode {
		
	public :
		int data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;

		BinaryTreeNode(int data) {
		this -> left = NULL;
		this -> right = NULL;
		this -> data = data;
		}
	};

*************************************************************/

void inOrder(BinaryTreeNode* root,vector<int>&inorder){
        if(root==NULL) return ;
        inOrder(root->left,inorder);
        inorder.push_back(root->data);
        inOrder(root->right,inorder);
    }
    void preOrder(BinaryTreeNode*root,vector<int>&inorder,int& index){
        if(root==NULL) return;
        root->data = inorder[index++];
        preOrder(root->left,inorder,index);
        preOrder(root->right,inorder,index);
 }
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	// Write your code here.
	// 2 steps
        // 1st step - find the inorder to get the sorted array
        // 2nd step - fill the tree with sorted array in preorder traversal
        vector<int> inorder;
        inOrder(root,inorder);
		int index = 0;
        preOrder(root,inorder,index);
		return root;
}
