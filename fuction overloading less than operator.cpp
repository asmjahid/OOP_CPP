#include<iostream>
#include<windows.h>
#include<iomanip>
#include<cstring>
#include<stdio.h>
using namespace std;
class age
{
    int year;
    int month;
    int day;
    public:
void getage();
int operator<(age);
};
void age::getage()
{
    system("color A1");
    cout<<"year:";
    cin>>year;
    cout<<"month:";
    cin>>month;
    cout<<"day:";
    cin>>day;
}
int age::operator<(age a1)
{
    age a2;
    long a=365*year+30*month+day;
    long b=365*a1.year+30*a1.month+a1.day;
    if(a<b)
    return 1;
    else
    return 0;
}
main()
{
    age age1,age2;
    cout<<"Enter your birthday"<<endl;
    age1.getage();
    cout<<"Enter your friend birhtday"<<endl;
    age2.getage();
    cout<<setw(20)<<endl;
    if(age1<age2)
    cout<<"your friend younger than you"<<endl;
    else
    cout<<"you are younger than your friend"<<endl;
}
