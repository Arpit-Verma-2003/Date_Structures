class Solution {
public:
// except to look for larger elements each time than the ith 
// element, add all the elements into an unordered set and 
// then traverse through the set and for each element , check
// if smaller element than that exits , if yes then ofc series
// doesn't with the selected element. if smaller element doesn't
// exist , hence series start from here itself , check for +1 larger
// elements till available and update the longest, then return
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        // unordered set
        unordered_set<int> st;
        // inserting all values in it
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        // traversing through the set
        for(auto it:st){
            // if it is starting series no i.e no 
            // lesser (-1) then it , check for the series
            if(st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it;
                // check consecutive no.s
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x = x+1;
                    // update longest
                    longest = max(cnt,longest);
                }
            }
        }
        // return longest consecutive series
        return longest;
    }
};
