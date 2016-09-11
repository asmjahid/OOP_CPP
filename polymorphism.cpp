#include<iostream>
using namespace std;
class student
{
  long roll;
  char name[20];
public:
void get();
void disp();
};
class result:public student
{
    float mark;
    public:
    void get();
    void disp();
    void msg()
    {
        cout<<"thank you..............................!!!!!!!!!!!!!!!!";
    }
};
void student ::get()
{
    cout<<"inside....."<<endl;
    cout<<"Roll:";
    cin>>roll;
    cout<<"Name:";
    cin>>name;
}
void student::disp()
{
    cout<<"inside ............"<<endl;
    cout<<"Roll is:"<<roll<<endl<<"Name is:"<<name;
}
void result::get()
{
    cout<<"enter the mark:"<<endl;
    cin>>mark;
}
void result::disp()
{
    cout<<"Mark is: "<<mark<<endl;
}
main()
{
    student s,*sptr;
    result r,*rptr;
    sptr=&s;//sptr points to base object
    cout<<"sptr points to base object";
    cout<<endl;
    sptr->get();//call student getdata
    cout<<endl;
    (*sptr).disp();//call student disp data
}
