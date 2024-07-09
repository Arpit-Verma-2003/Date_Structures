/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
class Solution {
    // logic - keep taking the middle element as root , left child
    // = left sublist , and right child = right sublist.
public:
    TreeNode* sortedListToBST(ListNode* head) {
        // base conditions
        if(!head) return NULL;
        if(!head->next) return new TreeNode(head->val);
        // slow and fast pointer for getting middle element
        ListNode* slow = head;
        ListNode* fast = head;
        // slowprev pointer to break the list by setting slowPrev->next = NULL;
        ListNode* slowPrev = NULL;
        while(fast!=NULL&&fast->next!=NULL){
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow would be at mid;
        TreeNode* root = new TreeNode(slow->val);
        slowPrev->next = NULL;
        // left & right sublist call
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        // return the root
        return root;
    }
};
