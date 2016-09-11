#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//int rand(int);
main()
{
     unsigned seed=time(NULL);
     cout<<"seed="<<seed<<endl;
     srand(seed);
     int n, min=0,max, num, c,x,range;
     //cout<<"Enter the number of random numbers you want ";
     //cin>>n;
     cout<<"Enter the maximum value of random number ";
     cin>>max;
     cout<<"random numbers from 0 to"<<n<<"are :"<<max;
     range=max-min+1;
     rand();
     for (c=1;c<=20;c++)
{
       num = rand()/100%range+min;
       cout<<num;
}
     return 0;
}
