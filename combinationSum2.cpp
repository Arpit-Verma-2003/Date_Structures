#include <bits/stdc++.h>
void func(int ind , int k , vector<int>&arr, int n , vector<int>&ds , vector<vector<int>>&ans){
	if(k==0){
		ans.push_back(ds);
		return;
	}
	for(int i=ind;i<n;i++){
		if(arr[i]>k) break;
		if(i>ind&&arr[i]==arr[i-1]) continue;
		ds.push_back(arr[i]);
		func(i+1, k-arr[i], arr, n, ds, ans);
		ds.pop_back();
	}
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	vector<int> ds;
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	func(0,target , arr,n,ds,ans);
	return ans;
}
