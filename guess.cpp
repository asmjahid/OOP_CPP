#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int magic;
int guess;
magic = rand();
cin>>guess;
if (guess == magic)
{
    cout <<"You are Right";
}
else
cout << "sorry , you are wrong";
return 0;
}
