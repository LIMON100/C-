#include<iostream>
using namespace std;
class rec
{
   int height;
   int width;
   
   public:
   void set(int a,int b)
   {
   	  this->height=a;
   	  this->width=b;
	   }	
	   
	   int area()
	   {
	   	return height*width;
	   }
};

int main()
{
	rec obj;
	obj.set(4,5);
	cout<<"Area= "<<obj.area()<<endl;
}
