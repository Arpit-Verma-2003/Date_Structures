class Solution{
    public:
    long long findMinDiff(vector<long long> choco, long long n, long long m){
    //code
        sort(choco.begin(),choco.end());
        long long mini = INT_MAX;
        for(int i=m-1;i<n;i++){
            mini = min(choco[i]-choco[i-m+1],mini);
        }
        return mini;
    }   
};
