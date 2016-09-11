#include<iostream>
using namespace std;
class student
{
    friend class exam;
    long roll;
    public:
    void get();
};
class exam
{
    public:
    void disp(class student);
};
void student::get()
{
    cout<<"Enter the Roll:";
    cin>>roll;
}
inline void exam :: disp(class student s)
{
    cout<<"Roll is: "<<s.roll<<endl;
}
main()
{
    student a;
    exam b;
    a.get();
    b.disp(a);
}
