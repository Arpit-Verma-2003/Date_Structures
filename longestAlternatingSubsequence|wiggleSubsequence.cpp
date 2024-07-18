class Solution {
  public:
    // logic - 
    // take 2 variables
    // increment & decrement , traverse through the array
    // if the next element increasing , hence increase in length
    // when previous element was decreasing , so inc = dec+1;
    // similarly , if next element is decreasing, then increase in
    // length of subsequence where prev was increasing , hence
    // dec = inc+1. return the max of them
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        int inc = 1;
        int dec = 1;
        for(int i = 1;i<arr.size();i++){
            if(arr[i-1]<arr[i]) inc = dec+1;
            else if(arr[i-1]>arr[i]) dec = inc+1;
        }
        return max(inc,dec);
    }
};
