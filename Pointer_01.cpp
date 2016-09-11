#include<iostream>
using namespace std;
main()
{
    int a=50;
    cout<<"value of a="<<a<<endl;
    cout<<"Memory address(&a) of a="<<&a<<endl;

    int *b;
    b=&a;
    cout<<"Value of pointer *b="<<*b<<endl;
    cout<<"Memory addrss(&b) of b="<<&b<<endl;
    cout<<endl;

    int **c;
    c=&b;
    cout<<"Value of Pointer **C="<<**c<<endl;
    cout<<"COntent of c="<<c<<endl;
    cout<<"Memory address(&c) of C="<<&c<<endl;
    cout<<endl;
    return 0;
}
