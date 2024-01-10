class NodeValue{
    public:
    int maxNode,minNode,maxSize;
    NodeValue(int maxNode,int minNode, int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};
class Solution {
private:
NodeValue maxSumBSTHelper(TreeNode* root){
    if(!root) return NodeValue(INT_MIN,INT_MAX,0);
    auto left = maxSumBSTHelper(root->left);
    auto right = maxSumBSTHelper(root->right);
    // if bst
    if(left.maxNode<root->val&&right.minNode>root->val){
        return NodeValue(max(root->val,right.maxNode),min(root->val,left.minNode),left.maxSize+right.maxSize+1);
    }
    // otherwise return [-inf,inf] so parent doesn't become valid bst
    return NodeValue(INT_MAX,INT_MIN,max(left.maxSize,right.maxSize));
}
public:
    int maxSumBST(TreeNode* root) {
        return maxSumBSTHelper(root).maxSize;
    }
};
