#include<bits/stdc++.h>
using namespace std;

float y(float x)
{
    return log(x);
}
float trapezoidal(float a, float b, float n)
{
    float h = (b-a)/n;
    float s = y(a)+y(b);

    for (int i = 1; i < n; i++)
        s += 2*y(a+i*h);

    return (h/2)*s;
}
int main()
{
    float x0 = 4;
    float xn = 5.2;
    int n = 6;

    printf("Value is %f\n",trapezoidal(x0, xn, n));
    return 0;
}
