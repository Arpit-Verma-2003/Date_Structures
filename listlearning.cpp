// list, can't directly access any particular element
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(3);
    l.push_front(35);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
