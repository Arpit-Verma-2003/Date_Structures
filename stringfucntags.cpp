#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string s;
    s="hello world";
    char* s2;
    s2=strtok(s," ");
    cout<<s2;
    return 0;
}
