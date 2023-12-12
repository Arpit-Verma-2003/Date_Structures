long long getTrappedWater(long long* arr, int n) {
    // Write your code here.
    int left = 0;
    int right = n-1;
    int leftmax = 0,rightmax = 0;
    long long res = 0;
    while(left<right){
        if(arr[left]<=arr[right]){
            if(arr[left]>=leftmax) leftmax = arr[left];
            else{
                res+=leftmax-arr[left];
            }
            left++;
        }
        else{
            if(arr[right]>=rightmax) rightmax = arr[right];
            else{
                res+=rightmax-arr[right];
            }
            right--;
        }
    }
    return res;
}
