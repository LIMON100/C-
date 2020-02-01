#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[]={43,54,22,1,14,4,1111,0,3};
	
	for(int i=0; i<9; i++)
	{
		cout<<a[i]<<" ";
	}
	
	sort(a,a+9);
	cout<<endl;
	for(int i=0; i<9; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
