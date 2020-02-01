#include<iostream>
using namespace std;

class abc
{
	int a;
	public:
		abc(int x)
		{
			a=x;
		}
		
		abc()
		{
			a=0;
		}
		
		int ret()
		{
			return a;
		}
};

int main()
{
	abc ob(10);
	abc ob1();
	cout<<ob.ret()<<endl;
	cout<<ob1.ret()<<endl;
	return 0;
}
