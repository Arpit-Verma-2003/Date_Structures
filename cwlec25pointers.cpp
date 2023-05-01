#include<iostream>
using namespace std;
int main(){
    /* types of pointers=
    1 wild pointer -
    int *ptr;
    (random garbage address)
    2 null pointer -
    int *ptr =NULL;
    3 dangling pointer -
    it is a type of pointer that points to a memory location that is not valid.
    ex-
    int *ptr = NULL;
    {
        int x=10;
        ptr = &x;
    }
    cout<<ptr;
    4 void pointer -
    these are special ptrs that can point to any pointer value
    float f= 12.43;
    void *ptr =&f;
    cant be dereferenced , typecasting is required.
    */
    return 0;
}
