#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    try
    {
        if (b == 0)
            throw 1;      // we can throw anything
        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "Division by zero " <<e<< endl; // we can also print e like error code 101, etc
    }
    cout<<"BYE"<<endl;

    return 0;
}