#include<iostream>
using namespace std;

int main()
{
    int a[20],i,j,loc,mini,temp,s;

    cout<<"Enter array size : " ;
    cin>>s;

    cout<<"Enter array elements : ";
    for(i=0; i<s; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<(s-1); i++)
    {
        mini=a[i];
        loc=i;
        for(j=i+1; j<s; j++)
        {
            if(a[j] < mini)
            {
                mini=a[j];
                loc=j;
            }
        }

       temp=a[i];
       a[i]=a[loc];
       a[loc]=temp;

    }

    cout<<"Array after sorting : ";
    for(i=0; i<s; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

