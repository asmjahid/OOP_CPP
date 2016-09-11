#include<iostream>
using namespace std;
inline float sum(float x,float y)
{
    return (x+y);
}
inline double sub(double p,double q)
{
    return (p-q);
}
main()
{
    float a,b;
    cout<<"Enter the a:"<<endl;
    cin>>a;
    cout<<"Enter the b:"<<endl;
    cin>>b;
    cout<<endl;
    cout<<sum(a,b)<<endl<<endl;
    cout<<sub(a,b)<<endl;
}
