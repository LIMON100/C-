#include<stdio.h>
int main()
{
    long long int t,frm,a,j,i,multi,sum,e,f;

    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            sum=0;
            scanf("%lld",&f);
            for(j=1;j<=f;j++)
            {
               scanf("%lld%lld%lld",&frm,&a,&e);

               if(a==0)
               {
                   frm=a;
                   multi=(frm*e);
               }
               else
               {
                   multi=(frm*e);
               }
               sum=sum+multi;
            }

            printf("%lld\n",sum);
        }
    }

    return 0;
}
