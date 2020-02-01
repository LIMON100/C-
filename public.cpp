#include<iostream>
using namespace std;

class rectengular
{
public:
   int height;
   int width;
   int area();
};

int rectengular::area()
{
	return height*width;
}

int main()
{
	rectengular obj;
	obj.height=4;
	obj.width=5;
	
	cout<<"Area is= "<<obj.area()<<endl;
	return 0; 
}
