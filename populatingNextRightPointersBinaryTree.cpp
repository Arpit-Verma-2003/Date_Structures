/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
 // logic = 
    // do the level order traversal to get the right nodes
//  in the queue , then keep connecting the right nodes
// with q.front until next level. to check next level
// maintain n & qsize. keep decrementing n until 0 then
// next level. if n==0 , means at this lvel last element hence
// make null the nextRight element
class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
                int qSize = q.size();
                int n = qSize;
                while(n--){
                    // enqueue all child elements and dequeue current elements
                    Node* curr = q.front();
                    q.pop();
                    // connect next node with next stack element
                    // if level ends (n==0) connect with null
                    if(n==0) curr->next = NULL;
                    else curr->next = q.front();
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
            }
        }
        return root;
    }
};
