#include<iostream>
using namespace std;

class rec
{
   int height;
   int width;
   
   public:
   int area();
   rec(int h,int w);
	~rec();
};

int rec::area()
{
	return height*width;
}

rec::rec(int h,int w)
{
	height=h;
	width=w;
	cout<<"Constructor "<<area()<<endl;
}

rec::~rec()
{
	cout<<"Destructor "<<area()<<endl;
}

int main()
{
	rec obj(5,6),obj1(5,3);
	return 0;
}
