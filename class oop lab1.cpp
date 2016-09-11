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
    cout<<endl<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}
main()
{
    person p,q;
    p.getdata();
    p.display();
}
