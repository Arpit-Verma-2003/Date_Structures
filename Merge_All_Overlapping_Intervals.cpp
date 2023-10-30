class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        // use sort func if required
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            if(ans.empty() || ans.back()[1]< arr[i][0]){
                ans.push_back(arr[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
    }
};
