#include<iostream>
using namespace std;

class rectengle
{
   int height,width;
   public:
       void set(int height,int width)
       {
           this->height=height;
           this->width=width;
       }
       int area()
       {
           return height*width;
       }
};

rectengle scan()
{
    int h,w;
    cin>>h>>w;
    rectengle ob;
    ob.set(h,w);
    return ob;
}
void print(rectengle abc)
{
    cout<<abc.area()<<endl;
}
int main()
{
   rectengle obj;
   obj=scan();
   print(obj);
   return 0;
}
