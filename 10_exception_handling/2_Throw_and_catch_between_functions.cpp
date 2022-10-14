#include <iostream>
using namespace std;
int division(int x,int y)
{
    if(y==0)
        throw 1;
    return x/y;
}
int main()
{
    int c;
    try
    {
        c = division(10,0);
    cout<<c;
    }
    catch(int e)
    {
        cout<<"Divison by zero "<<e<<endl;
    }
    return 0;
}