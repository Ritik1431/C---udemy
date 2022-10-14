#include <iostream>
using namespace std;

int main()
{
    cout<<"MENU";
    cout<<"1: Add, 2: Sub, 3: mult, 4: div"<<endl;
    int option;
    cin>>option;
    int a,b,c;
    cin>>a>>b;
    switch (option)
    {
    case 1:
    c = a+b;
    // cout<<c;
        break;
    
    case 2:
    c = a-b;
    // cout<<c;
        break;
    
    case 3:
    c = a*b;
    // cout<<c;
        break;
    
    case 4:
    c = a/b;
    // cout<<c;
        break;
    default:
    cout<<"Invalid Input"<<endl;
        break;
    }
    cout<<"Result is "<<c<<endl;

    return 0;
}