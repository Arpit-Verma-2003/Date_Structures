class Solution {
public:
// logic - same logic applied , as in merge intervals, where we put intervals
// in ans array directly if not overlapping , if overlapping then check the last
// ans element[][1] element & intervals[i][1] nd take max of it and update to
//  ele[][1]. New thing is newInterval , so each time check if overlapping this
// too and add samely , if not inserted till now(known through flag) insert at end
// then sort and return  
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        // flag to as to use newInternal only once to insert
        int fl = 0;
        for(int i=0;i<intervals.size();i++){
            if(ans.empty()||ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
            if(ans.back()[1]>=newInterval[0]&&fl==0){
                if(newInterval[1]<ans.back()[0]) continue;
                if(ans.back()[0]>newInterval[0]) ans.back()[0] = newInterval[0];
                ans.back()[1] = max(ans.back()[1],newInterval[1]);
                fl = 1;
            }
        }
        if(fl==0){
            ans.push_back({newInterval[0],newInterval[1]});
        } 
        sort(ans.begin(),ans.end());
        return ans;
    }
};
