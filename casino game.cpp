#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<stdio.h>
#include<ctime>
using namespace std;
void draw_line(int n,char ch);
void rules();
main()
{
    system("color 3a");
  unsigned seed=time(NULL);
  cout<<"seed="<<seed<<endl;
  srand(seed);
  long long balanceamt,amt,no,dice;
  char playername[80],ch;
  draw_line(60,'=');
  cout<<"\n\n\n\n\t\tCASINO GAME\n\n\n\n";
  draw_line(60,'=');
  system("color a9");
  cout<<"\n\n\nEnter Your Name  :";
  gets(playername);
  cout<<"\n\n\Enter Deposit amount to play game :";
  cin>>balanceamt;
  do
    {
      rules();
      cout<<"\n\nYour current balance is Rs."<<balanceamt;
      do
        {
          cout<<"\n\n"<<playername<<"'enter money to bet:";
          cin>>amt;
          if(amt>balanceamt)
            cout<<"Your betting amount is more than your current balance\n\nRe-enter data\n ";
          else
            break;
        }
      while(1);
      do
        {
          cout<<"Enter your lucky number to bet between 1 to 12 :";
          cin>>no;
          if(no<=0||no>12)
            cout<<"Please check the number!! should be between 1 to 12\n\nRe-enter data\n ";
          else
            break;
        }
      while(1);
      rand();
      dice=rand()+1;
      if(dice==no)
        {
          cout<<"\n\nGood Luck!! You won Rs."<<amt*10;
          balanceamt=balanceamt+amt*10;
        }
      else
        {
          cout<<"Bad Luck this time !! You lose Rs."<<amt;
          balanceamt=balanceamt-amt;
        }
      cout<<"\n\nThe winning number was : "<<dice;

      cout<<"\n\n\t"<<playername<<" You have Rs. "<<balanceamt<<endl;
      cout<<"\n\n-->Do you want to play (y/n)? ";
      cin>>ch;
    }
  while(ch=='Y'|| ch=='y');
  \
  cout<<"\n\n\n";
  draw_line(70,'+');
  cout<<"\n\n\tTHANKS FOR COME TO CASINO YOUR BALANCE AMOUNT IS RS."<<balanceamt<<"\n\n";
  draw_line(70,'+');
  cout<<"\n\nGame developed by PROGRAMMER_JAHID\n";
  draw_line(70,'+');
}
void draw_line(int n,char ch)
{
  for(int i=0; i<n; i++)
    cout<<ch;
}
void rules()
{
  cout<<"\n\n";
  draw_line(60,'-');
  cout<<"\n\t\tRULES OF THE GAME\n";
  draw_line(60,'-');
  cout<<"\n\t1. Choose any number between 1 to 12\n\t2. If you win you will get 10 times of money you bet\n\t3. If you bet on wrong number you will lose your betting amount\n\n";
  draw_line(60,'-');
  cout<<endl;
}
