#include<iostream>
using namespace std;

int  main()

{
	int a;
	a=5;
   
    int *p;
	p=&a;
	
	int& r=a;
	cout<<a<<endl;
	cout<<*p<<endl;	
	cout<<r<<endl;
	
    r=10;
    cout<<a<<endl;
	cout<<*p<<endl;	
	cout<<r<<endl;
	return 0;
}
