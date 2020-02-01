#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return 3*x-cos(x)-1;
}

void bisection(double a,double b)
{
    double c;
    if(func(a)*func(b)>=0)
    {
        printf("This is not valid");
    }

    while((b-a)>=EPSILON)
    {
       c=(a+b)/2;

      if(func(a)*func(c)<0)
       {
           b=c;
       }
       else
       {
           a=c;
       }
    }

    printf("The root is: %.02f",c);
}

int main()
{
    double a,b;
    printf("Enter number a: ");
    scanf("%lf",&a);

    printf("Enter number b: ");
    scanf("%lf",&b);

    bisection(a,b);
    return 0;
}
