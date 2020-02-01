#include<iostream>
using namespace std;

int main()
{
    int a[30],i,j,n=7,x;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }

    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}

