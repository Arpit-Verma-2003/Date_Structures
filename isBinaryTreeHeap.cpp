// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

int countNodes(struct Node* root){
    if(root==NULL) return 0;
    int ans = 1 + countNodes(root->left) + countNodes(root->right);
    return ans;
}

bool isCBT(struct Node* root,int ind,int cnt){
    // if root = null then it is cbt hence return true
    if(root==NULL) return true;
    // if ind > cnt - case of only right child then return false (coz ind*2+1,ind*2+2 returned)
    // but if left child doesn't exist , so size suppose = 6, right child called index = 7 so false;
    if(ind>=cnt) return false;
    else{
        // for both right and left child check if both childs available
        bool left = isCBT(root->left,ind*2+1,cnt);
        bool right = isCBT(root->right,ind*2+2,cnt);
        return left && right;
    }
}

bool haveMaxOrder(struct Node* root){
    // 3 conditions
    // condition 1 leaf node - return true;
    if(root->left == NULL && root->right == NULL) return true;
    // condition 2 - only left child, compare and return
    if(root->right == NULL) return (root->data>root->left->data);
    // condition 3 - both childs, recursion and compare.
    else{
        bool left = haveMaxOrder(root->left);
        bool right = haveMaxOrder(root->right);
        return ((left&&right)&&(root->left->data<root->data)&&(root->right->data<root->data));
    }
}

class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
        int totalNodes = countNodes(tree);
        // 2 conditons check - 1 complete binary tree 2 - max order follow
        if(isCBT(tree,0,totalNodes)&&haveMaxOrder(tree)){
            return true;
        }
        else return false;
    }
};
