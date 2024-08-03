class Solution {
public:
    void nextPermutation(vector<int>& str) {
        int n = str.size();
        int ind = -1;
        for(int i = n-2;i>=0;i--){
            if(str[i]<str[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1) {
            reverse(str.begin(),str.end());
            return;
        };
        for(int i = n-1;i>ind;i--){
            if(str[i]>str[ind]){
                swap(str[i],str[ind]);
                break;
            }
        }
        reverse(str.begin()+ind+1,str.end());
    }
};
