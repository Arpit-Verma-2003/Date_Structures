#include<iostream>
#include<string>
using namespace std;
void revstring(string& str){
    int n= str.length();
    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}
int main(){
    string str;
    cout<<"enter a string-"<<endl;
    getline(cin,str);
    revstring(str);
    cout<<endl<<"reversed string-"<<endl<<str;
    return 0;
}
