class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        // logic - we are adding the smallest 2no.s everytime in order to get
        // the min cost , hence we use min heap , take the min 2 no.s and pop
        // and add the added value and loop until only single element left.
        
        // min_heap
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        // push values in min heap
        for(int i = 0 ; i < n ; i++){
            pq.push(arr[i]);
        }
        // ans variable
        long long ans = 0;
        // loop
        while(pq.size()>1){
            // 1st smallest element
            long long a = pq.top();
            pq.pop();
            // 2nd smallest element
            long long b = pq.top();
            pq.pop();
            // cost calculate
            long long cost = a+b;
            // push in the min heap for next iteration
            pq.push(cost);
            // add total in the ans value
            ans+=cost;
        }
        // return the ans
        return ans;
    }
};
