#include <iostream>
using namespace std;
class base 
{
    public:
    void display()
    {
        cout<<"display of base class"<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"display of derived class"<<endl;
    }
};
int main()
{
    base b;
    b.display();
    derived d;
    // d.display();
    d.base::display();
    return 0;
}