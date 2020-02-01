#include<bits/stdc++.h>
using namespace std;

int parti(int a[],int s,int e)
{
    int index=s;
    int pivot=a[e];

    for(int i=s; i<e; i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[index]);
            index++;
        }
    }
    swap(a[index],a[e]);
    return index;
}

void quicksort(int a[],int s,int e)
{
    if(s<e)
    {
        int index=parti(a,s,e);
        quicksort(a,s,index-1);
        quicksort(a,index+1,e);
    }
}

int main()
{
    printf("Enter no of elements: ");
    int n,a[50];
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a,0,n-1);

    for(int j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }

    return 0;
}
