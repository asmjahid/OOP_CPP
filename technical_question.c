#include<stdio.h>
#define FALSE -1
#define TRUE 1
#define NULL 0
main()
{
if(NULL)
puts("NULL");
else if(FALSE)
puts("TRUE");
else
puts("FALSE");
}
