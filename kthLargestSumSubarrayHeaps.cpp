#include <bits/stdc++.h>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	// use logic same as used in kth largest/smallest element in an array
	// min heap declare
	priority_queue<int,vector<int>,greater<int>> min_heap;
	// loop for finding the sum of the subarrays
	int n = arr.size();
	for(int i=0;i<n;i++){
		// resetting the sum of subarray from every element subarray
		int sum = 0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(min_heap.size()<k){
				// keep pushing in min heap until the size is k
				min_heap.push(sum);
			}
			else{
				// the min heap contains the sum , nd we need kth largest sum subarray , the top
				// will contain the kth largest element this way as k elements already hai
				if(sum>min_heap.top()){
					min_heap.pop();
					min_heap.push(sum);
				}
			}
		}
	}
	return min_heap.top();
}
