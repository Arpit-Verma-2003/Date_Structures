class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.length();
		    vector<string> ans;
		    for(int i=0;i<pow(2.0,n);i++){
		        string subString = "";
		        for(int j=0;j<n;j++){
		            if(i&(1<<j)) subString+=s[j];
		        }
		        ans.push_back(subString);
		    }
		    return ans;
		}
};
