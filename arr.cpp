#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={2,12,4,32,12,43,123,43},i;
    for(i=0;i<8;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    sort(a,a+8);
    for(i=0;i<8;i++)
        cout<<a[i]<<" ";
        return 0;
}
