#include <map>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    // int ptr1 = book.begin();
    // int ptr2 = book.end();
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(book[i]+book[j]==target) return "YES";
    //     }
    // }
    // return "NO";  - 0(n^2)
    // approach 2 - using map
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     int a = book[i];
    //     int left = target - a;
    //     if(mpp.find(left)!=mpp.end()){
    //         return "YES";
    //     }
    //     mpp[a]= i;
    // }
    // return "NO"; // 0-(n),0(n)
    // approach 3 - using sorting and 2 ptrs(basically with which I approached the problem first with -noice)
    sort(book.begin(),book.end());
    int left = 0;
    int right = n-1;
    while(left<=right){
        if(book[left]+book[right]==target) return "YES";
        if(book[left]+book[right]>target){
            right--;
        }
        else{
            left++;
        }
    } 
    return "NO"; // 0(n),0(1)
}
