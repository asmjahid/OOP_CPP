#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
    int ID;
public:
    void getdata(void);
    void display(void);
};
class men
{
    char name[30];
    int age;
    int ID;
public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void)
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter the ID:";
    cin>>ID;
}
void person :: display(void)
{
    cout<<endl<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"ID:"<<ID<<endl;
}
void men :: getdata(void)
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter the ID:";
    cin>>ID;
}
void men :: display(void)
{
    cout<<endl<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"ID:"<<ID<<endl;
}
main()
{
    int n,i;
    person p[3];
    //men a,b;
    cout<<"enter the n:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
    p[i].getdata();
    }
    for(i=0;i<n;i++)
    {
    p[i].display();
    }
    //a.getdata();
    //a.display();
}
