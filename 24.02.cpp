#include<iostream>
#include<iomanip>
using namespace std;
int sqr(int a)
{
    return a*a;
}
main()
{
    int a,i;
    //setw(10);
    for(i=1;i<=10;i++)
    {
    cout<<"The sqr value of "<<i<<" is :"<<setw(10)<<sqr(i)<<endl;
    }
    return 0;
}
