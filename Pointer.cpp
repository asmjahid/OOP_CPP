#include<iostream>
using namespace std;
main()
{
    int a=50;
    int *b;
    b=&a;
    *b=100;
    int **c;
    c=&b;
    **c=400;
    cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"*b="<<b<<endl;
}
