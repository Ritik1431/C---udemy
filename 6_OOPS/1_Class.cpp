#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breath;

    int area(){
        return length*breath;
    }
    int perimeter(){
        return 2*(length+breath);
    }
};
int main()
{
    rectangle r1,r2;
    r1.length=5;
    r1.breath=5;
    cout<<" Area of rectangle r1 is "<<r1.area()<<endl;

    r2.length=15;
    r2.breath=5;
    cout<<" Area of rectangle r2 is "<<r2.area()<<endl;
    return 0;
}