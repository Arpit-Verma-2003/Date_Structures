#include<iostream>
using namespace std;
int main(){
    // dynamic memory used heap
    // static takes from stack
    // new keyword required for dynamic allocation
    int* i=new int;
    cout<<i<<endl;
    // for array
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    int* arr = new int[n];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
