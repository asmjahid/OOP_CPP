#include<iostream>
#include<cstring>
#include<windows.h>
#define MAX 100
using namespace std;
class friends
{
private:
  char birthdate[50];
public:
  char name[50];
  int phone;
  void getdata();
  void displaydata();
protected:
  char address[300];
};
void friends :: getdata()
{
  system("color 9A");
  cout<<"enter the name:"<<endl;
  cin>>name;
  cout<<"enter the birthday:"<<endl;
  cin>>birthdate;
  cout<<"enter the address:"<<endl;
  cin>>address;
  cout<<"enter the phone no:"<<endl;
  cin>>phone;
}
void friends :: displaydata()
{
  //getdata();
  cout<<endl;
  cout<<"The name:"<<name<<endl;
  cout<<"The birthday:"<<birthdate<<endl;
  cout<<"The address:"<<address<<endl;
  cout<<"The phone no:"<<phone<<endl;
}
main()
{
  friends p[MAX];
  int i,n;
  system("color EA");
  cout<<"Enter how many students:";
  cin>>n;
  for(i=0;i<n;i++)
    {
        cout<<i<<endl;
      p[i].getdata();
    }
  for(i=0;i<n;i++)
    {
      p[i].displaydata();
    }
  return 0;
}
