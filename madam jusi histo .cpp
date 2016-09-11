#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int i,j;
    cout<<"  Element"<<setw(13)<<setw(30)<<"Histogram"<<endl;
  for(int i=10;i>0;i--)
      {
        cout<<setw(5)<<i<<setw(15)<<setw(30)<<endl;
      for(int j=0;j<i;j++)
        {
    cout<<"*";
        }
        cout<<endl;
}
}
