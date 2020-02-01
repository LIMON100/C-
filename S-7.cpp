#include<iostream>
using namespace std;

class rectangale
{
  public:
      int height;
      int width;
      int area()
      {
          return height*width;
      }
};

int main()
{
    rectangale obj;
    obj.height=8;
    obj.width=5;
    cout<<"Area= "<<obj.area()<<endl;
    return 0;
}
