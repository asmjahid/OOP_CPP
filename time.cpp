#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main()
{
    struct tm *ptr;
    system("color 1a");
    time_t lt;
    lt=time(NULL);
    ptr=localtime(&lt);
    cout<<(asctime(ptr));
    return 0;
}
