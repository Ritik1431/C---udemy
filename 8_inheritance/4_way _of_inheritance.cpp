#include <iostream>
using namespace std;
class parent
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funParent()
    {
        a=10;
        b=5;
        c=7;
    }
};
class child:public parent
{
    void funchild()
    {
        // a = 11;  Not accessible
        b = 31;
        c = 44;
    }
};
class grandchild:public child
{
    void funGrandchild()
    {
        // a = 12;  Not accessible
        b = 40;
        c = 55;
    }
};
int main()
{
    child c1;
    // c1.a = 56;   Not accessible
    // c1.b = 89;   Not accessible
    c1.c = 90;
    
    return 0;
}