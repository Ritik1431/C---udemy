#include <iostream>
using namespace std;

int main()
{
    int sum =0,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            sum +=i;
        }
    }
    cout<<"sum is "<<sum<<endl;
    if (sum==n*2)
    {
        cout<<"It is a perfect number"<<endl;

    }
    else
    cout<<"It is not a perfect number"<<endl;
    
    return 0;
}