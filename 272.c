#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];

    int i,count=0,l;

    while(gets(s))
    {
        l=strlen(s);
            for(i=0;i<l;i++)
            {
                if(s[i]=='"')
                {
                    count++;
                   if(count%2!=0)
                    {
                        printf("``");
                    }

                    else
                    {
                        printf("''");
                    }
                 }

                else
                {
                    printf("%c",s[i]);
                }
            }
            printf("\n");
    }
    return 0;
}
