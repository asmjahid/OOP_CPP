#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  const int n=10;
  int i;
  int s[n]={0,1,2,3,4,5,6,7,8,9};
  cout<<"  Element"<<setw(13)<<"value"<<setw(20)<<"Histogram"<<endl;
  for(int i=10;i>0;i--)
      {
          cout<<setw(5)<<i<<setw(15)<<s[i]<<setw(30)<<endl;
      for(int j=1;j<s[i];j++)
        {
    cout<<setw(38)<<"*"<<setw(15);//<<endl;
    cout<<endl;
        }
}
}
