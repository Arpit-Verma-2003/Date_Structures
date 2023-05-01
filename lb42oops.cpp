#include<iostream>
using namespace std;
// class declaration-
// for empty class 1byte is allocated.
class Hero{
    private:
    int n;
    char ch;
    public:
    char name[10];
    // to access private properties we use getter and setter:
    int getnum(){
        return n;
    }
    void setnum(int n){
        this->n = n;
    }
};
int main(){
    //static allocation-
    Hero h1;
    cout<< sizeof(h1)<<endl;
    // to access particular property of a class -
    cout<< h1.getnum()<<endl;
    //for dynamic allocation-
    Hero *h2 = new Hero;
    cout<< (*h2).getnum()<<endl;
    return 0;
}
