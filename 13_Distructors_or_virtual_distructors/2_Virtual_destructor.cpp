#include <iostream>
using namespace std;
class base
{
    public:
    int *p;
    base()
    {
        cout<<"base contructed"<<endl;
    }
    virtual ~base()
    {
        cout<<"base destroyed"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"derived created"<<endl;
    }
    ~derived()
    {
        cout<<"derived destroyed"<<endl;
    }
};
int main()
{
    base *p = new derived();
    delete p;
    return 0;
}