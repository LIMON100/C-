#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int m,x,y,i,zeroTest=0;
    int bsum,isum;
    int arry[100];
    cin>>m;
    for(i=0;i<m;i++){
        cin>>arry[i];
    }
    cin>>x>>y;
    for(i=0;i<m;i++)
    {
        bsum=0,isum=0;

        for(int j=i-1;j>=0;j--)
        {
            bsum=bsum+arry[j];
        }

        for(int k=i;k<m;k++)
        {
            isum=isum+arry[k];
        }

        if(bsum>x && bsum<=y && isum>=x && isum<=y){
            cout<<i+1<<endl;
            zeroTest=1;
            break;
            }

    }

    if(zeroTest==0)
    cout<<"0"<<endl;
    return 0;
}
