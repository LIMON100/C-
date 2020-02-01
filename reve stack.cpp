#include<iostream>
#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;

void rev(char *str,int n)
{
    stack<char>s;
    for(int i=0;i<n;i++)
    {
        s.push(str[i]);
    }

    for(int i=0;i<n;i++)
    {
        str[i]=s.top();
        s.pop();

    }
}
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    gets(str);
    rev(str,strlen(str));
    cout<<"Reverse string is: "<<str;
    return 0;
}
