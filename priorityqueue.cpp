// first element largest element
//max heap
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>pq;
    pq.push(2);
    //min heap
    priority_queue<int,vector<int>,greater<int> >mini;
    mini.push(6);
    mini.push(7);
    mini.push(8);
    int n=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;
}
