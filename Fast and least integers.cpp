// Fast and least integers
#include<iostream>
using namespace std;
int main(){
    // The fast types (std::int_fast#_
    // and std::uint_fast#_t) provide the fastest
    // signed/unsigned integer type with
    // a width of at least # bits
    int_fast16_t f{9};
    cout<<f<<endl<<sizeof(f)<<endl;
    int_fast32_t g{90};
    cout<<g<<endl<<sizeof(g)<<endl;
    int_fast64_t h{9};
    cout<<h<<endl<<sizeof(h)<<endl;
    // The least types (std::int_least#_t and std::uint_least#_t) provide the smallest signed/unsigned integer type with a width of at least # bits
    int_least16_t i{0};
    cout<<i<<endl<<sizeof(i)<<endl;
    return 0;
}
