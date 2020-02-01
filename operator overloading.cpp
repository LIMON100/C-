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
		
		friend number operator + (number a,number b)
		{
			number t;
			t.x=a.x+b.x;
			t.y=+a.y;
			return t;
		}
};


int main()
{
	number n1(4,2),n2(1,1),n3;
	n3=n1+n2;
	n3.print();
	return 0;
}
