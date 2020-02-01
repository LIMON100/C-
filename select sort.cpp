#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[20],i,j,n=5;

    cout<<"Enter array elements : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }

    cout<<"After sorting : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
