#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    cout<<vec.capacity()<<endl;
    vec.push_back(2);
    cout<<vec.capacity()<<endl;
    vec.push_back(45);
    cout<<vec.capacity()<<endl;
    vec.push_back(33);
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.at(1)<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    vec.pop_back();
    for(int i:vec){
        cout<<i<<" ";
    }
    vec.clear();
    cout<<vec.size()<<endl;
    vector<int> vec1(5,0);
    for(int i:vec1){
        cout<<i<<" ";
    }cout<<endl;
    // for copying--
    vector<int> copy(vec1);
    for(int i:copy){
        cout<<i<<" ";
    }
    return 0;
}
