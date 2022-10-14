#include <iostream>
using namespace std;
class Test
{
    public:
    int *p;

    Test()     // constructor aquires resources 
    {
        p = new int [10];
        cout<<"Test is called"<<endl;
    }
    ~Test()    //  destructor releases resources
    {
        delete []p;
        cout<<"Test is deleted"<<endl;
    }
};
int main()
{
    Test t;
    return 0;
}