#include <iostream>
using namespace std;
class base
{
    public:
    void fun1(){cout<<"function 1 "<<endl;};
    void fun2(){cout<<"function 2 "<<endl;};
    void fun3(){cout<<"function 3 "<<endl;};
};
class derived:public base
{
    public:
    void fun4(){cout<<"function 4 "<<endl;};
    void fun5(){cout<<"function 5 "<<endl;};
    
};
int main()
{
    base *p;
    p= new derived;
    p->fun1();
    p->fun2();
    p->fun3();





    return 0;
}