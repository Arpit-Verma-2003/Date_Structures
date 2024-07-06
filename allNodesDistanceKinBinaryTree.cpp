/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 // logic - 
// step 1 - mark parents of each node so as it traverse in all direction
// - use a map to store parents
// step 2 - find the target node
// step 3 - use queue, traverse in all 3 directions(parent, left & right) upto
// k distance. 
// - maintain a visited map as we don't want to traverse parent/already visited node
// step 4 - put queue values in an vector , sort and return.
class Solution {
public:
    void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
        if(root==NULL) return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                mp[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                mp[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return ;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        if(root==NULL) return ans;
        unordered_map<TreeNode*,TreeNode*> mp;
        markParents(root,mp);
        queue<TreeNode*>q;
        TreeNode* node = target;
        q.push(node);
        int dist = 0;
        unordered_map<TreeNode*,bool> visited;
        visited[node] = true;
        while(!q.empty()){
            if(dist++==k) break;
            int qsize = q.size();
            for(int i=0;i<qsize;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left&&!visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right&&!visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(mp[curr]&&!visited[mp[curr]]){
                    q.push(mp[curr]);
                    visited[mp[curr]] = true;
                }
            }
        }
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
