#include<iostream>
using namespace std;
class fib
{
    int fibo,f0,f1;
    public:
    fib()
    {
        f0=0;f1=1;fibo=f0+f1;
    }
    void inc();
    void dis();
};
void fib::inc()
{
    f0=f1;f1=fibo;
}
void fib::dis()
{
    cout<<fibo;
    fibo=f0+f1;
}
int main()
{
    fib a;
    int n;
    cout<<"how many:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a.dis();
        cout<<" ";
        a.inc();
    }
    return 0;
}
