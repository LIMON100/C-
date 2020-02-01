#include<iostream>
using namespace std;

class rectangla
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
} ;

int main()
{
    rectangla obj;
    obj.set(2,13);
    cout<<obj.area()<<endl;
    return 0;
}
