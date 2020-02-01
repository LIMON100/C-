#include<iostream>
using namespace std;

class rec;
class cost
{
	int costrate;
	public:
	   void setvalue(int a)
	   {
	   	  costrate=a;
        }
     int totalcost(rec r);
};

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
		friend cost::totalcost(rec r);

};

int cost::totalcost(rec r)
{
	return costrate*r.height*r.width;
}

int main()
{
	rec ob;
	ob.set(7,4);

	cost c;
	c.setvalue(100);

	cout<<ob.area()<<endl;
	cout<<c.totalcost(ob);

	return 0;
}

