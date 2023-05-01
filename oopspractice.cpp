#include<iostream>
using namespace std;

class Hello{
    public:
    int n;
    string name;
    void how(){
        cout<< "hey "<<name<<" how are you doing?"<<endl;
    }
};
class Hi: public Hello{
    void hi(){
        cout<<"hi user "<<endl;
    }
};
int main(){
    Hello h1;
    h1.n = 5;
    h1.how();
    cout<< h1.n<<endl;
    Hi h2;
    cout<<h2.n<<endl;
    return 0;
}
