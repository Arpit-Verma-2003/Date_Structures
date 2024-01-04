// code studio - 
vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* temp = q.front();
        ans.push_back(temp->data);
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;
}
// leetcode - 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> tem;
            for(int i=0;i<s;i++){
                TreeNode* temp = q.front();
                tem.push_back(temp->val);
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(tem);
        }
        return ans;
    }
};
