#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

float add(float a,float b)
{
	return (a+b)*2;
}

int main()
{
    cout<<add(4,6)<<endl;
    cout<<add(7,8)<<endl;
 	return 0;
}
