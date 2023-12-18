class Solution 
{
    public:
    static bool comparision(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparision);
        vector<int> ans;
        int maxi = arr[0].dead;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i].profit);
        }
        int slot[maxi+1];
        for(int i=0;i<maxi+1;i++){
            slot[i]=-1;
        }
        int countjobs=0,maxprofit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    countjobs++;
                    maxprofit+=arr[i].profit;
                    break;
                }
            }
        }
        ans.push_back(countjobs);
        ans.push_back(maxprofit);
        return ans;
    } 
};
