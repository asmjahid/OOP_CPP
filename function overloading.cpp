#include <iostream>
using namespace std;
int add(int x,int y,int z)
{
  int a, b, c;
  cout<<"Enter 3 integers:";
  cin>>a>>b>>c;
  return (a+b+c);
}
float add(float p,float q,float r)
{
  float d,e,f;
  cout<<endl;
  cout<<"Enter two floating point numbers:";
  cin>>d>>e>>f;
  return (d+e+f);
}
int main()
{
  int x,a,b,c;
  float  y,d,e,f;
  x=add(a,b,c);
  cout<<"Sum of integers:"<<x<<endl;
  y=add(d,e,f);
  cout<<"Sum of floats:"<<y<<endl;
  return 0;
}
