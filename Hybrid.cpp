#include<iostream>
using namespace std;
class person
{
  public:
    char name[20];
    int code,cod;
    void get_name(void)
    {
     cin>>name;
    }
    void get_code(void)
    {
     cin>>code;
    }
    void get_cod(void)
    {
    cout<<"Enter code for Match";
     cin>>cod;
    }
    void putnamecode(void)
    {
    cout<<name<<"\n"<<code<<"\n";
    }
};


class account:virtual public person
{
protected:
    float pay;
public:
    void get_pay(void)
    {
        cin>>pay;
    }
    void putpay(void)
    {

        cout<<pay<<"\n";
    }

};


class admin:public virtual person
{
protected:
    int exp;
public:
    void get_exp(void)
    {
        cin>>exp;
    }
    void putexp(void)
    {
        cout<<exp<<"\n";
    }
};


class master:public account,public admin
{
public:
    void display(void)
        {
        putnamecode();
        putpay();
        putexp();
        }
};


    int main()
    {
        int n;

        master person_1;
        cout<<"Enter Name:"<<endl;
        person_1.get_name();
        cout<<"Enter Code:"<<endl;
        person_1.get_code();
        cout<<"Enter Salary:"<<endl;
        person_1.get_pay();
        cout<<"Enter Exp:"<<endl;
        person_1.get_exp();



        while(1)
        {
        person_1.get_cod();
        if(person_1.cod==person_1.code)
        {
        cout<<" Press 1 for Name \n Press 2 for salary\n press 3 for experience\n";
          cin>>n;



              switch(n)
              {
                  case 1:   person_1.get_name();
                            person_1.display();
                            break;

                  case 2:   person_1.get_pay();
                            person_1.display();
                             break;

                  case 3:   person_1.get_exp();
                            person_1.display();
                            break;


                   default:  cout<<"invalid\n";
                             break;
              }




        }
        else
            cout<<"wrong code\n";



        }
        return 0;
    }
