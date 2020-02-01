#include<iostream>
using namespace std;

class number
{
	int x,y;
	public:
		number()
		{
			x=0;
			y=0;
		}
		number(int a,int b)
		{
			x=a;
			y=b;
		}
		
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
		
		friend void operator << (ostream &os,number ob) 
		{
			os<<ob.x<<" "<<ob.y<<endl;
		}
};

int main()
{
	number n1(2,3),n2(4,5),n3;
	cout<<n2;
	return 0;
}
