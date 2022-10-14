#include <iostream>
using namespace std;
class Test
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void func1();

};

void func1()
{
    Test t;
    t.a = 15;
    t.b = 16;
    t.c = 10;
}
int main()
{
    
    return 0;
}