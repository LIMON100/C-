#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return 3*x-cos(x)-1;
}
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b-a) >=0.01)
    {
        c = (a*func(b) - b*func(a))/ (func(b) - func(a));
        if (func(c) == 0.0)
            break;

        else if(func(c)*func(a) < 0){
                b = c;
        }
        else{
            a = c;
        }
        printf("Root is: %.02f\n",c);
    }
}
int main()
{
    double a,b;
    printf("Enter two number: ");
    cin>>a>>b;
    bisection(a, b);
    return 0;
}

