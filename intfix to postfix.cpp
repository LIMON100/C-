#include<stdio.h>
#include<iostream>
#include<stack>
#include<string.h>
#include<math.h>
using namespace std;

string convertInfixToPostfix(string infix);
int operatorPrecedence(char ch);
int evaluatePostfixExpression(string postfix);
int calculate(int a, int b, char operatorSign);

int main()
{
    string infix, postfix;
    int result;

    infix = "(1+(2^3)*4)/3";

    postfix = convertInfixToPostfix(infix);

    cout<<"Infix Expression: "<<infix<<endl;
    cout<<"Postfix Expression: "<<postfix<<endl;

    result = evaluatePostfixExpression(postfix);

    cout<<"\nResult is: "<<result<<endl;

    return 0;
}

string convertInfixToPostfix(string infix)
{
    string postfix="";
    stack<char>s;

    char ch;

    for(int i=0; infix[i]; i++)
    {
        ch=infix[i];

        if(ch=='(')
        {
            s.push(ch);
        }

        else if(ch==')')
        {
            while(!s.empty() && s.top()!='(')
            {
                postfix+=s.top();
                s.pop();
            }

            if(!s.empty() && s.top()=='(')
               s.pop();
        }

        else
        {
            int priority = operatorPrecedence(ch);

            if(priority==0)
                postfix+=ch;

            else
            {
                if(s.empty())
                {
                    s.push(ch);
                }
                else
                {
                    while(!s.empty() && s.top()!='(' && priority<=operatorPrecedence(s.top()))
                    {
                         postfix = postfix + s.top();
                        s.pop();
                    }
                    s.push(ch);
                }
            }


        }

    }

    while(!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;

}

int evaluatePostfixExpression(string postfix)
{
    stack<int>s;
    char ch;

    for(int i=0; postfix[i]; i++)
    {
        ch=postfix[i];

        if(ch>='0' && ch<='9')
        {
            s.push(ch-'0');
        }

        else
        {
            int a,b;
            b=s.top();
            s.pop();

            a=s.top();
            s.pop();

            s.push(calculate(a,b,ch));
        }
    }

    return s.top();
}

int calculate(int a, int b, char operatorSign)
{
    if(operatorSign=='+')
        return a+b;
    else if(operatorSign=='-')
        return a-b;
   else if(operatorSign=='*')
        return a*b;
   else if(operatorSign=='/')
        return a/b;
     else if(operatorSign=='^')
        return pow(a,b);

}

int operatorPrecedence(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;
}
