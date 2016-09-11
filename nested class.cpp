#include<iostream>
#include<iomanip>
#define MAX 10
using namespace std;
class result
{
    float r_marks;
public:
  void get_r();
  void dis_r();
  class exam
  {
    char e_name[50];
  public:
    void get_e();
    void dis_e();
    class student
    {
        char s_name[20];
        int s_roll;
        public:
        void get_s();
        void dis_s();
    };
  };
};

void result:: get_r()
{
  cout<<"Enter the student marks:"<<endl;
  cin>>r_marks;
}
void result :: dis_r()
{
  cout<<"Marks is:";
  cout<<r_marks<<endl;
}
void result :: exam ::get_e()
{
    cout<<"Enter the exam name:";
    cin>>e_name;
}
void result:: exam::dis_e()
{
    cout<<"Exam name is:"<<e_name<<endl;
}
void result::exam::student::get_s()
{
    cout<<"Enter the student name:";
    cin>>s_name;
     cout<<"Enter the roll:";
    cin>>s_roll;
}
void result::exam::student::dis_s()
{
    cout<<"Student name is:"<<s_name<<endl;
    cout<<"Roll is:"<<s_roll<<endl;
}
main()
{
  int n,i;
   R[MAX];
  result::exam E[MAX];
  result::exam::student S[MAX];
  cout<<"Enter the n:"<<endl;
  cin>>n;
  for(i=0; i<n; i++)
    {
        R[i].get_r();
        E[i].get_e();
        S[i].get_s();
    }
  cout<<endl;
  for(i=0; i<n; i++)
  {
      R[i].dis_r();
      E[i].dis_e();
      S[i].dis_s();
  }
  return 0;
}
