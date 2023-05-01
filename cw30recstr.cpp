#include<iostream>
#include<string>
using namespace std;
string strocc(string &str,int n, int i){
    if(i==n){
        return "";
    }
    else{
        string temp="";
        temp+= str[i];
        return ((str[i]=='a')?"":temp)+strocc(str,n,i+1);
    }
}
int main(){
    string str;
    cout<<"enter the string: "<<endl;
    cin>>str;
    int n = str.length();
    cout<<strocc(str,n,0);
    return 0;
}
