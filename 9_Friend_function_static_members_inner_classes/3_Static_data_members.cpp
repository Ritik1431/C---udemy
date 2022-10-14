#include <iostream>
using namespace std;
class test
{
public:
    int a, b;

public:
    static int count;
    test()
    {
        a = 10;
        b = 20;
        count++;
    }   
    static int getcount()
    {
        // a++;     it will not work because only static variables are accessible inside static functions
        return count;
    }
    
};
int test::count = 0;
int main()
{
    test t1,t2;
    // cout<<t1.count<<endl;
    // cout<<t2.count<<endl;
    // t1.count=25;
    // cout<<t2.count<<endl;
    // cout<<test::count<<endl; //   Therefore, there is only one single counter variable which is accessible to all the objects.

    cout<<test::getcount()<<endl;
    return 0;
}