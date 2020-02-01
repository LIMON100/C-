#include<stdio.h>
int main()
{
    int a[50],i,j,k=3,n=6,count=0;

    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<1;i++)
    {
        for(i=k-1;i>=0;i--)
        {
            printf("%d ",a[i]);
            count++;
        }

        if(count!=n)
        {
            for(i=6-1;i>=count;i--)
            {
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}
