class Solution {
public:
        void subset(int ind , vector<int> &arr, vector<int> &ds , vector<vector<int>> &ans,int n,int k){
        if(ind==n){
            if(k==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=k){
            ds.push_back(arr[ind]);
            subset(ind, arr, ds, ans, n, k-arr[ind]);
            ds.pop_back();
        }
        subset(ind+1, arr, ds, ans, n, k);
    }
    vector<vector<int>> combinationSum(vector<int>&arr, int k) {
        int n = arr.size();
        vector<vector<int>> ans;
        vector<int> ds;
        subset(0,arr,ds,ans,n,k);
        return ans;
    }
};
