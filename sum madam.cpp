#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  const int n=10;
  int i;
  int s[n]={0,1,2,3,4};
  cout<<"Element"<<setw(13)<<"value"<<setw(20)<<"Histogram"<<endl;
  for(int i=0; i<10; i++)
    {
      cout<<setw(3)<<i<<setw(15)<<s[i]<<setw(30)<<endl;
      for(int j=10; j>s[i]; j--)
        {
              cout<<setw(35)<<"*";
          cout<<endl;
        }
    }
}
