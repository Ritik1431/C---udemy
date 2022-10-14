#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,r1,r2;
    cout<<"Enter the value of a , b ,c"<<endl;
    cin>>a>>b>>c;

    cout<<"The quadratic equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;

    r1 = (-b + sqrt(b*b-4*a*c))/2*a;
    r2 = (-b - sqrt(b*b-4*a*c))/2*a;

    cout<<"Roots of quadratic equation are "<<r1<< " and "<<r2<<endl;
    return 0;
}