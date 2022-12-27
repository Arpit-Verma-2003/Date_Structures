#include<iostream>
using namespace std;
int xstrlen(char *p){
    int count = 0;
    while(*p!='\0'){
        p++;
        count++;
    }
    return count;
}
int main(){
    char name[10];
    int length;
    cout<<"enter string"<<endl;
    cin>> name;
    length = xstrlen(name);
    cout<< length;
    revstring(name,length);
    return 0;
}
