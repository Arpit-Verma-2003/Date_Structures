vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int count1 =0 ;
	int ele1;
	int count2 =0 ;
	int ele2;
	for(int i=0;i<v.size();i++){
		if(count1==0&&v[i]!=ele2){
			ele1 = v[i];
			count1++;
		}
		else if(count2==0&&v[i]!=ele1){
			ele2 = v[i];
			count2++;
		}
		else if(v[i]==ele1)	count1++;
		else if(v[i]==ele2)	count2++;
		else{
			count1--;
			count2--;
		} 
	}
	int c1=0,c2=0;
	vector<int> ans;
	for(int i=0;i<v.size();i++){
		if(ele1==v[i]) c1++;
		if(ele2==v[i]) c2++;
	}
	if((c1>(v.size()/3))&&(c2>(v.size()/3))){
		ans.push_back(ele1);
		ans.push_back(ele2);
	}
	else if(c1>(v.size()/3)){
		ans.push_back(ele1);
	}
	else{
		ans.push_back(ele2);
	}
	return ans;
}
