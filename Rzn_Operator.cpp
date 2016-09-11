#include<iostream>
using namespace std;
class space
{
    public:
        int x,y,z;
        void get_data(int a,int b);
        void show_output(void);
        void operator -();
        void operator +();
        void operator *();
        void operator /(float d);
};
void space :: get_data(int a,int b)
{
    x=a;
    y=b;
}
void space :: operator -()
{
  z=x-y ;
}
void space :: operator +()
{
  z=y+x;
}
void space :: operator *()
{
    z=y*x;
}
void space :: operator /(float d)
{
  z=y/x;
}
void space :: show_output(void)
{
    cout<<z<<endl;
}
main()
{
    space s;
    s.get_data(20,10);
    -s;
    s.show_output();
    +s;
    s.show_output();
    *s;
    s.show_output();
    float (d);
    s.show_output();
    return 0;
}

