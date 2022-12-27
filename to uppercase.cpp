#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char stringg[100];
    cout<< "enter a string="<<endl;
    cin>> stringg;
    for(int i=0;i<strlen(stringg);i++){
        stringg[i]= toupper(stringg[i]);
    }
    cout<<stringg;
    return 0;
}
