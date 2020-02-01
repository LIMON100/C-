#include<iostream>
using namespace std;

class rantangle
{
 public:
     int height,width;
     int area();
};

int rantangle::area()
{
   return height*width;
}

int main()
{
    rantangle obj;
    obj.height=5;
    obj.width=5;

    cout<<"Area = "<<obj.area()<<endl;
    return 0;
}
