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
public:

    TreeNode* setParent(TreeNode* root,map<TreeNode*,TreeNode*>&mp,int target){
        // base case
        if(!root) return NULL;
        TreeNode* res = NULL;
        queue<TreeNode*> q;
        q.push(root);
        mp[root] = NULL;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->val==target) res = front;
            if(front->left){ 
                q.push(front->left);
                mp[front->left] = front;
            }
            if(front->right) {
                q.push(front->right);
                mp[front->right] = front;
            }
        }
        return res;
    }
    
    int countTime(TreeNode* root,map<TreeNode*,TreeNode*>&mp){
        map<TreeNode*,bool> vis;
        queue<TreeNode*>q;
        q.push(root);
        vis[root] = true;
        int ans = 0;
        while(!q.empty()){
            bool flag = 0;
            int qsize = q.size();
            for(int i=0;i<qsize;i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left&&!vis[front->left]){
                    flag = 1;
                    vis[front->left] = true;
                    q.push(front->left);
                }
                if(front->right&&!vis[front->right]){
                    flag = 1;
                    vis[front->right] = true;
                    q.push(front->right);
                }
                if(mp[front]&&!vis[mp[front]]){
                    flag = 1;
                    vis[mp[front]] = true;
                    q.push(mp[front]);
                }
            }
            if(flag == 1) ans++;
        }
        return ans;
    }

    int amountOfTime(TreeNode* root, int target) {
        map<TreeNode*,TreeNode*>mp;
        TreeNode* node = setParent(root,mp,target);
        return countTime(node,mp);
    }
};
