#include<iostream>
#define max 10
using namespace std;
class student
{
    private:
    char name[20];
    int roll;
    public:
    void get();
    void display();
};
class result:public student
{
    float marks;
    public:
    void get();
    void display();
};
void student :: get()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the Roll:";
    cin>>roll;
}
void student :: display()
{
    cout<<"Name is:"<<name<<endl;
    cout<<"Roll is:"<<roll<<endl;
}
void result :: get()
{
    student::get();
    cout<<"Enter the marks:";
    cin>>marks;
}
void result :: display()
{
    student::display();
    cout<<"Marks is:"<<marks<<endl;
}
main()
{
    result r[max];
    int i,n;
    cout<<"Enter how many student:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<endl;
        cout<<"Enter the record of student["<<i<<"]"<<endl;
        cout<<endl<<endl;
        r[i].get();
    }
    for(i=1;i<=n;i++)
    {
        cout<<endl<<endl;
        cout<<"Record of student "<<i<<endl;
        r[i].display();
    }
    return 0;
}
