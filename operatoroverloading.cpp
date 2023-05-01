//operator overloading
#include<iostream>
#include<vector>
using namespace std;
class Yoyo{
    public:
    int a;
    void operator - (Yoyo obj){
        cout<<"why you wanna minus man"<<endl;
    }
};
int main(){
    Yoyo y1,y2;
    y1-y2;
    return 0;
}
