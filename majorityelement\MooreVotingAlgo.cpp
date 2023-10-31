int majorityElement(vector<int> v) {
	// Write your code here
	int count =0 ;
	int ele;
	for(int i=0;i<v.size();i++){
		if(count==0){
			ele = v[i];
			count++;
		}
		else if(v[i]==ele)	count++;
		else count--;
	}
	return ele;
}
