#include <iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();  


};
class cuboid:public rectangle{
    private:
    int height;
    public:
    void setHeight(int h)
    {
        height = h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    cuboid c1;
    c1.setLength(10);
    c1.setBreadth(20);
    c1.setHeight(10);
    cout<<"Area of rectangle is "<<c1.area()<<endl;
    cout<<"perimeter of rectange is "<<c1.perimeter()<<endl;
    cout<<"Volume of cuboid is "<<c1.volume()<<endl;
    return 0;
}

rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}

rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

rectangle::rectangle(rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void rectangle::setLength(int l)
{
    length = l;
}
void rectangle::setBreadth(int b)
{
    length = b;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length + breadth);
}
bool rectangle::isSquare()
{
    return length==breadth;
}
rectangle::~rectangle()
{
    cout<<"Rectangle destroyed"<<endl;
}