
int minCharsforPalindrome(string str) {
	// Write your code here.
	int i = 0;
    int j = str.length()-1;
    int k = j;
    int ans=0;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            ans++;
            i=0;
            j=--k;
        }
    }
    return ans;
}
