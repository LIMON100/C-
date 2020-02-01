#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return 3*x-cos(x)-1;
}

double e=0.01;
double c;

void bisection(double a,double b)
{
    if(func(a) * func(b) >= 0)
    {
        printf("Incorrect a and b");
        return;
    }

    while ((b-a) >= e)
    {
        c = (a+b)/2;
        if (func(c) == 0.0){
            printf("Root = %.2f\n",c);
            break;
        }
        else if (func(c)*func(a) < 0){
                printf("Root = %.2f\n",c);
                b = c;
        }
        else{
                printf("Root = %.2f\n",c);
                a = c;
        }
    }
}

int main()
{
    double a,b;
    a=0;
    b=1;

    printf("The function used is 3*x-cos(x)-1\n");
    printf("a = %.2f\n",a);
    printf("b = %.2f\n",b);
    bisection(a,b);
    printf("\n");
    printf("Accurate Root calculated is = %0.3f\n",c);

    return 0;
}
