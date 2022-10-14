#include <iostream>
using namespace std;

class complex
{
    private:
    int real,imag;
    public:

    complex(int r=0, int i =0)
    {
        real = r;
        imag = i;
    }

    friend ostream & operator<<(ostream &out,complex &c);
    
};
ostream & operator<<(ostream &out,complex &c)
{
    out<<c.real<<" +i "<<c.imag;
    return out;
}
int main()
{
    complex c(10,5);
    cout<<c;
    operator<<(cout,c);
    return 0;
}