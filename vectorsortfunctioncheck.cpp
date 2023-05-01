#include<iostream>
#include<vector>2
using namespace std;
int main(){
    // sorting function in vector.
    vector<int> vec;
    for(int i=0;i<10;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<10;i++){
        cout<<vec[i];
    }
    return 0;
}
