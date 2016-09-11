#include<iostream>
#define pi 3.1416
using namespace std;
enum shape
{
    circle,
    rectangle,
    triangle
};
main()
{
    cout<<"enter the shape code:"<<endl;
    int code;
    cin>>code;
    while(code>=circle && code <= triangle)
    {
        switch(code)
        {
        case circle:
            int r,circle;
            cout<<"enter the radious:"<<endl;
            cin>>r;
            circle=2*pi*r;
            cout<<"circle is:"<<endl;
            cout<<circle<<endl;
            break;
        case rectangle:
            int h,w,rectangle;
            cout<<"enter the height & weight:"<<endl;
            cin>>h>>w;
            rectangle=(h*w);
            cout<<"the recangle is:"<<endl;
            cout<<rectangle<<endl;
            break;
        case triangle:
            int base,height,triangle;
            cout<<"enter the base & height"<<endl;
            cin>>base>>height;
            triangle=(.5*base*height);
            cout<<"triangle is:"<<endl;
            cout<<triangle<<endl;
            break;
        }
        cout<<"enter the shape code:";
        cin>>code;
    }
    cout<<"finish";
}
