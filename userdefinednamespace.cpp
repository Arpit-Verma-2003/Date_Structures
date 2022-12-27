#include<iostream>
using namespace std;
namespace foo{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}

namespace goo{
    int doSomething(int x, int y)
    {
        return x - y;
    }
}
int main()
{
    cout << foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace goo
    return 0;
}
