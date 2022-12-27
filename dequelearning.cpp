#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deq;
    deq.push_back(1);
    deq.push_front(3);
    for(int i:deq){
        cout<<i<<" ";
    }cout<<endl;
    deq.pop_front();
    for(int i:deq){
        cout<<i<<" ";
    }
    // use erase to delete, empty to empty etc,begin to from first
    return 0;
}
