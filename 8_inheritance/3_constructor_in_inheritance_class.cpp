#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"default of base constructor called"<<endl;
    }
    base(int x)
    {
        cout<<"Parameterized constructor of base class called"<<x<<endl;
    }
};

class derived:public base
{
    public:
    derived()
    {
    cout<<"default of derived constructor called"<<endl;
    }
    derived(int x,int y):base(x)
    {
        cout<<"Parameterized constructor of derived class called"<<y<<endl;
    }

};
int main()
{
    derived d(5,10);
    
    return 0;
}