#include<iostream>
using namespace std;

class rantangle
{
    int height;
    int width;
 public:
     void set(int a,int b);
     int area();
};
class rantangle1
{
    int height;
    int width;
 public:
     void set(int a,int b);
     int area();
};

inline int rantangle::area()
{
   return height*width;
}

void rantangle::set(int a,int b)
{
    height=a;
    width=b;
}
inline int rantangle1::area()
{
   return height*width;
}

void rantangle1::set(int a,int b)
{
    height=a;
    width=b;
}

int main()
{
    rantangle obj;
    rantangle1 obj1;
    obj.set(2,3);
    obj1.set(5,6);

    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Area = "<<obj1.area()<<endl;
    return 0;
}


