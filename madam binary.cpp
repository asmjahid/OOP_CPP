#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,s[100];
    const int n=10;
    cout<<"Element"<<setw(13)<<"value"<<endl;
    for(int i=1;i<n;i++)
    {
        s[i]=1+2*i;
    }
    for(int i=1;i<n;i++)
    {
        cout<<setw(3)<<i<<setw(15)<<s[i]<<endl;
    }
}
