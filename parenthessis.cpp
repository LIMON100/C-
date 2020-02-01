#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char str[50];
    printf("Enter paranhesis: ");
    gets(str);
    stack<char>s;
    int l=strlen(str);

    for(int i=0;i<l;i++)
    {
        if(!s.empty() && s.top()=='(' && str[i]==')')
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }

    if(s.empty())
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Not balanced\n");
    }
    return 0;
}
