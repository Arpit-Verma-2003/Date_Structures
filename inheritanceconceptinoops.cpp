#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    string name;
    int weight;
};
 // male class inherited human class.
 // single inheritance
 class Male: public Human{
    public:
    string color;
    void m(){
        cout<<"male class is running"<<endl;
    }

 };
//multiple inheritance
class Female: public Human, public Male{

};
int main(){
    Male m1;
    m1.height = 22;
    cout<< m1.height<<endl;
    return 0;
}
