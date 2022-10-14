#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b,int c)
{
    return a+b+c;
}
float add(float a, float b,float c)
{
    return a+b+c;
}

int main()
{
    int a,b,c;
    int d = add(10,5);
    int e = add(10,5,5);
    float f = add(10.5f,16.2f,11.4f);

    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;

    return 0;
}