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
    string str1;
    cout<<"enter a string-"<<endl;
    getline(cin,str);
    str1= str;
    revstring(str);
    if(str==str1){
        cout<<"entered string is palindrome";
    }
    else{
        cout<<"string isn't palindrome";
    }
    return 0;
}
