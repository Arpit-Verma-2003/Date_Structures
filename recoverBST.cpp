/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 // logic - 
// 2 methods - 
// 1 -
// either find inorder (ascending order) , nd then traverse inorder
// swap elements which aren't following the order
// 2 - (better space complexity as we don't store inorder)
// maintain a prev_ptr , first_ptr(first violated element) , second_ptr(
// second violated element) , middle element(if second not found so agla hi)
// if at any time prev > curr , then store first/middle/second & at last swap
// middle used for case for ex - 1,5.8(first),7(middle),9,12,34.
class Solution {
private:
    // initialize pointers.
        TreeNode* first;
        TreeNode* middle;
        TreeNode* second;
        TreeNode* prev;
public:
    void inOrder(TreeNode* root){
        // base condition
        if(!root) return;
        // go left
        inOrder(root->left);
        // if curr<prev
        if(root->val<prev->val){
            // set first & middle if not set yet
            if(first==NULL){
                first = prev; 
                middle = root;
            } 
            // else set second
            else {
                second = root;
            }
        }
        // update previous
        prev = root;
        // go to right
        inOrder(root->right);
    }

    void recoverTree(TreeNode* root) {
        // set all ptrs to NULL initially
        first=middle=second=NULL;
        // intialize prev to min node
        prev = new TreeNode(INT_MIN);
        inOrder(root);
        // if first & second violate found 
        if(first&&second) swap(first->val,second->val);
        // if second not found than swap with middle 
        else swap(first->val,middle->val);
    }
};
