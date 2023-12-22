class Solution {
public:
/* approach 1
bool isSafe(int row, int col, int n, vector<string>&board){
    int duprow = row,dupcol = col;
    // direction 1 
    while(duprow>=0&&dupcol>=0){
        if(board[duprow][dupcol]=='Q') return false;
        duprow--;
        dupcol--;
    }
    duprow = row;
    dupcol = col;
    // direction 2
    while(dupcol>=0){
        if(board[duprow][dupcol]=='Q') return false;
        dupcol--;
    }
    dupcol = col;
    // direction 3
    while(duprow<n&&dupcol>=0){
        if(board[duprow][dupcol]=='Q') return false;
        duprow++;
        dupcol--;
    }
    return true;
}
void solve(int col,vector<string>&board,int n,vector<vector<string>> &ans){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row = 0 ; row < n ; row++){
        if(isSafe(row,col,n,board)){
            board[row][col] = 'Q';
            solve(col+1,board,n,ans);
            board[row][col] = '.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        solve(0,board,n,ans);
        return ans;
    } */
    // approach 2
void solve(int col,vector<string>&board,int n,vector<vector<string>> &ans,vector<int> &leftrow,vector<int>&lowerdiagonal,vector<int>&upperdiagonal){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row = 0 ; row < n ; row++){
        if(leftrow[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1+col-row]==0 ){
            leftrow[row]=1;
            lowerdiagonal[row+col]=1;
            upperdiagonal[n-1+col-row]=1;
            board[row][col] = 'Q';
            solve(col+1,board,n,ans,leftrow,lowerdiagonal,upperdiagonal);
            board[row][col] = '.';
            leftrow[row]=0;
            lowerdiagonal[row+col]=0;
            upperdiagonal[n-1+col-row]=0;
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        vector<int> leftrow(n,0),lowerdiagonal(2*n-1,0),upperdiagonal(2*n-1,0);
        solve(0,board,n,ans,leftrow,lowerdiagonal,upperdiagonal);
        return ans;
    }

};
