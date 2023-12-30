#include <bits/stdc++.h> 
string countsort(string s){
    int n = s.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        int index = s[i]-'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--)
        s[j++] = i+'a';
    }
    return s;
}
string stringSort(string s){
    // Write your code here.
    string ss = countsort(s);
    return ss;
}
