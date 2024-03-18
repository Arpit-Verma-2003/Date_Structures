int cost(vector<int> arr) {
    int a =0 ,b = 0,n=arr.size();
    for(int i =1;i<n;i++){
      // basically 2 choices har bar for max - ya toh arr[i] rakho ya 1 for max. so dono rakh kar
      // max dekha and assign krdi value. + prev value add krdi jo ayi thi a or b ki respectively 
      // agar prev element 1 hai toh b and arr[i-1] hai so a
        int new_a = max(abs(arr[i]-arr[i-1])+a,abs(arr[i]-1)+b);
        int new_b = max(abs(1-arr[i-1])+a,b);
        a = new_a;
        b = new_b;
    }
    return max(a,b);
}
