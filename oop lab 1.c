#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void)
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the age";
    cin>>age;
}
void person :: display(void)
{
    cout<<"enter the name:"<<name;
    cout<<"enter the age"<<age;
}
main()
{
    person p;
    p.getdata();
    p.display();
}
