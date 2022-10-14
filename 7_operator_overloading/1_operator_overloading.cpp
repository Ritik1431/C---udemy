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
    complex operator+(complex x)
    {
        complex temp;
        temp.real = real+x.real;
        temp.imag = imag+x.imag;
        return temp;
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