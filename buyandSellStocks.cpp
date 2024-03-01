class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int prof =0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                prof += prices[i]-prices[i-1];
            }
        }
        return prof;
    }
};
