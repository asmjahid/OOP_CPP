#include<iostream>
using namespace std;
class student
{
    long roll;
    char name[50];
    public:
    student();
    ~student();
};
student :: student ()
{
    cout<<endl<<"this is student";
}
student :: ~student()
{
    cout<<endl<<"this student finish";
}
main()
{
    student s[10];
}
