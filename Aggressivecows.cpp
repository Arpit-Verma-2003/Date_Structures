
bool ifPossible(int dis,vector<int>&stalls,int cows){
    int countcow = 1,last = stalls[0];
    for(int i =0;i<stalls.size();i++){
        if(stalls[i]-last>=dis){
            countcow++;
            last = stalls[i];
        }
        if(countcow>=cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int high = stalls[n-1]-stalls[0];
    int low = 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(ifPossible(mid,stalls,k)){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}
