#include<iostream>
using namespace std;

class rectengular
{
private:
	int height;
	int width;
	
public:
	int area();
	void set(int h,int w);
};

void rectengular::set(int h,int w)
{
	height=h;
	width=w;
}

int rectengular::area()
{
	return height*width;
}

int main()
{
	rectengular obj;
	obj.set(6,7);
	cout<<"Area is= "<<obj.area()<<endl;
	return 0;
}
