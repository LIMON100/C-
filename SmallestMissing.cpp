#include<iostream>
using namespace std;

int missingNumber(int a[],int n)
{
    int val,i,j,nextvalue;

    for(i=0; i<n; i++)
    {
        if(a[i]<=0 || a[i]>n)
            continue;

        val=a[i];

        while(a[val-1]!=val)
        {
            nextvalue=a[val-1];
            a[val-1]=val;
            val=nextvalue;

            if(val<=0 || val>n)
                break;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]!=i+1)
        {
            return i+1;
        }
    }

    return n+1;
}

int main()
{
    int t,i,a[50],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<missingNumber(a,n)<<endl;
    }
    return 0;
}
