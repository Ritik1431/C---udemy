#include <iostream>
using namespace std;
class complex{
    
    public:
    int real;
    int imag;
    complex(int r =0,int i=0 )
    {
        real =r;
        imag = i;
    }
    friend complex operator+(complex x1,complex x2)
    {
        complex t;
        t.real = x1.real+x2.real;
        t.imag = x1.imag+x2.imag;
        return t;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.real = 4 ; c1.imag = 5;
    c2.real = 6 ; c2.imag = 9;
    c3 = c1+(c2);
    cout<<c3.real<<"+ i"<<c3.imag;


    
    return 0;
}