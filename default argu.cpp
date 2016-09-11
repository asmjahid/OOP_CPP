#include<iostream>
using namespace std;
int Volume(int length,int width=1,int height=1)
{
int volume;
volume=length*width*height;
return volume;
}
int main()
{
int a,b,c;
a=Volume(4,6,2);
b=Volume(4,6);
c=Volume(4);
cout<<a<<b<<c<<endl;
return 0;
}
