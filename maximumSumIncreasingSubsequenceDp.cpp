class Solution{
		

	public:
	
	int func(int ind ,int arr[],int n,int prev,vector<vector<int>>&dp){
	   // base case 
	   if(ind==n-1){
	       if(arr[ind]>arr[prev]) return arr[ind];
	       else return 0;
	   }
	   //dp
	   if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
	   // 2 cases
	   //1st not take
	   int notTake = func(ind+1,arr,n,prev,dp);
	   //2nd take
	   int take = INT_MIN;
	   if(arr[ind]>arr[prev]){
	       take = arr[ind] + func(ind+1,arr,n,ind,dp);
	   }
	   return dp[ind][prev+1] = max(take,notTake);
	}
	
	
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<vector<int>>dp(n,vector<int>(n+1,-1));
	    return func(0,arr,n,-1,dp);
	    
	}  
