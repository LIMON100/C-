#include<iostream>
using namespace std;
class abc
{
    int a;
public:
    abc(int x)
    {
        a=x;
    }
    int ret()
    {
        return a;
    }
};
int main()
{
    abc obj(21);
    cout<<obj.ret()<<endl;
    return 0;
}
