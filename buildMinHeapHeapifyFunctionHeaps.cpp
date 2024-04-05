#include <bits/stdc++.h> 

void heapify(vector<int>&arr,int n,int i){
    int smallest = i;
    int LC = i*2+1;
    int RC = i*2+2;
    if(LC<n&&arr[LC]<arr[smallest]){
        smallest = LC;
    }
    if(RC<n&&arr[RC]<arr[smallest]){
        smallest = RC;
    }
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    return arr;
}
