#include<iostream>
using namespace std;

class student
{
private:
    int roll;
    int marks;
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

class result:public student
{
public:

    void all()
    {
        set();
        print();
    }
};

int main()
{
    result ob;
    ob.all();
    return 0;
}
