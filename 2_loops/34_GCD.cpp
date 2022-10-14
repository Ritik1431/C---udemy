#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter two numbers"<<endl;
    cin>>n;
    cin>>m;

    while (m!=n)
    {
        if (n>m)
        {
            n=n-m;
        }
        else if (m>n)
        {
            m = m-n;
        }
        
    }
        cout<<"GCD of Two numbers is "<<m<<endl;
    


    return 0;
}