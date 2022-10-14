#include <iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum +=i;  //  Alternate of  sum = sum + i; 
    }
        cout<<"Sum of n natural no is "<<sum<<endl;
    
    return 0;
}