#include<iostream>
using namespace std;
long int factorial(int n);
main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<"!"<< " is " <<factorial(n)<<endl;
}
  long int factorial(int n)
{
     if(n<=1)
     {
        return(1);
     }
     else
    {
        n=n*factorial(n-1);
    }
}
