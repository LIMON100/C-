#include<iostream>
using namespace std;

class number
{
    int x,y;
public:
    number()
    {
        x=0;
        y=0;
    }
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

    number operator ++ ();
    number operator ++ (int a);
};

number number::operator++(int a)
{
    number t;
    t.x=x;
    t.y=y;
    x++,y++;

    return t;
}

number number::operator++()
{
    number t;
    x++,y++;
    t.x=x;
    t.y=y;

    return t;
}

int main()
{
    number n1(1,2),n2(2,5),n3;
    cout<<"N1->before  ";
    n1.print();
    n3=n1++;
    cout<<"N1->After  ";
    n1.print();

    n3.print();
    return 0;
}
