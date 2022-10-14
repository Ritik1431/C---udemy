#include <iostream>
using namespace std;
class base 
{
    public:
    virtual void display()
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
    base *p = new derived;
    p->display();
    return 0;
}