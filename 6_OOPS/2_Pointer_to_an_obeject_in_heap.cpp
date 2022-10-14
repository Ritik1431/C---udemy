#include <iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int bredth;
    
    int area(){
        return length*bredth;
    }
    int perimeter(){
        return 2*(length +   bredth);
    }


};
int main()
{
    rectangle r1;
    rectangle *p;
    p = &r1;
    p->length = 10;
    p->bredth = 20;
    cout<<p->area()<<endl;
    return 0;
}