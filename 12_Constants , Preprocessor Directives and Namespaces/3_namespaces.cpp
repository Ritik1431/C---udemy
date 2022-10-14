#include <iostream>
using namespace std;
namespace First{   //  When we have to write functions with same name we can write it inside the namespace
void fun()
{
    cout<<"First"<<endl;
}

}
namespace Second{

void fun()
{
    cout<<"Second"<<endl;
}
}
int main()
{
     First::fun();    // accessing the first function
    return 0;
}