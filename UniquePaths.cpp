int upaths(int m,int n,int x,int y,vector<vector<int>>&v){
	if(x>=m||y>=n) return 0;
	if(x==m-1&&y==n-1) return 1;
	if(v[x][y]!=-1) return v[x][y];
	else{
		return v[x][y] = upaths(m,n,x+1,y,v) + upaths(m,n,x,y+1,v);
	}
}
