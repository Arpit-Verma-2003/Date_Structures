class BSTIterator {
private:
stack<TreeNode*> myStack;
void pushAll(TreeNode* root){
    for(;root!=NULL;myStack.push(root),root=root->left);
}
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* ans = myStack.top();
        myStack.pop();
        pushAll(ans->right);
        return ans->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};
