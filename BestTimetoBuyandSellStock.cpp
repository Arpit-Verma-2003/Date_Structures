int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int min = prices[0];
    int profit =0;
    int cost;
    for(int i=1;i<prices.size();i++){
        cost = prices[i]-min;
        if(cost>profit) profit =cost;
        if(prices[i]<min) min = prices[i];
    }
    return profit;
}
