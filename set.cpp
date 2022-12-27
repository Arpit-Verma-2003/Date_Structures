// unique elements stored in a set no repititions
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(0);
    s.insert(5);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<s.count(5)<<endl;
    cout<<s.count(4)<<endl;
    return 0;
}
