#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    int marks;
};

class result:protected student
{
public:

    void set()
    {
        cin>>roll>>marks;
    }
    void print()
    {
        cout<<roll<<" "<<marks;
    }
};

int main()
{
    result ob;
    ob.set();
    ob.print();
    return 0;
}

