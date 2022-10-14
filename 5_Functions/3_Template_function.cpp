#include <iostream>
using namespace std;
template<class T>

T maximum(T x, T y)             //  It will automatically recognize the datatype 
{
    return x>y?x:y;             // It will return the greater number
}
int main()
{
    cout<<maximum(10,15)<<endl;
    cout<<maximum(10.5f,5.7f)<<endl;
    return 0;
}