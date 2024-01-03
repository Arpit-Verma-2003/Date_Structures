vector<int> prefix(string s){
	int n = s.length();
	vector<int> pre(n,0);
	for(int i=1;i<n;i++){
		int j = pre[i-1];
		while(j>0&&s[i]!=s[j]){
			j = pre[j-1];
		}
		if(s[i]==s[j]){
			j++;
		}
		pre[i]=j;
	}
	return pre;
}

vector<int> stringMatch(string t, string s) {
	// Write your code here.
	vector<int> pos;
	int i=0,j=0;
	vector<int> pre = prefix(s);
	while(i<t.length()){
		if(t[i]==s[j]){
			i++;
			j++;
		}
		else{
			if(i!=0) j = pre[j-1];
			else i++;
		}
		if(j==s.length()){
			pos.push_back(i-s.length());
			j=0;
		}
	}
	return pos;
}
