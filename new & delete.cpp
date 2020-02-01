#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int[6];
    ptr[1 ]=7;
    cout<<ptr[1]<<endl;
    delete[]ptr;
    return 0;
}
