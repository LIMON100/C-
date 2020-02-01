#include<iostream>
using namespace std;
int *a;
int size;
int top=-1;

void push(int value)
{
    if(top<10)
    {
        top++;
        a[top]=value;
    }
    else
    {
        cout<<"stack is full."<<endl;
    }
}

void pop()
{
    top--;
    if(top>=10)
    {
        cout<<"Stack is empty."<<endl;
    }
}

void print()
{
    int i;
    for(i=0;i<top;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int i,x;
    cout<<"size of the array: ";
    cin>>size;
    a=new int[size];
    for(i=0;i<=size;i++)
    {
        cin>>x;
        push(x);
    }

    pop();
    print();
    pop();
    print();

    return 0;
}
