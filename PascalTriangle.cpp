
vector<int> row(int row){
    vector<int>ans;
    ans.push_back(1);
    long long t=1;
    for(int col=1;col<row;col++){
        t = t*(row-col);
        t = t/col;
        ans.push_back(t);
    }
    return ans;
}


vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++){
        ans.push_back(row(i));
    }
    return ans;
}
