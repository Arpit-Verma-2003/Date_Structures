class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> todo;
        todo.push({root,{0,0}});
        while(!todo.empty()){
            auto p = todo.front();
            todo.pop();
            TreeNode* node = p.first;
            int vert = p.second.first;
            int lvl = p.second.second;
            nodes[vert][lvl].insert(node->val);
            if(node->left) todo.push({node->left,{vert-1,lvl+1}});
            if(node->right) todo.push({node->right,{vert+1,lvl+1}});
        }
        vector<vector<int>> ans;
        for(auto p:nodes){
            vector<int> col;
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);;
        }
        return ans;
    }
};
