vector<int> search(string text, string pattern) {
    // Write Your Code Here
    int txt_len = text.length();
    int pat_len = pattern.length();
    vector<int> ans;
    vector<int> z;
    string new_string = pattern + '#'+text;
    for(int i=0;i<new_string.length();i++){
        if(i<pat_len) z.push_back(0);
        else{
            int left = 0 ,right = 0;
            if(new_string[left]==new_string[i]){
                right = i;
                while((new_string[left]==new_string[right])&&right<new_string.length()){
                    left++;
                    right++;
                }
            }
            z.push_back(left);
        }
    }
    for(int i=0;i<new_string.length();i++){
        if(z[i]==pat_len){
            ans.push_back(i-pat_len);
        }
    }
    return ans;
}
