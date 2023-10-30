#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	for(int j=0;j<b.size();j++){
		for(int i=0;i<a.size();i++){
			if(a[i]>b[j]) swap(a[i],b[j]);
		}
	}
	sort(b.begin(),b.end());
	
}
