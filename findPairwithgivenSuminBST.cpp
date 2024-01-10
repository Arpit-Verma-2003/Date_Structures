 class BSTIterator {
private:
stack<TreeNode*> myStack;
bool reverse = true;
void pushAll(TreeNode* root){
    for(;root!=NULL;){
        myStack.push(root);
        if(reverse==false) root=root->left;
        else root = root->right;
    }
}
public:
    BSTIterator(TreeNode* root,bool isreverse) {
        reverse = isreverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* ans = myStack.top();
        myStack.pop();
        if(reverse==false) pushAll(ans->right);
        else pushAll(ans->left);
        return ans->val;
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next();
        int j = r.next();
        while(i<j){
            if(i+j == k) return true;
            else if(i+j<k) i = l.next();
            else j = r.next();
        }
        return false;
    }
};
