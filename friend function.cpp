#include<iostream>
using namespace std;

class rectengle
{
   int height,width;
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
       friend class cost;
};

class cost
{
    int costRate;
public:
    void setvalue(int a)
    {
        costRate=a;
    }
    int totalcost(rectengle A)
    {
        return costRate*A.height*A.width;
    }
};

int main()
{
   rectengle r;
   r.set(3,4);
   cost c;
   c.setvalue(100);
   cout<<r.area()<<endl;
   cout<<c.totalcost(r)<<endl;

      return 0;
}

