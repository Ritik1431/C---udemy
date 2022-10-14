#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;
    cout<<x<<endl;

    x++;
    y++;
    cout<<x<<endl;

    //  We will print address of x and y
    cout<<&x<<" "<<&y; // both x and y shares same address

    return 0;
}