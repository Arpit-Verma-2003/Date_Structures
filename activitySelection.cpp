#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> p;
    for(int i=0;i<start.size();i++){
        p.push_back({finish[i],start[i]});
    }
    sort(p.begin(),p.end());
    int count=1,i=1;
    int endtime = p[0].first;
    while(i<p.size()){
        if(endtime<=p[i].second){
            count++;
            endtime = p[i].first;
        }
        i++;
    }
    return count;
}
