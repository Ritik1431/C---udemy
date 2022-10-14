#include <iostream>
using namespace std;

int main()
{
    int a = 10,b = 0,c;

    try
    {
        if(b==0)
            throw string("error due to zero");
            // throw 1;
            // throw 1.5;
            // throw 1.5f;
            // throw 'p';
        c=a/b;
        cout<<c;
    }    
    catch(string e)  // The data type of the thrown variable should be written same inside the catch  
    {
        cout<<"Division with zero "<<e<<endl;
    }
    cout<<"BYE"<<endl;
    return 0;
}