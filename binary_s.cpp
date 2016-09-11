#include<stdio.h>
void find(int a[100],int n,int search)
{
    int beg,end,mid;
    printf("Enter value to find\n");
    scanf("%d",&search);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(a[mid]<search)
        {
            beg=mid+1;
        }
        else if(a[mid]==search)
        {
            printf("%d found in the array at location %d \n",search,mid);
            break;
        }
        else
            end=mid-1;
            mid=(beg+end)/2;
    }
    if(beg>end)
    {
        printf("%d is not found in the array",search);
    }
}
void read(int n,int a[100])
{
    int i;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter %d integers \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
main()
{
    int a[100],n,search;
    read(n,a);
    find(a,n,search);
}
