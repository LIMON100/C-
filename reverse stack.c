#include<stdio.h>
#include<string.h>
#define max 100
int top,stack[100];

void push(char x[])
{
    if(top==max-1)
    {
        printf("Stack overflow.\n");
    }
    else
    {
        stack[++top]=x;
    }
}

void pop()
{
    printf("%c",stack[top--]);
}

int main()
{
    char str;
    printf("Enter a string: ");
    gets(str);

    int i,l=strlen(str);

    for(i=0;i<l;i++)
    {
        push(str[i]);
    }

    for(i=0;i<l;i++)
    {
        pop();
    }

    return 0;
}
