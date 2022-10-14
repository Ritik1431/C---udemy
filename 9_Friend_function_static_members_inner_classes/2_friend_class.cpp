#include <iostream>
using namespace std;
class your;// we have to write this to make compiler know that this class is present.
class my
{
    private:
    int a= 10;
    friend your; //   friend class
};
class your
{
    my m;
    void func()
    {
        m.a = 12;
    }
};
int main()
{

    return 0;
}