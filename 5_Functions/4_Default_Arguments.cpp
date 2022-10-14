#include <iostream>
using namespace std;
int add(int a, int b, int c=0 , int d=0) // c and d are optional 
{
    return a+b+c+d;

}
int main()
{
    cout<<add(10,5)<<endl;
    cout<<add(10,5,5)<<endl;
    cout<<add(10,5,5,5)<<endl;
    return 0;
}