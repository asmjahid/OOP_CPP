#include <iostream>
using namespace std;
void f(int a=0,int b=0)
{
  cout << "a:"<<a<<",b:"<<b;
  cout <<endl<<endl;
}
int main()
{
  f();
  f(10);
  f(10,99);
  return 0;
}
