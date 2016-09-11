#include<iostream>
#include<cstring>
using namespace std;
class person
{
private:
    int i;
    char name[30];
    int ID;
public:
    void getdata();
    void display();
protected:
    char gender[10];
    int age;
    int password;
};
void person :: getdata()
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"enter the ID:";
    cin>>ID;
    cout<<"enter the age:";
    cin>>age;
    cout<<"enter the gender:";
    cin>>gender;
}
void person :: display()
{
    getdata();
    cout<<endl<<"NAME:"<<name<<endl;
    cout<<"ID:"<<ID<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"GENDER:"<<gender<<endl;

}
main()
{
    //person p;
    person p[100];
    int n;
    cout<<"how many man:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        p[i].getdata();
    }
    for(int i=0; i<n; i++)
    {
        p[i].display();
   }

  // p.getdata();
  // p.display();
}
