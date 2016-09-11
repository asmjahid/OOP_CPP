#include<iostream>
using namespace std;
class shape
{
   public:
        double x;
        double y;
        double area;
    public:
        void getdata(double a,double b)
        { x=a;y=b;}
        virtual void display(void)
        {

        }
};
class triangle:public shape
{
    public:
     void display()
    {
        area=.5*(x*y);
        cout<<"area of triangle  "<<area<<"\n";
    }
};
class rectangle:public shape
{
    public:
    void display()
    {
        area=x*y;
        cout<<"area of rectangle  "<<area<<"\n";
    }
};
class circle:public shape
{
    public:
    void display ()
    {
        area=3.1416*(x*x);
        cout<<"area of circle  "<<area<<"\n";
    }
};
int main ()
{
    shape *ptr;
    triangle T;
    rectangle R;
    circle C;
    ptr=&T;
    ptr->getdata(5,10);
    ptr->display();
    ptr=&R;
    ptr->getdata(5,10);
    ptr->display();
    ptr=&C;
    ptr->getdata(5,10);
    ptr->display();
    ptr->getdata(5,10);
    //ptr->display();
    return 0;
}
