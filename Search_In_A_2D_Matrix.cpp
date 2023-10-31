bool searchMatrix(vector<vector<int>>& mat, int target) {
    int temp=-1;
    int m = mat[0].size();
        for(int i=0;i<mat.size();i++){
            if(mat[i][0]>target){
                temp = i;
                break;
            }
        }
        if(temp==-1)    temp=mat.size();
        temp--;
        for(int j=0;j<m;j++){
            if(mat[temp][j]==target){
                return true;
            }
        }
        return false;
}
