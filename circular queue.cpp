#include<stdio.h>
#include<iostream>
using namespace std;

const int size=7;
int a[size];
int f=0,r=0;

void enque(int value)
{
    int n_r=(r+1)%size;
    if(n_r==f)
    {
        printf("Queue is full.\n");
        printf("next rear: %d\n",n_r);
    }

    else
    {
        a[r]=value;
        printf("rear: %d\n",r);
        r=n_r;
    }
}

void print()
{
    for(int i=f; i!=r; i=(i+1)%size)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void dequeue()
{
    if(f==r)
    {
       printf("Queue is empty");
    }

    else
    {
        f=(f+1)%size;
        printf("front: %d\n",f);
    }
}

int main()
{
    enque(34);
    print();
    enque(4);
    print();
    enque(3);
    print();
    enque(12);
    print();
    enque(9);
    print();
    enque(1);
    print();
    enque(11);
    print();

    dequeue();
    print();
    enque(66);
    print();
    return 0;
}
