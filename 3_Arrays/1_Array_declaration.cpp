#include <iostream>
using namespace std;

int main()
{
    // int A[5] = {2,4,6,8,10};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<A[i]<<endl;
    // }

    // OR we can use

    // for( int x:A)
    // {
    //     cout<<x<<endl;
    // }
    
    // In case of float

    float A[]= {2.4f,4.9f,6.3f,7.9f,8.8f};
    for (auto x:A)
    {
        cout<<x<<endl;
    }
    
    return 0;
}