string longestPalinSubstring(string str) {
    // Write your code here.
    string res = "";
        int max_length = 0;
        int res_l = 0;
        int res_r = 0;
        for(int i=0;i<str.length();i++){
            int l = i;
            int r =i; //odd cases
            while(l>=0&&r<str.length()&&str[l]==str[r]){
                int temp_length = r-l+1;
                if(temp_length>max_length){
                    max_length = temp_length;
                    res_l = l;
                    // res = str.substr(l,max_length);
                }
                l--;
                r++;
            }
            // even cases
            l = i;
            r = i+1;
            while(l>=0&&r<str.length()&&str[l]==str[r]){
                int temp_length = r-l+1;
                if(temp_length>max_length){
                    max_length = temp_length;
                    res_l = l;
                    // res = str.substr(l,max_length);
                }
                l--;
                r++;
            }
        }
        res = str.substr(res_l,max_length);
        return res;
}
