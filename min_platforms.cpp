int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i = 1 , j = 0;
    int res = 1 , p_need = 1;
    while(i<n&&j<n){
        if(at[i]<=dt[j]){
            p_need++;
            i++;
        }
        else if(at[i]>dt[j]){
            p_need--;
            j++;
        }
        res = max(res,p_need);
    }
    return res;
}
