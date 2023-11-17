#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& arr, int k){
    // Write your code here
    map<long long,int> mpp;
    long long sum = 0;
    int n=arr.size();
    int mlen=0,len=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum == k) mlen = i+1;
        long long rem = sum-k;
        if(mpp.find(rem)!=mpp.end()) {
            len = i-mpp[rem];
            mlen = max(mlen,len);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum] = i;
        } 
    }
    return mlen;
}
