#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    

    void getLength(int length)
    {
        this->length=length;
    }
    void getBreadth(int breadth)
    {
        this->breadth=breadth;
    }
    
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.getLength(10);
    r1.getBreadth(20);
    r1.area();
    
    
    return 0;
}