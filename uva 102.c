#include<stdio.h>
int main()
{
    int a[100],i,min,b1,b2,b3,g1,g2,g3,c1,c2,c3;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
    {
        a[0]=g1+c1+b2+g2+b3+c3;
        a[1]=g1+c1+b2+c2+b3+g3;
        a[2]=g1+b1+c2+g2+b3+c3;
        a[3]=g1+b1+b2+c2+g3+c3;
        a[4]=b1+c1+c2+g2+b3+g3;
        a[5]=b1+c1+b2+g2+g3+c3;

        min=a[0];
        for(i=0;i<6;i++)
        {
            if(min>a[i])
            {
                min=a[i];
            }
        }

    for(i=0;i<6;i++)
        {
            if(a[i]==min)
            {
                if(i==0){
                    printf("BCG %d",min);
                         printf("\n");
                       break;
                }

                else if(i==1){
                    printf("BGC %d",min);
                         printf("\n");
                         break;
            }

                else if(i==2){
                    printf("CBG %d",min);
                         printf("\n");
                          break;
                }

                else if(i==3){
                    printf("CGB %d",min);
                         printf("\n");
                         break;
                }

                else if(i==4){
                    printf("GBC %d",min);
                         printf("\n");
                      break;
                }

                else{
                    printf("GCB %d",min);

                     printf("\n");
                       break;
            }
        }
     }
    }

    return 0;
}
