#include <bits/stdc++.h> 
bool alloPossible(int mid,int n,vector<int> time,int m){
	long long students = 1;
    long long pages = 0;
    for (int i = 0; i < n; ++i) {
        if (time[i] > mid) {
            return false;
        }
        if (pages + time[i] > mid) {
            pages = time[i];
            students++;

            if (students > m) {
                return false;
            }
        } else {
            pages += time[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long low = 1;
    long long high = accumulate(time.begin(), time.end(), 0);
	long long res = -1;
	while(low<=high){
		long long mid = (high+low)/2;
		if(alloPossible(mid,m,time,n)){
			high = mid-1;
			res = mid;
		}
		else low = mid+1;
	}
	return res;	
}
