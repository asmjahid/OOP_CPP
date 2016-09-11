#include<iostream>
using namespace std;
int main()
{
double i,j,sum=0;
float avg;
cout <<"enter the no:";
for(i=0;i<5;i++)
{
  cin>>j;
  sum=sum+j;
}
avg=sum/5;
cout << "avg is :" <<avg;
return 0;
}
