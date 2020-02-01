#include<iostream>
using namespace std;

class rec
{
   int height;
   int width;
   
   public:
    rec(int a,int b)
	{
		height=a;
		width=b;
	}
	
	int area()
	{
		return height*width;
	}	
};

int main()
{
	rec obj[5]={rec(1,2),rec(2,3),rec(3,4),rec(4,5),rec(5,6)};
	/*obj[0].set(1,2);
	obj[1].set(2,3);
	obj[2].set(3,4);
	obj[3].set(4,5);
	obj[4].set(5,6);*/
	
	for(int i=0; i<5; i++)
	{
		cout<<"i= "<<obj[i].area()<<endl;
	}
	
	return 0;
}
