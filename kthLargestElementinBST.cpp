class Solution
{
    public:
    Node* fucn(Node*root,int &k){
        if(root==NULL) return NULL;
        Node* right = fucn(root->right, k);
        if(right!=NULL) return right;
        k--;
        if(k==0) return root;
        return fucn(root->left, k);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        Node* ansnode = fucn(root, k);
        return ansnode->data;
    }
};
