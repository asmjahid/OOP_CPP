#include<iostream>
#include<math.h>
using namespace std;
class polar
{
    double x,y,p,q;
    public:
    polar()
    {

    }
    polar(float a,float b)
    {
        x=a;
        y=b;
    }
    polar operator+(polar);
    void display(void);

};


polar polar::operator+(polar c)
{
polar temp;
temp.p=x*cos(y)+c.x*cos(c.y);
temp.q=x*sin(y)+c.x*sin(c.y);
temp.x=sqrt((temp.p*temp.p)+(temp.q*temp.q));
temp.y=1/(tan(temp.q/temp.p));
return (temp);


}

void polar::display(void)
{
    cout<<"The result of x is:" <<x<<"\n";
    cout<<"The result of y is:"<<y<<endl;
    cout<<"P"<<p<<endl;
    cout<<"q"<<q<<endl;
}

int main()
{

    polar c1,c2,c3;
    c1=polar(2,3);
    c2=polar(4,5);
    c3=c1+c2;
    c3.display();
    return 0;
}
