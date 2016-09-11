#include<iostream>
#include <conio.h>//provides non standard getch() function
using namespace std;
int main()
{
  cout << "Password: ";
  string pass;
  while(true)
  {
             char ch = getch();
             if(ch=='\r'){  //when a carriage return is found [enter] key
             cout << endl << "Your password is: " << pass <<endl;
             break;
             }
             pass+=ch;
             cout << "*";
             }
  getch();
  return 0;
}
