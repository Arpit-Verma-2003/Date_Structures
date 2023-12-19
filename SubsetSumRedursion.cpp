class Solution
{
public:
    void func(int ind, int sum , vector<int>&arr,int n ,vector<int> &ans){
	// base condition
    	if(ind==n){
    		ans.push_back(sum);
    		return;
    	}
    	func(ind+1, sum+arr[ind], arr, n, ans);
    	func(ind+1, sum, arr, n, ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
    	func(0,0,arr,N,ans);
    	sort(ans.begin(),ans.end());
    	return ans;
    }
};
