#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"factors of "<<n<< " are "<<endl;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}