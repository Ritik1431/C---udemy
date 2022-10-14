#include <iostream>
using namespace std;

int main()
{
    int a,b,c,disc;
    cout<<"Enter the value of a , b and c"<<endl;
    cin>>a>>b>>c;

    cout<<"The quadratic equation is "<<a<<"x2 + "<<b<<"x + "<<c<<endl;    
    disc = (b*b)-(4*a*c);

    if (disc == 0)
    cout<<"roots are real and equal"<<endl;
    else if (disc>0)
    cout<<" roots are real and unequal"<<endl;
    else 
    cout<<"roots are imaginary"<<endl;
    
    
    return 0;
}