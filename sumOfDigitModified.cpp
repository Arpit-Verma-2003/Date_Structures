class Solution {
  public:
    int isMagic(int N) {
        // code here
        int n = N;
        while(n>9){
            int sum = 0;
            while(n>0){
                sum+= n%10;
                n = n/10;
            }
            if(sum==1) return 1;
            n=sum;
        }
        if(n==1) return 1;
        return 0;
    }
};
