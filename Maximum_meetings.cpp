struct meeting{
        int start;
        int end;
        int pos;
    };
bool comparator(struct meeting m1,meeting m2){
    if(m1.end<m2.end) return true;
    if(m1.end>m2.end) return false;
    else if(m1.pos<m2.pos) return true;
    return false;
}
int maximumMeetings(vector<int> &start, vector<int> &end)
{
    // Write your code here.
    int n = start.size();
    struct meeting meet[n];
    for(int i=0;i<n;i++){
        meet[i].start = start[i]
        ,meet[i].end = end[i],
        meet[i].pos = i; 
    }
    sort(meet,meet+n,comparator);
    vector<int>ans;
    int limit = meet[0].end;
    ans.push_back(meet[0].pos);
    for(int i=0;i<n;i++){
        if(meet[i].start>limit){
            ans.push_back(meet[i].pos);
            limit = meet[i].end;
        } 
    }
    return ans.size();
}
