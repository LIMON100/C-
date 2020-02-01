#include<iostream>
using namespace std;

class rec
{
	int height;
	int width;
	
	public:
		void set(int a,int b)
		{
			height=a;
			width=b;
		}
		
		int area()
		{
			return height*width;
		}
};

void print(rec abc)
{
	cout<<abc.area()<<endl;
}

rec scan()
{
	int h,w;
	cin>>h>>w;
	rec ob;
	ob.set(h,w);
	print(ob);
	return ob;
}

int main()
{
	rec obj;
	obj=scan();
	return 0;
}
