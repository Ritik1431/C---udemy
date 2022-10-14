#include <iostream>
using namespace std;

class base
{
    public:
    int x=10;
    void show()
    {
        cout<<x<<endl;
    }
};

class derived:public base
{
    public:
    int y=9;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    
    derived d;
    d.display();
    
    return 0;
}