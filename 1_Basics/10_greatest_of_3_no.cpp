#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    if (a>b && a>c)
        cout<<"a is greatest"<<endl;

    else if (b>c)
    
    cout<<"b is greatest"<<endl;
    
    else
    cout<<"c is grestest"<<endl;
    
    
    return 0;
}